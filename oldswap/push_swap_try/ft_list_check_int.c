/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:58:09 by aherrman          #+#    #+#             */
/*   Updated: 2023/04/01 10:15:42 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_twin(t_list stack_a)
{
	t_list	*temp;
	t_list	*lst;

	lst = &stack_a;
	while (lst->next)
	{
		temp = lst->next;
		while (temp->next)
		{
			if (temp->content == lst->content)
				return (1);
			temp = temp->next;
		}
		lst = lst->next;
	}
	return (0);
}

int	ft_check_limit(t_list stack_a)
{
	int		i;
	t_list	*lst;

	lst = &stack_a;
	i = 0;
	while (lst->next)
	{
		i = (int)lst->content;
		if (i == 2147483647 || i == -2147483648)
			return (1);
		lst = lst->next;
	}
	return (0);
}

void	ft_list_check_int(t_list stack_a)
{
	int error;

	error = 0;
	error += ft_check_limit(stack_a);
	error += ft_check_twin(stack_a);
	if (error > 0)
		ft_error(NULL);
}