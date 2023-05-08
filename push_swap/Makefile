# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/05/04 11:23:58 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	push_swap.c\
		ft_list_check_int.c\
		ft_verif_av.c\
		ft_char_to_int_list.c\
		ft_error.c\
		ft_utils_chain_list1.c\
		ft_move.c\
		ft_ranking.c\
		ft_selection.c\


	  

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g3

RM = rm -rf

INC = libft/libft.a\



.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	make all -C ./libft
	gcc $(FLAG) $(OBJS) $(INC) -o $(NAME)

debug:	$(OBJS)
	make all -C ./libft
	gcc $(FLAG) -fsanitize=address $(OBJS) $(INC) -o $(NAME)

clean:
	$(RM) $(OBJS)
	make clean -C ./libft


fclean:	clean
	$(RM) $(NAME)
	make fclean -C ./libft
re:	fclean all