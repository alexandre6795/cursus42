# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/07/18 10:48:08 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

SRCS =	pipex.c\
		valid_av.c\
		arg_to_cmd.c\
		error.c\
		utils_list.c\
		fork.c\
		ft_utils.c\
		utils2.c\
		
SRCST = ft_print_list.c\

OBJST = $(addprefix src/test/,$(SRCST:.c=.o))


OBJS = $(addprefix src/,$(SRCS:.c=.o))

CC = gcc

CFLAGS = -g3 -Wall -Werror -Wextra

RM = rm -rf

LIBS = src/libft/libft.a
INC = -I 


.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS) 
	@make all -C ./src/libft
	@gcc $(FLAG) $(OBJS) $(LIBS) -o $(NAME)

debug:	$(OBJS)
	@make all -C ./src/libft
	@gcc $(FLAG) -fsanitize=address $(OBJS) $(LIBS) -o $(NAME)

test: $(OBJS) $(OBJST)
	@make all -C ./src/libft
	@gcc $(FLAG) $(OBJS) $(OBJST) $(LIBS) -o $(NAME)
	
testd: $(OBJS) $(OBJST)
	@make all -C ./src/libft
	@gcc $(FLAG) -fsanitize=address $(OBJS) $(OBJST) $(LIBS) -o $(NAME)

clean:
	@$(RM) $(OBJS)
	@$(RM) $(OBJST)
	@make clean -C ./src/libft


fclean:	clean
	$(RM) $(NAME)
	@make fclean -C ./src/libft
	
re:	fclean all

ret: fclean test