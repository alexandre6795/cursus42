/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_chain_list3.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:38:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/30 08:59:42 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_split_list(t_all *list, int len)
{
	int	i;

	i = 5;
	if (!list)
		return ;
	while (i > 0)
	{
		if (list->sa->r <= len / 2)
			ft_push(&list->sb, &list->sa, 2);
		else
			ft_rotate(ft_fc(&list->sa), 1);
		i--;
	}
}

t_stack	**ft_fc(t_stack **list)
{
	if (!list || !(*list))
		return (list);
	while ((*list)->av)
		(*list) = (*list)->av;
	return (list);
}

int	ft_last_ranking(t_stack *list)
{
	while (list->next != NULL)
		list = list->next;
	return (list->r);
}

int	ft_high_in_list(t_stack list)
{
	int		high;
	t_stack	*temp;

	temp = &list;
	high = temp->r;
	while (temp)
	{
		if (temp->r > high)
			high = temp->r;
		temp = temp->next;
	}
	return (high);
}
