/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:13:24 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/08 11:49:40 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_list(t_stack *list)
{
	int	i;
	i = ft_lst_range(list) + 1;
	printf("range = %d\n", i);
	while (i > 0)
	{
		printf("value in chain = %ld ranking = %d\n", list->v, list->r);
		i--;
		list = list->next;
	}
}

int	ft_selection(t_all stack)
{
	t_all temp;


	temp = stack;

	ft_print_list(temp.sa);
	ft_swap(temp.sa,2);
	printf("\n\nlist swap\n\n");
	ft_print_list(temp.sa);
	ft_rotate(temp.sa);
		printf("\n\nlist rotate\n\n");
	ft_print_list(temp.sa);
	return (0);
}