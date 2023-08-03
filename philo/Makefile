# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/08/02 14:03:23 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRCS =	philo.c\
		ft_av_to_tab.c\
		ft_error.c\
		ft_philo.c\
		ft_utils.c\
		ft_atoi.c\
		ft_mem2.c\
		ft_put.c\
		ft_mem.c\
		ft_routine.c\
		ft_mourur.c\
		ft_printf.c\

OBJST = $(addprefix src/test/,$(SRCST:.c=.o))


OBJS = $(addprefix src/,$(SRCS:.c=.o))

CC = gcc

CFLAGS = -g3 -Wall -Werror -Wextra

RM = rm -rf

INC = -I 


.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS) 
	@gcc $(FLAG) $(OBJS) $(LIBS) -o $(NAME)

debug:	$(OBJS)
	@gcc $(FLAG) -fsanitize=thread $(OBJS) $(LIBS) -o $(NAME)

test: $(OBJS) $(OBJST)
	@gcc $(FLAG) $(OBJS) $(OBJST) $(LIBS) -o $(NAME)
	
testd: $(OBJS) $(OBJST)
	@gcc $(FLAG) -fsanitize=thread $(OBJS) $(OBJST) $(LIBS) -o $(NAME)

clean:
	@$(RM) $(OBJS)
	@$(RM) $(OBJST)


fclean:	clean
	$(RM) $(NAME)
	
re:	fclean all

ret: fclean test