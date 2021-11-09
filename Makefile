NAME = libft.a
CC = gcc
INC = ./
SRC = ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strrchr.c libft.h ft_isalpha.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_tolower.c ft_bzero.c ft_isascii.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_toupper.c ft_strnstr.c ft_atoi.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_calloc.c ft_strdup.c
FLAGS = -Wall -Wextra -Werror
ARG = -c
OUT = *.o

all: 
	$(CC) $(ARG) $(FLAGS) $(SRC) -I $(INC)
	ar rc $(NAME) $(OUT)
clean:
	rm *.o
fclean:
	rm -f $(NAME)
	rm -f *.o
re : fclean all
