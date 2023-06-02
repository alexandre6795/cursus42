/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:02:47 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/30 08:55:05 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack **list, int select)
{
	t_stack	*temp;
	t_stack	*first;

	if (!(*list) || !((*list)->next))
		return ;
	first = *list;
	temp = (*list)->next;
	ft_lstadd_back_int(&temp, first);
	*list = temp;
	(*list)->av = NULL;
	if (select == 1)
		write(1, "ra", 2);
	else
		write(1, "rb", 2);
	write(1, "\n", 1);
}

void	ft_swap(t_stack *list, int select)
{
	t_temp	temp;

	temp.i.t0 = list->v;
	temp.i.t1 = list->next->v;
	list->v = temp.i.t1;
	list->next->v = temp.i.t0;
	temp.i.t2 = list->r;
	temp.i.t3 = list->next->r;
	list->r = temp.i.t3;
	list->next->r = temp.i.t2;
	if (select == 1)
		write(1, "sa", 2);
	else
		write(1, "sb", 2);
	write(1, "\n", 1);
}

void	ft_push(t_stack **pushin, t_stack **pushout, int select)
{
	t_stack	*save;
	t_stack	*new;
	t_stack	*temp;

	temp = *pushin;
	new = *pushout;
	if ((*pushout) != NULL)
	save = (*pushout)->next;
	else
	save = NULL;
	if (save != NULL)
	{
		save->av = NULL;
	}
	ft_lst_add_front(&temp, new);
	*pushout = save;
	*pushin = temp;
	if (select == 1)
		write(1, "pa", 2);
	else
		write(1, "pb", 2);
	write(1, "\n", 1);
}

void	ft_rrotate(t_stack **list, int select)
{
	t_stack	*temp;
	t_stack	*last;

	if (!(*list) || !((*list)->next))
		return ;
	last = *list;
	temp = *list;
	while (last->next != NULL)
		last = last->next;
	last->av->next = NULL;
	last->av = NULL;
	ft_lst_add_front(&temp, last);
	temp->av = last;
	*list = last;
	last->av = NULL;
	if (select == 1)
		write(1, "rra", 3);
	else
		write(1, "rrb", 3);
	write(1, "\n", 1);
}
