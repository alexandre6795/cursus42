/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_other.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:36:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/31 14:29:59 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_high(t_all *list, int len_t)
{
	int	len;

	len = ft_lst_range(list->sa);
	while (len > 3)
	{
		if (list->sa->r >= len_t - 2)
			ft_rotate(&list->sa, 1);
		else if (ft_lower_in_list(*list->sa) && list->sa->r >= len_t - 2)
			ft_push(&list->sb, &list->sa, 2);
		else if (list->sa->r > list->sa->next->r && list->sa->r >= len_t - 2)
			ft_swap(list->sa, 1);
		else if (list->sa->r >= len_t - 2)
			ft_rotate(&list->sa, 1);
		else
		{
			ft_push(&list->sb, &list->sa, 2);
		}
		len = ft_lst_range(list->sa);
	}
	ft_sort_for3(*ft_fc(&list->sa));
}

void	ft_first_sort(t_all *lt, int len_t)
{
	int	len;

	len = len_t;
	while (len > 0)
	{
		if (lt->sa->r >= len_t * 66 / 100)
			ft_rotate(&lt->sa, 1);
		else
		{
			ft_push(&lt->sb, &lt->sa, 2);
			if ((lt->sb->next) != NULL)
			{
				if (lt->sb->r >= len_t / 3)
				{
					if (lt->sb->r < lt->sb->next->r && lt->sb->r > len_t / 3)
						ft_swap(lt->sb, 2);
				}
				if (lt->sb->r < (len_t / 3) + 1)
				{
					ft_rotate(&lt->sb, 2);
				}
			}
		}
		len--;
	}
}

void	ft_sort_endp1(t_all *list, int len_t)
{
	int	len_a;
	int	i;

	len_a = ft_lst_range(list->sa);
	i = ft_count_nb(list, len_t, 66);
	while (list->sb->r >= len_t * 66 / 100 && i >= 0)
	{
		ft_base_sort(list, len_t, len_a, 66);
		i--;
	}
	while (list->sb->r >= len_t * 66 / 100 || ft_last_ranking(list->sb) >= len_t
		* 66 / 100)
	{
		len_a = ft_lst_range(list->sa);
		ft_road(list);
	}
	while (ft_last_ranking(list->sa) != len_t)
		ft_rrotate(&list->sa, 1);
}

void	ft_sort_endp2(t_all *list, int len_t)
{
	int	len_a;
	int	i;

	len_a = ft_lst_range(list->sa);
	i = ft_count_nb(list, len_t, 33);
	while (list->sb && (list->sb->r >= len_t * 33 / 100 && i >= 0))
	{
		ft_base_sort(list, len_t, len_a, 33);
		i--;
	}
	while (list->sb && (list->sb->r >= len_t * 33 / 100
			|| ft_last_ranking(list->sb) >= len_t * 33 / 100))
	{
		len_a = ft_lst_range(list->sa);
		ft_road(list);
		ft_fc(&list->sa);
		ft_fc(&list->sb);
		len_a = ft_lst_range(list->sa);
	}
	while (ft_last_ranking(list->sa) != len_t)
		ft_rrotate(&list->sa, 1);
}

void	ft_sort_endp3(t_all *list, int len_t)
{
	int	len_a;

	len_a = ft_lst_range(list->sa);
	while (list->sb)
	{
		len_a = ft_lst_range(list->sa);
		ft_road(list);
		ft_fc(&list->sa);
		ft_fc(&list->sb);
		len_a = ft_lst_range(list->sa);
	}
	while (ft_last_ranking(list->sa) != len_t)
		ft_rrotate(&list->sa, 1);
}
