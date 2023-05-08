/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:58:09 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/10 11:06:03 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_twin(int *nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nb[i])
	{
		while (nb[j] != nb[i] && nb[j])
			j = i + 1;
		if (nb[j] == nb[i])
			return (1);
	}
	return (0);
}

int	ft_check_limit(int *nb)
{
	int	i;

	i = 0;
	while (nb[i])
	{
		if (nb[i] == 2147483647 || nb[i] == -2147483648)
			return (1);
	}
	return (0);
}

void	ft_list_check_int(int *nb)
{
	int	error;

	error = 0;
	error += ft_check_limit(nb);
	error += ft_check_twin(nb);
	if (error > 0)
		ft_jump_error(NULL, nb);
}
