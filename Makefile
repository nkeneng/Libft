NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c \
		ft_tolower.c ft_toupper.c ft_strtrim.c ft_atoi.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c

BONUS_SRCS = ft_lstadd_front.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

AR = ar rcs

LIB = ranlib

all: $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	${AR} ${NAME} ${OBJS} ${BONUS_OBJS}

$(NAME):: $(OBJS)
	${AR} ${NAME} ${OBJS}
	${LIB} ${NAME} # this line is redundant because the s option in ar rcs already updates the index

%.o: %.c # this rule tells that in order to build any o file it should look for the corresponding c file
	$(CC) $(CFLAGS) -c $< -o $@ # the -I helps the compiler look for header files

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
