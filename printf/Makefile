# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/01/06 11:50:11 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

SRCS = ft_printf.c\
	  pft_putc.c\
	  pft_puts.c\
	  pft_putnb.c\
	  pft_putunb.c\
	  pft_putxnb.c\
	  pft_putpnb.c\
	  pft_compteur.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	${MAKE} all -C libft
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:	
	$(RM) $(OBJS)
	${MAKE} clean -C libft 


fclean:	clean
	$(RM) $(NAME)
	${MAKE} fclean -C libft 

re:	fclean all
