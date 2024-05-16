NAME= libftprintf.a
NAMELFT= libft.a
CC= cc
FLAGS= -Wall -Wextra -Werror
OBJ= $(SRC:.c=.o)
LIBFT = -L ./libft -lft
SRC= ft_printf.c ft_check_char.c ft_intncount.c ft_putncount.c \
		ft_int_len.c ft_strncount.c ft_unsint.c ft_hexapplier.c \
		
RM= rm -rf
PATHLFT= libft/libft.a
GIVNAME= start

all: $(NAME)
	@$(CC) $(FLAGS) *.c $(NAME) $(PATHLFT) -o $(GIVNAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@make $(FLAGS) -C ./libft

$(OBJ): $(SRC)
	@$(CC) $(FLAGS) -c $(SRC)
	

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)  $(GIVNAME)
	@make fclean -C ./libft

re: fclean all
