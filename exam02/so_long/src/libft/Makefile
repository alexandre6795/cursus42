# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 15:45:26 by aherrman          #+#    #+#              #
#    Updated: 2023/05/09 14:49:26 by aherrman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_strlen.c \
	   ft_memset.c \
	   ft_bzero.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_memcpy.c \
	  ft_memmove.c\
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c\
	  ft_striteri.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_printf.c\
	  ft_atoi_one_lint.c\
	  pft_putc.c\
	  pft_puts.c\
	  pft_putnb.c\
	  pft_putunb.c\
	  pft_putxnb.c\
	  pft_putpnb.c\
	  pft_compteur.c\
	  get_next_line.c\
	  get_next_line_utils.c\

SRCS_BONUS = ft_lstnew_bonus.c\
			 ft_lstadd_front_bonus.c\
			 ft_lstsize_bonus.c\
			 ft_lstlast_bonus.c\
			 ft_lstadd_back_bonus.c\
			 ft_lstdelone_bonus.c\
			 ft_lstclear_bonus.c\
			 ft_lstiter_bonus.c\
			 ft_lstmap_bonus.c\
			get_next_line_bonus.c\
			get_next_line_utils_bonus.c\

	

OBJS = $(SRCS:.c=.o)

OBJS_BONUS =$(SRCS_BONUS:.c=.o)

CC = gcc

CFLAGS += -Wall -Werror -Wextra

RM = rm -rf

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
	ranlib $(NAME)

clean	:	
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)

fclean	:	clean
	$(RM) $(NAME)

re	:	fclean all

bonus : $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS_BONUS)
	ranlib $(NAME)
