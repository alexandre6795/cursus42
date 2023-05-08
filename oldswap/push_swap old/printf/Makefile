# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/03/11 14:03:57 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =libftprintf.a

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
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:	
	$(RM) $(OBJS) 


fclean:	clean
	$(RM) $(NAME) 

re:	fclean all
