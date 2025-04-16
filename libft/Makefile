NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_touper.c \
		ft_tolower.c \
		ft_strchar.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)
trash:///ft_memcpy.c
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: srcs/%.c
		$(CC) $(CFLAGS)-c $(SRCS)
	
clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re

