/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ranking.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:47:05 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/30 08:46:32 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_grade(t_stack *stack_a)
{
	t_stack	*t;
	t_stack	*tmp2;

	tmp2 = stack_a;
	while (tmp2)
	{
		t = stack_a;
		while (t)
		{
			if (t != NULL && t->v < tmp2->v)
				tmp2->r++;
			t = t->next;
		}
		if (t != NULL && t->v < tmp2->v)
			tmp2->r++;
		tmp2 = tmp2->next;
	}
}

t_all	*ft_ranking(t_all *stack)
{
	ft_grade(stack->sa);
	return (stack);
}

int	ft_count_nb(t_all *list, int len_t, int range)
{
	int	i;

	i = 0;
	if (!list->sb)
		return (0);
	while (list->sb->next && list->sb->r >= len_t * range / 100)
	{
		i++;
		list->sb = list->sb->next;
	}
	ft_fc(&list->sb);
	return (i / 2);
}

void	ft_base_sort(t_all *list, int len_t, int len_a, int r)
{
	list->sa = *ft_fc(&list->sa);
	list->sb = *ft_fc(&list->sb);
	len_a = ft_next_rank(list->sa, len_t);
	if (list->sa->next->r == len_t - len_a - 1 && list->sa->r == len_t - len_a)
		ft_swap(list->sa, 1);
	else if (ft_last_ranking(list->sa) == len_t - len_a)
		ft_rrotate(&list->sa, 1);
	else if ((list->sb->r == len_t * r / 100
			|| list->sb->r == ft_last_ranking(list->sa) + 1)
		&& list->sb->r != len_t - len_a)
	{
		ft_push(&list->sa, &list->sb, 1);
		ft_rotate(&list->sa, 1);
	}
	else if (list->sb->r == len_t - len_a)
		ft_push(&list->sa, &list->sb, 1);
	else
		ft_rotate(&list->sb, 2);
}

void	ft_road(t_all *list)
{
	t_temp	temp;

	ft_init_temp(&temp);
	temp.i.t3 = ft_last_ranking(list->sa) + 1;
	temp.i.t2 = list->sa->r - 1;
	temp.i.t4 = 0;
	temp.i.t5 = 0;
	ft_fc(&list->sb);
	ft_fc(&list->sa);
	if (ft_s(list, temp.i.t3, 1) > ft_s(list, temp.i.t3, 2))
	{
		temp.i.t0 = (ft_s(list, temp.i.t3, 2));
		temp.i.t4 = 1;
	}
	else
		temp.i.t0 = ft_s(list, temp.i.t3, 1);
	if (ft_s(list, temp.i.t2, 1) > ft_s(list, temp.i.t2, 2))
	{
		temp.i.t1 = (ft_s(list, temp.i.t2, 2));
		temp.i.t5 = 1;
	}
	else
		temp.i.t1 = ft_s(list, temp.i.t2, 1);
	ft_a(list, temp);
}
