NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra 
SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_islower.c ft_isupper.c
OBJS	= ${SRCS:.c=.o}
RM		= rm -rf

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar crs ${NAME} ${OBJS}

all : ${NAME}

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re
