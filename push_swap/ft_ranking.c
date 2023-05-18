/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ranking.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:47:05 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/18 15:23:27 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_grade(t_stack *stack_a)
{
	t_stack	*temp;
	t_stack	*tmp2;

	tmp2 = stack_a;
	while (tmp2)
	{
		temp = stack_a;
		while (temp)
		{
			if (temp != NULL && temp->v < tmp2->v)
				tmp2->r++;
			temp = temp->next;
		}
		if (temp != NULL && temp->v < tmp2->v)
			tmp2->r++;
		tmp2 = tmp2->next;
	}
}
t_all	*ft_ranking(t_all *stack)
{
	ft_grade(stack->sa);
	return (stack);
}

void	ft_choixpot(t_all *list, int len_t)
{
	if ((list->sb->next) != NULL)
	{
		if (list->sb->r >= len_t / 3)
		{
			if (list->sb->r < list->sb->next->r && list->sb->next->r > len_t
				/ 3)
				ft_swap(list->sb, 2);
		}
		if (list->sb->r <= len_t / 3)
		{
			if (ft_last_ranking(list->sb) < list->sb->r)
			{
				ft_bbot(list, 2, 0);
			}
			else
				ft_rotate(&list->sb, 2);
		}
	}
}
void	ft_bbot(t_all *list, int select, int len_t)

{
	if (select == 1)
	{
		ft_rrotate(&list->sa, 1);
		ft_swap(list->sa, 1);
		ft_rotate(&list->sa, 1);
		if (list->sa->r != len_t)
			ft_rotate(&list->sa, 1);
	}
	else
	{
		ft_rrotate(&list->sb, 2);
		ft_swap(list->sb, 2);
		ft_rotate(&list->sb, 2);
		ft_rotate(&list->sb, 2);
	}
}
void	ft_google(t_all *list, int len_t, int len_a)
{
	t_temp temp;
	ft_init_temp(&temp);
	ft_fc(&list->sa);
	ft_fc(&list->sb);
	while (list->sb->next && list->sb->r != len_t - len_a)
	{
		temp.lint.temp0++;
		list->sb = list->sb->next;
	}
	while (list->sb->next)
		list->sb = list->sb->next;
	while (list->sb->av && (list->sb->r) != len_t - len_a)
	{
		temp.lint.temp1++;
		list->sb = list->sb->av;
	}
	if (temp.lint.temp0  <= temp.lint.temp1)
		while(temp.lint.temp0-- >= 0)
		ft_rotate(&list->sb,2);
	else
	while(temp.lint.temp1-- >= 0)
		ft_rrotate(&list->sb,2);
	ft_push(&list->sa,&list->sb,1);
}