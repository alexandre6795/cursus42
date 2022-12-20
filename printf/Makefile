**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2022/12/16 11:25:37 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

SRCS =	ft_printf.c \
	  	pft_putc.c  \


OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS += -Wall -Werror - Wextra

RM = rm -rf

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all : $(NAME)
	${MAKE} all -C libft
	

$(NAME) : $(OBJS)
	ar rc $(NAME &(OBJS)
	ranlib $(NAME)
	${MAKE} name -C libft

clean :
	$(RM) $(OBJS)
	${MAKE} clean -C libft 


fclean : clean
	$(RM) $(NAME)
	${MAKE} fclean -C libft 

re : fclean all
