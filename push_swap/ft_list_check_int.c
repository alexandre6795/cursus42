/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_check_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:58:09 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/30 13:46:06 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_twin(t_stack stack_a)
{
	t_stack	*temp;
	t_stack	*tmp2;
	int		i;
	int		len;

	tmp2 = &stack_a;
	i = 1;
	len = ft_lst_range(&stack_a);
	while (tmp2)
	{
		temp = tmp2->next;
		if (temp != NULL && temp->v > tmp2->v)
			i++;
		while (temp)
		{
			if (temp->v == tmp2->v)
				return (1);
			temp = temp->next;
		}
		tmp2 = tmp2->next;
		if (len == i)
			return (2);
	}
	return (0);
}

int	ft_check_limit(t_stack stack_a)
{
	long int	i;
	t_stack		*temp;

	i = 0;
	temp = &stack_a;
	while (temp != 0)
	{
		i = temp->v;
		if (i > 2147483647 || i < -2147483648)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	ft_list_check_int(t_stack stack_a)

{
	if (ft_check_twin(stack_a) == 1 || ft_check_limit(stack_a) == 1)
		return (1);
	if (ft_check_twin(stack_a) == 2)
		return (2);
	return (0);
}
