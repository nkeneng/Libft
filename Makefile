NAME = Libft.a

# Define project directories
LIBFT_DIR = ./lib_ft
PRINTF_DIR = ./ft_printf
GNL_DIR = ./get_next_line

# Define include directories
INCLUDES = -I $(LIBFT_DIR) -I $(PRINTF_DIR) -I $(GNL_DIR)

# Define source files
LIBFT_SRCS := $(shell awk -v dir="$(LIBFT_DIR)" '/^(SRCS|BONUS_SRCS)/{flag=1; sub(/^[^=]*=\s*/, "");} flag{printf "%s ", $$0; if (!/\\$$/) {flag=0; print ""}}' $(LIBFT_DIR)/Makefile | sed 's/\\//g' | tr '\t' ' ' | tr -s ' ' | sed 's/ \{2,\}/ /g' | awk -v dir="$(LIBFT_DIR)" '{gsub(/[^ ]+/, dir"/&"); print}')
PRINTF_SRCS := $(shell awk -v dir="$(PRINTF_DIR)" '/^(SRCS|BONUS_SRCS)/{flag=1; sub(/^[^=]*=\s*/, "");} flag{printf "%s ", $$0; if (!/\\$$/) {flag=0; print ""}}' $(PRINTF_DIR)/Makefile | sed 's/\\//g' | tr '\t' ' ' | tr -s ' ' | sed 's/ \{2,\}/ /g' | awk -v dir="$(PRINTF_DIR)" '{gsub(/[^ ]+/, dir"/&"); print}')
GNL_SRCS = $(GNL_DIR)/get_next_line.c $(GNL_DIR)/get_next_line_utils.c

#$(info Libft_srcs = $(PRINTF_SRCS)) # Debugging

# Combine all source files
SRCS = $(LIBFT_SRCS) $(PRINTF_SRCS) $(GNL_SRCS)

# Define object files
OBJS = $(SRCS:.c=.o)
GNL_OBJS = $(GNL_SRCS:.c=.o)

# Define compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra $(INCLUDES)

# Rule to create the library
$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(PRINTF_DIR)
	ar rcs $(NAME) $(LIBFT_DIR)/libft.a $(PRINTF_DIR)/libftprintf.a $(GNL_OBJS)

# Rule to compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean
	rm -f $(GNL_OBJS)

# Clean all (object files + library)
fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean
	rm -f $(NAME)

# Recompile
re: fclean $(NAME)

.PHONY: clean fclean re

