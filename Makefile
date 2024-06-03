NAME = Libft.a

# Define project directories
LIBFT_DIR = ./lib_ft
PRINTF_DIR = ./ft_printf
GNL_DIR = ./get_next_line

# Define include directories
INCLUDES = -I $(LIBFT_DIR) -I $(PRINTF_DIR) -I $(GNL_DIR)

# Define source files
LIBFT_SRCS = $(shell find $(LIBFT_DIR) -name "*.c")
PRINTF_SRCS = $(shell find $(PRINTF_DIR) -name "*.c")
GNL_SRCS = $(shell find $(GNL_DIR) -name "*.c")

# Combine all source files
SRCS = $(LIBFT_SRCS) $(PRINTF_SRCS) $(GNL_SRCS)

# Define object files
OBJS = $(SRCS:.c=.o)

# Define compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra $(INCLUDES)

# Rule to create the library
$(NAME): $(OBJS)
	# $(MAKE) -C $(LIBFT_DIR)
	# $(MAKE) -C $(PRINTF_DIR)
	ar rcs $(NAME) $(OBJS)

# Rule to compile object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean
	rm -f $(OBJS)

# Clean all (object files + library)
fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean
	rm -f $(NAME)

# Recompile
re: fclean $(NAME)

.PHONY: clean fclean re

