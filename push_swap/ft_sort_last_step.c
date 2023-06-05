/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_last_step.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 08:21:14 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/31 14:46:57 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_the_while_of_sort(t_all *list, int i, int j, int len)
{
	while (j < len)
	{
		if (((list->sa->r >> i) & 1) == 1)
			ft_rotate(&list->sa, 1);
		else
			ft_push(&list->sb, &list->sa, 2);
		j++;
	}
}

void	do_the_while_of_sort2(t_all *list, int i, int j, int len)
{
	while (j < len)
	{
		if (((list->sb->r >> i) & 1) == 0)
			ft_rotate(&list->sb, 2);
		else
			ft_push(&list->sa, &list->sb, 1);
		j++;
	}
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
			ft_push(ft_fc(&list->sa), &list->sb, 1);
	}
	else
		ft_sort_endp1(list, len_t);
	if (ft_list_is_reverse(list->sb, ft_lst_range(list->sb)) == 1)
	{
		while (list->sb)
			ft_push(ft_fc(&list->sa), &list->sb, 1);
	}
	else
		ft_sort_endp2(list, len_t);
	if (ft_list_is_reverse(list->sb, ft_lst_range(list->sb)) == 1)
		while (list->sb)
			ft_push(ft_fc(&list->sa), &list->sb, 1);
	else
		ft_sort_endp3(list, len_t);
}

int	ft_next_rank(t_stack *list, int len_t)

{
	while (list->next && list->next && list->r != len_t)
		list = list->next;
	while (list->av && list->av && list->r == list->av->r + 1)
		list = list->av;
	return (len_t - list->r + 1);
}

void	ft_sort_more_and_more(t_all *list)
{
	int	i;
	int	j;
	int	max_num;
	int	max_bits;
	int	len;

	i = 0;
	j = 0;
	max_num = ft_lst_range(list->sa);
	max_bits = 0;
	while (max_num >> max_bits != 0)
		max_bits++;
	while (i < max_bits)
	{
		len = ft_lst_range(list->sa);
		j = 0;
		do_the_while_of_sort(list, i, j, len);
		len = ft_lst_range(list->sb);
		j = 0;
		do_the_while_of_sort2(list, i, j, len);
		i++;
	}
	while (ft_lst_range(list->sb) > 0)
		ft_push(&list->sa, &list->sb, 1);
}
