# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/03/07 12:19:26 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS =	push_swap.c\
		ft_check_list_char.c\
		ft_check_list_int.c\
		ft_move_a.c\
		ft_move_b.c\
		ft_combo_ab.c\

	  

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	${MAKE} all -C ft_printf
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:	
	$(RM) $(OBJS)
	${MAKE} clean -C ft_printf 


fclean:	clean
	$(RM) $(NAME)
	${MAKE} fclean -C ft_printf 

re:	fclean all
