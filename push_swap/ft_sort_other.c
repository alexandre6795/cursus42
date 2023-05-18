/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_other.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:36:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/18 14:36:17 by aherrman         ###   ########.fr       */
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
	while (list->sb->r > len_t * 66 / 100 || ft_last_ranking(list->sb) > len_t
		* 66 / 100)
	{
		if (list->sb->r == len_t - len_a)
		{
			ft_push(&list->sa, &list->sb, 1);
			len_a++;
		}
		else if (ft_last_ranking(list->sa) == len_t - len_a)
		{
			ft_rrotate(&list->sa, 1);
			len_a++;
		}
			
		else if (list->sb->r < len_t * 80 / 100 && list->sb->r >= len_t * 66
				/ 100)
		{
			if (ft_last_ranking(list->sb) < list->sb->r)
				ft_bbot(list, 2,0);
			else
				ft_rotate(&list->sb, 2);
		}
		else if (list->sb->r > len_t * 80 / 100)
			ft_push(&list->sa, &list->sb, 1);
		else if(ft_last_ranking(list->sa)!= len_t && list->sa->r != len_t - len_a)
			ft_sort_time_is_no_sort(list,len_t);
			else 
			ft_rotate(&list->sa,1);
			
	}
}
 void	ft_sort_endp2(t_all *list, int len_t)
 {
 	int	len_a;

 	len_a = ft_lst_range(list->sa);
 	while (list->sb->r > len_t * 33 / 100)
 	{
 		if (list->sb->r == len_t - len_a)
 		{
 			ft_push(&list->sa, &list->sb, 1);
 			len_a++;
 		}
		else if (ft_last_ranking(list->sa) == len_t - len_a)
		{
			ft_rrotate(&list->sa, 1);
			len_a++;
		}
 		else if (list->sb->r < len_t * 48 / 100 && list->sb->r >= len_t * 33
				/ 100)
 		{
 			if (ft_last_ranking(list->sb) < list->sb->r
 				&& ft_last_ranking(list->sb) >= len_t * 33 / 100)
 				ft_bbot(list, 2,0);
 			else
			 				ft_rotate(&list->sb, 2);
		}
 		else if (list->sb->r > len_t * 48 / 100)
 		{
 			ft_push(&list->sa, &list->sb, 1);
 		}
		else if(ft_last_ranking(list->sa)!= len_t && list->sa->r != len_t - len_a)
			ft_sort_time_is_no_sort(list,len_t);
		else
			ft_rotate(&list->sa,1);
 	}
 }
 void	ft_sort_endp3(t_all *list, int len_t)
 {
 	int len_a;
 	len_a = ft_lst_range(list->sa);
 	while (list->sb)
 	{
 		if (list->sb->r == len_t - len_a)
 		{
 			ft_push(&list->sa, &list->sb, 1);
 			len_a++;
 		}
			else if (ft_last_ranking(list->sa) == len_t - len_a)
		{
			ft_rrotate(&list->sa, 1);
			len_a++;
		}
 		else
		{
			ft_google(list,len_t,len_a);
			len_a++;
		}
 	} 
 }