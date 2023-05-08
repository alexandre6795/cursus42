/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_av.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:06:17 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/02 13:34:21 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_av_check(char *av)
{
	int	i;
	int sign;

	i = 0;
	sign = 0;
	while (av[i])
	{
		if (((av[i] < '0' || av[i] > '9') && av[i] != '-' && av[i] != ' ' && av[i]!= '+')|| sign > 1)
			return (1);
			if(av[i]=='-' || av[i]=='+')
			sign++;
			if(av[i]==' ')
			sign--;
		i++;
	}
	return (0);
}

int	ft_verif_av(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (ac > i)
	{
		if (ft_av_check(av[i]) == 1)
		{
			return (1);
		}
		i++;
	}
	return (0);
}