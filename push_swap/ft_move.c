/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:02:47 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/08 11:59:38 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack **list)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp2 = *list;
	temp = list->next;
	temp2->next=NULL;
	temp->av = NULL;
	ft_lstadd_back_int(&temp,temp2);
	list = &temp;
}
void	ft_swap(t_stack *list, int select)
{
	t_temp	temp;

	temp.lint.temp0 = list->v;
	temp.lint.temp1 = list->next->v;
	list->v = temp.lint.temp1;
	list->next->v = temp.lint.temp0;
	temp.lint.temp2 = list->r;
	temp.lint.temp3 = list->next->r;
	list->r = temp.lint.temp3;
	list->next->r = temp.lint.temp2;
	if (select == 1)
		write(1, "sa", 2);
	else
		write(1, "sb", 2);
	write(1, "\n", 1);
}

void	ft_push(t_stack *in, t_stack *out, int select)
{
	ft_lst_add_front(&in, out);

	if (select == 1)
		write(1, "pa", 2);
	else
		write(1, "pb", 2);
	write(1, "\n", 1);
}