# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/03/14 10:36:40 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	push_swap.c\
		ft_av_to_int.c\
		ft_check_list_char.c\
		ft_check_list_int.c\
		move_a.c\
		move_b.c\
		combo_ab.c\

	  

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

INC = ./printf/libftprintf.a\
printf/libft/libft.a\


.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	make all -C ./printf
	make all -C ./printf/libft
	gcc $(FLAG) $(OBJS) $(INC) -o $(NAME)
clean:
	$(RM) $(OBJS)
	make clean -C ./printf
	make clean -C ./printf/libft


fclean:	clean
	$(RM) $(NAME)
	make fclean -C ./printf
	make fclean -C ./printf/libft
re:	fclean all
