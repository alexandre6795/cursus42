/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_last_step.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:27:53 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/18 14:21:50 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_time_is_no_sort(t_all *list, int len_t)
{
	if (ft_last_ranking(list->sa) > list->sa->r)
		ft_bbot(list, 1, len_t);
	else
		ft_rotate(&list->sa, 1);
}
void	ft_sort_other(t_all *list)
{
	int	len_t;

	len_t = ft_lst_range(list->sa);
	ft_first_sort(list, len_t);
	ft_sort_high(list, len_t);
	if (ft_list_is_reverse(list->sb, ft_lst_range(list->sb)) == 1)
	{
		while (list->sb)
			ft_push(&list->sa, &list->sb, 1);
	}
	else
		ft_sort_endp1(list, len_t);
	if (ft_list_is_reverse(list->sb, ft_lst_range(list->sb)) == 1)
	{
		while (list->sb)
			ft_push(&list->sa, &list->sb, 1);
	}
	else
		ft_sort_endp2(list, len_t);
					if (ft_list_is_reverse(list->sb,ft_lst_range(list->sb))==1)
	  {
	 			while(list->sb)
	 			ft_push(&list->sa,&list->sb,1);
			}
	 		else
	 		ft_sort_endp3(list, len_t);
}
