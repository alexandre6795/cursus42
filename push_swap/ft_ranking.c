/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ranking.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:47:05 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/03 14:42:47 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_grade(t_stack *stack_a)
{
	t_stack	*temp;
	t_stack	*tmp2;

	tmp2 = stack_a;
	while (tmp2)
	{
		temp = stack_a;
		while (temp)
		{
			if (temp != NULL && temp->v < tmp2->v)
				tmp2->r++;
			temp = temp->next;
		}
		if (temp != NULL && temp->v < tmp2->v)
				tmp2->r++;
		tmp2 = tmp2->next;
	}
}
t_all	*ft_ranking(t_all *stack)
{
	ft_grade(stack->sa);
	return (stack);
}
