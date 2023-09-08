SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_memmove.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_split.c ft_putchar_fd.c 

NAME = libft.a

OBJS = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs 

RM = rm -f

all: ${NAME}


.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	${AR} ${NAME} ${OBJS}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re