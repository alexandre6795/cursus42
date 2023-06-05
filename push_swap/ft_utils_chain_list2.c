/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_chain_list2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:19:51 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/31 08:44:28 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_list_is_reverse(t_stack *list, int len)
{
	int	len_act;
	int	i;

	if (!list)
		return (-1);
	i = 1;
	len_act = ft_lst_range(list);
	while (list->next)
	{
		if (list->r > list->next->r)
			i++;
		list = list->next;
	}
	if (len_act == len && len == i)
		return (1);
	return (0);
}

int	ft_valid_sort(t_stack *list, int len)
{
	int	len_act;
	int	i;

	i = 1;
	len_act = ft_lst_range(list);
	while (list && list->next)
	{
		if ((list->r + 1 == list->next->r) || (len_act == len && list->r == i))
			i++;
		list = list->next;
	}
	if (len_act == len && len == i)
		return (1);
	return (0);
}

void	ft_reverse_list(t_stack *list, int len)
{
	while (len > 0)
	{
		ft_rotate(&list, 1);
		len--;
	}
}

void	ft_sort_5(t_stack *list)
{
	if (ft_valid_sort(list, ft_lst_range(list)) != 1)
	{
		if (list->r == 4)
		{
			if (list->next->r == 5)
				ft_rrotate(&list, 1);
			else
				ft_swap(list, 1);
		}
		else if (list->r == 5)
		{
			if (list->next->r == 3)
				ft_rotate(&list, 1);
			else
			{
				ft_swap(list, 1);
				ft_rrotate(&list, 1);
			}
		}
		else if (list->r == 3)
		{
			ft_swap(list, 1);
			ft_rotate(&list, 1);
		}
	}
}

void	ft_sort_decrease(t_stack *list)
{
	if (!list)
		return ;
	if (list->r == 1 && list->next->r == 2)
		ft_rrotate(&list, 2);
	else
		return ;
}
