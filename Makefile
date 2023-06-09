# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aitlopez <aitlopez@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 19:06:58 by aitlopez          #+#    #+#              #
#    Updated: 2023/06/07 19:16:46 by aitlopez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = check_errors.c stack.c utils.c movements_s.c movements_p.c push_swap.c

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.c=.o)
HEADER = push_swap.h

RM = rm -f

%.o : %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)
	@echo "$(NAME) cleaned!"

re : fclean all

norm:
	@norminette

.PHONY = all clean fclean re norm
