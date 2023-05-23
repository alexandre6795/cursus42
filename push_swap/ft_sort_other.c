/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_other.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:36:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/23 16:38:24 by aherrman         ###   ########.fr       */
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
			if (list->sb->r < list->sb->next->r)
				ft_swap(list->sb, 2);
		}
		len = ft_lst_range(list->sa);
	}
	ft_sort_for3(*ft_fc(&list->sa));
}
void	ft_first_sort(t_all *list, int len_t)
{
	int	len;

	len = len_t;
	while (len > 0)
	{
		if (list->sa->r > len_t * 66 / 100)
			ft_rotate(&list->sa, 1);
		else
		{
			ft_push(&list->sb, &list->sa, 2);
			ft_choixpot(list, len_t);
		}
		len--;
	}
}
void	ft_sort_endp1(t_all *list, int len_t)
{
	int	len_a;
	len_a = ft_lst_range(list->sa);
	while (list->sb->r > len_t * 66 / 100)
		ft_base_sort(list, len_t, len_a,66);
		while (ft_last_ranking(list->sb) >= len_t * 66 / 100)
		ft_second_sort(list,len_t,len_a,66);
//	while (ft_last_ranking(list->sa) != len_t || list->sb->r >= len_t * 66 / 100)
	//	ft_end_sort(list, len_t, len_a);
}

// void	ft_sort_endp2(t_all *list, int len_t)
// {
// 	int	len_a;

// 	len_a = ft_lst_range(list->sa);
// 	while (list->sb->r >= len_t * 33 / 100)
// 		ft_base_sort(list, len_t, len_a,50);
// 	if (ft_last_ranking(list->sa) != len_t)
// 		ft_end_sort(list, len_t, len_a);
// 	ft_sort_top(list, len_t, len_a, 33);
// 	while (ft_last_ranking(list->sb) >= len_t * 33 / 100)
// 	{
// 		ft_rrotate(&list->sb, 2);
// 		if (list->sb->r < list->sb->next->r)
// 			ft_swap(list->sb, 2);
// 	}
// 		while (ft_last_ranking(list->sb) >= len_t * 33 / 100)
// 	{
// 		ft_rrotate(&list->sb, 2);
// 		if (list->sb->r < list->sb->next->r)
// 			ft_swap(list->sb, 2);
// 	}
// 	ft_sort_top(list, len_t, len_a, 33);
// }
// void	ft_sort_endp3(t_all *list, int len_t)
// {
// 	int len_a;

// 	len_a = ft_lst_range(list->sa);
// 	while (list->sb)
// 	{
// 		if (list->sa->r > list->sa->next->r)
// 		{
// 			ft_swap(list->sa, 1);
// 			if (list->sa->next->r != len_t - (len_a) && list->sa->r != len_t
// 				- (len_a + 1))
// 				ft_bbot(list, 1, len_t);
// 		}
// 		else if (list->sb->r == len_t - len_a)
// 			ft_push(&list->sa, &list->sb, 1);
// 		else if (ft_last_ranking(list->sa) == len_t - len_a)
// 			ft_rrotate(&list->sa, 1);
// 		else if (list->sb->r < list->sb->next->r)
// 			ft_swap(list->sb, 2);
// 		else if (list->sa->r > list->sb->r && list->sa->next->r == len_t
// 				- (len_a - 1) && list->sa->r != len_t - (len_a))
// 			ft_back_sort(list);
// 		else
// 			ft_push(&list->sa, &list->sb, 1);
// 	}
// 	if (ft_last_ranking(list->sa) != len_t)
// 	{
// 		ft_end_sort(list, len_t, len_a);
// 		ft_sort_endp3(list, len_t);
// 	}
// }