/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:22:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/04/01 10:24:53 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef SEPARATOR
#  define SEPARATOR " "
# endif

//***** LIB *****//
# include "libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

//*****STRUCT*****//

typedef struct stack_list
{
	t_list	*stack_a;
	t_list	*stack_b;
}			t_stack;

//***** fonction *****//
void		ft_init(t_stack *list);
int ft_verif_av(int ac, char **av);
int			ft_char_to_int_list(int ac, char **av, t_stack *stack);
void		ft_error(t_stack *stack);
void ft_list_check_int(t_list stack_a);
int ft_split_for_list(t_list*stack_a,char *s, char c);

//***** move_a ******//
//***** move_b ******//
//***** combo_ab *****//

#endif
