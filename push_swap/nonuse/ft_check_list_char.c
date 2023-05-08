/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:31:09 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/29 10:49:47 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_only_nb(t_list *stack_a)
{
	while (stack_a->next)
	{
		while (((char)stack_a->content >= '0' && (char)stack_a->content <= '9')
			|| (char)stack_a->content == '-' || (char)stack_a->content == '+')
		{
			if ((char)stack_a->content != '0' || (char)stack_a->content != '9'
				|| (char)stack_a->content != '-' || (char)stack_a->content != '+')
				return (1);
		}
		stack_a = stack_a->next;
	}
	return (0);
}

int	ft_check_list_char(t_list *stack_a)
{
	return (ft_check_only_nb(stack_a));
}