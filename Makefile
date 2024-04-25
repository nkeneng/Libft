NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c

OBJS = $(SRCS:.c=.o)

AR = ar rcs

LIB = ranlib

all: $(NAME)

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