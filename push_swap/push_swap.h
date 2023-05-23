/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:22:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/23 15:45:09 by aherrman         ###   ########.fr       */
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
void				ft_init_temp(t_temp *temp);
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
void				ft_sort(t_all *list);
//*****  list *****//
//ft_utils_chain_list_1/
void				ft_lstadd_back_int(t_stack **list, t_stack *new);
t_stack				*ft_new_elem(long int value);
int					ft_lst_range(t_stack *lst);
void				ft_lst_add_front(t_stack **lst, t_stack *new);
int					ft_lower_in_list(t_stack list);
//ft_utils_chain_list_2/
int					ft_list_is_reverse(t_stack *list, int len);
int					ft_valid_sort(t_stack *list, int len);
void				ft_reverse_list(t_stack *list, int len);
void				ft_sort_5(t_stack *list);
void				ft_sort_decrease(t_stack *list);
//ft_utils_chain_list_3/

void				ft_split_list(t_all *list, int nb);
t_stack				**ft_fc(t_stack **list);
int					ft_last_ranking(t_stack *list);
int					ft_high_in_list(t_stack list);

//*****ft_tri/ranking******//
void				ft_sort_for3(t_stack *list);
void				ft_bbot(t_all *list, int select, int len_t);
void				ft_choixpot(t_all *list, int len_t);
void ft_base_sort(t_all *list,int len_t, int len_a,int range);
int	ft_base(t_all *list, int len_t, int len_a, int r);
//*****ft_sort_other**//
void				ft_first_sort(t_all *list, int len_t);
void				ft_sort_high(t_all *list, int len_t);
void				ft_sort_endp1(t_all *list, int len_t);
void				ft_sort_endp2(t_all *list, int len_t);
void				ft_sort_endp3(t_all *list, int len_t);
//ft_sort_last_step
void ft_sort_top(t_all *list,int len_t,int len_a,int range);
void				ft_sort_other(t_all *list);
int					ft_next_rank(t_stack *list, int len_t);
void ft_second_sort(t_all *list,int len_t,int len_a,int r);
void ft_end_sort(t_all *list,int len_t,int len_a);
	//***** ft_move ******//
	void ft_swap(t_stack *list, int select);
void				ft_push(t_stack **pushin, t_stack **pushout, int select);
void				ft_rotate(t_stack **list, int select);
void				ft_rrotate(t_stack **list, int select);
//***** ft_test ******//
void				ft_print_list(t_stack *list);

#endif
