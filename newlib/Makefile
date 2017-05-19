NAME = libft.a

CC = clang -c -Wall -Wextra -Werror 

SRC =	ft_atoi.c			\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isdigit.c		\
		ft_itoa.c			\
		ft_bzero.c			\
		ft_iswhitespace.c	\
		ft_memalloc.c		\
		ft_memcpy.c			\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_memdel.c			\
		ft_memmove.c		\
		ft_memset.c			\
		ft_putchar_fd.c		\
		ft_putchar.c		\
		ft_putendl.c		\
		ft_putendl_fd.c		\
		ft_putnbr.c			\
		ft_putnbr_fd.c		\
		ft_putchar.c		\
		ft_putstr.c			\
		ft_putstr_fd.c		\
		ft_realloc.c		\
		ft_strctrim.c		\
		ft_strcat.c			\
		ft_strchr.c			\
		ft_strclr.c			\
		ft_strcmp.c			\
		ft_strdel.c			\
		ft_strjoin.c		\
		ft_striter.c		\
		ft_striteri.c		\
		ft_strmap.c			\
		ft_strmapi.c		\
		ft_strncmp.c		\
		ft_strequ.c			\
		ft_strnequ.c		\
		ft_strnew.c			\
		ft_strchr.c			\
		ft_strstr.c			\
		ft_strncat.c		\
		ft_strnstr.c		\
		ft_strcpy.c			\
		ft_strdup.c			\
		ft_strlen.c			\
		ft_strtrim.c		\
		ft_strsplit.c		\
		ft_strsub.c			\
		
INC =	libft.h				\
		

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME) :
	@$(CC) $(SRC) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all