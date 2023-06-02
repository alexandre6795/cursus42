/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 08:46:43 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/30 13:48:45 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_all *stack)
{
	t_stack	*temp1;
	t_stack	*temp2;
	t_stack	*next;

	if (stack)
	{
		temp1 = stack->sa;
		temp2 = stack->sb;
		while (temp1)
		{
			next = temp1->next;
			free(temp1);
			temp1 = next;
		}
		while (temp2)
		{
			next = temp2->next;
			free(temp2);
			temp2 = next;
		}
		free(stack);
	}
	ft_printf("Error\n");
	exit(-1);
}

void	ft_free(t_all *stack)
{
	t_stack	*temp1;
	t_stack	*temp2;
	t_stack	*next;

	if (stack)
	{
		temp1 = stack->sa;
		temp2 = stack->sb;
		while (temp1)
		{
			next = temp1->next;
			free(temp1);
			temp1 = next;
		}
		while (temp2)
		{
			next = temp2->next;
			free(temp2);
			temp2 = next;
		}
		free(stack);
	}
}
