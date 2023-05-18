/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:41:04 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/09 15:11:06 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_list(t_stack *list)
{
	int	i;
	i = ft_lst_range(list);
	printf("range = %d\n", i);
	while (i > 0)
	{
		printf("value in chain = %ld ranking = %d\n", list->v, list->r);
		i--;
		list = list->next;
	}
}