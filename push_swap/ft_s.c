/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:09:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/30 08:20:07 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_s(t_all *list, int target, int select)
{
	int	i;

	i = 0;
	ft_fc(&list->sb);
	ft_fc(&list->sa);
	if (select == 1)
	{
		while (list->sb->next && list->sb->r != target)
		{
			list->sb = list->sb->next;
			i++;
		}
	}
	else
	{
		while (list->sb->next)
			list->sb = list->sb->next;
		while (list->sb->av && list->sb->r != target)
		{
			list->sb = list->sb->av;
			i++;
		}
	}
	return (i);
}

void	ft_rx(t_all *list, int target)
{
	while (list->sb->next && list->sb->r != target)
		ft_rotate(&list->sb, 2);
	ft_push(&list->sa, &list->sb, 1);
	if (list->sa->r == ft_last_ranking(list->sa) + 1)
		ft_rotate(&list->sa, 1);
}

void	ft_rrx(t_all *list, int target)
{
	while (list->sb && list->sb->r != target)
		ft_rrotate(&list->sb, 2);
	ft_push(&list->sa, &list->sb, 1);
	if (list->sa->r == ft_last_ranking(list->sa) + 1)
		ft_rotate(&list->sa, 1);
}

void	ft_a(t_all *list, t_temp temp)
{
	ft_fc(&list->sa);
	ft_fc(&list->sb);
	if (temp.i.t0 + 3 < temp.i.t1)
	{
		if (temp.i.t4 == 1)
			ft_rrx(list, temp.i.t3);
		else
			ft_rx(list, temp.i.t3);
	}
	else
	{
		if (temp.i.t5 == 1)
			ft_rrx(list, temp.i.t2);
		else
			ft_rx(list, temp.i.t2);
	}
}
