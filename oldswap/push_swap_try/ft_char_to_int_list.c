/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_int_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:27:35 by aherrman          #+#    #+#             */
/*   Updated: 2023/04/18 09:39:26 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_char_to_int_list(int ac, char **av, t_stack *stack)
{
	int i;

	i = 1;
	while (ac > i)
	{
		if (ft_split_for_list(stack->stack_a, av[i], ' ') != 0)
		{
			return (1);
		}
		i++;
		while (stack->stack_a->next)
		{
			stack->stack_a->content=ft_atoi(stack->stack_a->content);
			stack->stack_a = stack->stack_a->next;
		}
		ft_list_check_int(*stack->stack_a);
	}
	return (1);
}