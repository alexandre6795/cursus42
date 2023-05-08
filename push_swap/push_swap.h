/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:22:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/08 11:52:27 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//***** LIB *****//
# include "libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

//*****STRUCT*****//
typedef struct t_lint
{
	long int		temp0;
	long int		temp1;
	long int		temp2;
	long int		temp3;
}					t_lint;

typedef struct t_string
{
	char			*temp0;
	char			*temp1;
	char			*temp2;
	char			*temp3;
}					t_string;

typedef struct t_temp
{
	t_lint			lint;
	t_string		string;

}					t_temp;

typedef struct t_stack
{
	long int		v;
	int				r;
	struct t_stack	*next;
	struct t_stack	*av;
}					t_stack;

typedef struct t_all
{
	t_stack			*sa;
	t_stack			*sb;
}					t_all;

//***** fonction *****//
int					ft_push_swap(int ac, char **av);
int					ft_verif_av(int ac, char **av);
int					ft_char_to_int_list(int ac, char **av, t_all *stack);
void				ft_error(t_all *stack);
int					ft_list_check_int(t_stack stack_a);
t_all				*ft_ranking(t_all *stack);
int					ft_selection(t_all stack);
//*****  list *****//
//ft_utils_chain_list_1//
void				ft_lstadd_back_int(t_stack **list, t_stack *new);
t_stack				*ft_new_elem(long int value);
int					ft_lst_range(t_stack *lst);
void				ft_lst_add_front(t_stack **lst, t_stack *new);
int					ft_lower_in_list(t_stack list);
//ft_utils_chain_list_2//

//***** ft_move ******//
void				ft_swap(t_stack *list, int select);
void				ft_push(t_stack *in, t_stack *out, int select);
void 				ft_rotate(t_stack **list);
//***** move_b ******//
//***** combo_ab *****//

#endif
