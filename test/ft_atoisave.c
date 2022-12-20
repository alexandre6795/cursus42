/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:39:49 by aherrman          #+#    #+#             */
/*   Updated: 2022/07/27 09:12:44 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	signe;
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	signe = 1;
	while ((str[i] == '\f') || (str[i] == '\n')
		|| (str[i] == '\r') || (str[i] == '\t') || (str[i] == '\v'))
	{
	i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{	
		if (str[i] == 45)
			signe *= -1;
	i++;
	}
	while (str[i] > 48 && str[i] < '9')
	{
	nb += str[i] - 48;
	nb *= 10;
	i++;
	}
	nb *= signe;
	return (nb / 10);
}
