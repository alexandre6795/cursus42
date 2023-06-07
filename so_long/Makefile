# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/24 10:04:23 by aherrman          #+#    #+#              #
#    Updated: 2023/06/07 16:59:06 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRCS =	so_long.c\
		ft_error.c\
		ft_valid_av.c\
		ft_valid_map.c\
		ft_so_long_utils.c\
		ft_flood_fill.c\
		
SRCST = ft_print_char_tab.c\
		ft_print_map.c\

OBJST = $(addprefix src/test/,$(SRCST:.c=.o))


OBJS = $(addprefix src/,$(SRCS:.c=.o))

CC = gcc

CFLAGS = -g3 -Wall -Werror -Wextra

RM = rm -rf

LIBS = src/libft/libft.a .mlx42/build/libmlx42.a -lglfw -L"/Users/aherrman/.brew/opt/glfw/lib/"
INC = -I .mlx42/include


.c.o:
	$(CC) $(CFLAGS) $(INC) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS) 
	make all -C ./src/libft
	make -C ./.mlx42/build
	gcc $(FLAG) $(OBJS) $(LIBS) -o $(NAME)

debug:	$(OBJS)
	make all -C ./src/libft
	make -C ./.mlx42/build
	gcc $(FLAG) -fsanitize=address $(OBJS) $(LIBS) -o $(NAME)

test: $(OBJS) $(OBJST)
	make all -C ./src/libft
	make -C ./.mlx42/build
	gcc $(FLAG) $(OBJS) $(OBJST) $(LIBS) -o $(NAME)
	
testd: $(OBJS) $(OBJST)
	make all -C ./src/libft
	make -C ./.mlx42/build
	gcc $(FLAG) -fsanitize=address $(OBJS) $(OBJST) $(LIBS) -o $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJST)
	make clean -C ./.mlx42/build
	make clean -C ./src/libft


fclean:	clean
	$(RM) $(NAME)
	make fclean -C ./src/libft
	make clean -C ./.mlx42/build
	
re:	fclean all

ret: fclean test