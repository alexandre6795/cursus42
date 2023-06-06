# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/06/06 10:51:32 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS =	so_long.c\
		ft_error.c\
		ft_valid_av.c\
		ft_valid_map.c\
		ft_so_long_utils.c\
		
SRCST =

OBJST = $(SRCST:.c=.o)


OBJS = $(addprefix src/,$(SRCS:.c=.o))

CC = gcc

CFLAGS = -g3 -Wall -Werror -Wextra

RM = rm -rf

INC = ./src/libft/libft.a\


.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS) 
	make all -C ./src/libft
	gcc $(FLAG) $(OBJS) $(INC) -o $(NAME)

debug:	$(OBJS)
	make all -C ./src/libft
	gcc $(FLAG) -fsanitize=address $(OBJS) $(INC) -o $(NAME)

test: $(OBJS) $(OBJST)
	make all -C .src//libft
	gcc $(FLAG) $(OBJS) $(OBJST) $(INC) -o $(NAME)
	
testd: $(OBJS) $(OBJST)
	make all -C ./src/libft
	gcc $(FLAG) -fsanitize=address $(OBJS) $(OBJST) $(INC) -o $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJST)
	make clean -C ./src/libft


fclean:	clean
	$(RM) $(NAME)
	make fclean -C ./src/libft
re:	fclean all