/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_list_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:31:09 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/07 12:19:55 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_only_nb(char **list)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (list[i][j])
	{
		j = 0;
		while ((list[i][j] >= '0' && list[i][j] <= '9') || list[i][j] == '-'
			|| list[i][j] == '+')
			j++;
		if (list[i][j] != '0' || list[i][j] != '9' || list[i][j] != '-'
			|| list[i][j] != '+')
			return (1);
		i++;
	}
	return (0);
}

void	ft_check_list_char(char **list)
{
	int error;

	error = 0;
	error += ft_check_only_nb(list);
	if (error > 0)
		ft_jump_error(list);
}