/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 08:46:43 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/29 10:58:21 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void ft_error(t_stack *stack)
{
	t_list *temp1;
	t_list *temp2;
	t_list *next;
	if (stack)
		{
			temp1 = stack->stack_a;
			temp2 = stack->stack_b;
			while (temp1)
			{
				free(temp1->content);
				next = temp1->next;
				free(temp1);
				temp1 = next;
			}
				while (temp2)
			{
				free(temp2->content);
				next = temp2->next;
				free(temp2);
				temp2 = next;
			}
			*stack = NULL;
		}
		ft_printf("ERROR\n");
		exit(-1);
}