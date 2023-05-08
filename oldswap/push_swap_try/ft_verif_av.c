/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_av.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:06:17 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/29 11:20:04 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_av_check(char *av, char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[i])
	{
		if ((av[i] < '0' && av[i] < '9') && av[i] != '+' && av[i] != '-')
		{
			j = 0;
			while (av[i] != s[j] && s[j] != '\0')
				j++;
			if (s[j] == '\0')
				return (1);
			if (av[i] == s[j])
				av[i] = ' ';
		}
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
		if (ft_av_check(av[i], SEPARATOR) == 1)
		{
			//ft_error;
			return (1);
		}
		i++;
	}
	return (0);
}