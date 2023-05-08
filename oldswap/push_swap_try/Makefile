# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/04/01 09:49:01 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS =	push_swap.c\
		ft_list_check_int.c\
		ft_verif_av.c\
		ft_char_to_int_list.c\
		ft_error.c\
		ft_split_for_list.c\


	  

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

INC = libft/libft.a\



.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	make all -C ./libft
	gcc $(FLAG) $(OBJS) $(INC) -o $(NAME)
clean:
	$(RM) $(OBJS)
	make clean -C ./libft


fclean:	clean
	$(RM) $(NAME)
	make fclean -C ./libft
re:	fclean all
