/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:10:58 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/05 19:52:23 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_for2(t_stack *list)
{
	int	len;

	len = ft_lst_range(list);
	if ((ft_valid_sort(list, len) != 1))
		ft_swap(list, 1);
}

void	ft_sort_for3(t_stack *list)
{
	if (ft_valid_sort(list, ft_lst_range(list)) != 1)
	{
		if (list && list->r == ft_lower_in_list(*list))
		{
			ft_rrotate(&list, 1);
			ft_swap(list, 1);
		}
		else if (list && list->r == ft_high_in_list(*list))
		{
			if (list && list->next->r == ft_lower_in_list(*list))
				ft_rotate(&list, 1);
			else
			{
				ft_swap(list, 1);
				ft_rrotate(&list, 1);
			}
		}
		else
		{
			if (list && list->next->r == ft_high_in_list(*list))
				ft_rrotate(&list, 1);
			else
				ft_swap(list, 1);
		}
	}
}

void	ft_sort_forfor(t_all *list)
{
	if (ft_list_is_reverse(list->sa, ft_lst_range(list->sa)) == 1)
	{
		ft_swap(list->sa, 1);
		ft_rrotate(&list->sa, 1);
		ft_rrotate(&list->sa, 1);
		ft_swap(list->sa, 1);
	}
	else if (ft_valid_sort(list->sa, ft_lst_range(list->sa)) != 1)
	{
		ft_split_list(list, ft_lst_range(list->sa));
		if (list->sa != NULL)
			ft_sort_for2(*ft_fc(&list->sa));
		if (list->sb != NULL)
		{
			if (ft_list_is_reverse(list->sb, 2) == 1)
				while (list->sb)
					ft_push(ft_fc(&list->sa), ft_fc(&list->sb), 1);
			else
				ft_swap(list->sb, 2);
			while (list->sb)
				ft_push(ft_fc(&list->sa), ft_fc(&list->sb), 1);
		}
	}
}

void	ft_sort_for5(t_all *list)
{
	int	len;

	len = ft_lst_range(list->sa);
	if (ft_valid_sort(list->sa, len) != 1)
	{
		ft_split_list(list, len);
		if (list->sa != NULL)
			ft_sort_5(*ft_fc(&list->sa));
		if (list->sb != NULL)
			ft_sort_decrease(*ft_fc(&list->sb));
		while (list->sb)
			ft_push(ft_fc(&list->sa), ft_fc(&list->sb), 1);
	}
}

void	ft_sort(t_all *list)
{
	int	len;

	len = ft_lst_range(list->sa);
	if (len == 2)
		ft_sort_for2(list->sa);
	else if (len == 4)
		ft_sort_forfor(list);
	else if (len == 5)
		ft_sort_for5(list);
	else if (len == 3)
		ft_sort_for3(list->sa);
	else if (len < 300)
		ft_sort_other(list);
	else
		ft_sort_more_and_more(list);
}
