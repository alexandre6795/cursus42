/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pft_putnb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:27:55 by aherrman          #+#    #+#             */
/*   Updated: 2022/12/20 11:02:14 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "printf.h"

static void ft_recur(unsigned int n,int nb_chiffre)
{
	if (n > 0)
	{
		ft_recur(n / 10,nb_chiffre - 1);
		ft_putchar_fd((n % 10) + 48,1);
	}
}

int pft_putnb.c(int n)
{
	unsigned int nb;
	unsigned int temp;
	int nb_ciffre;

	nb_chiffre = 0;

	if (n == 0)
	ft_putchar_fd('0',1);
	else if (n < 0)
	{
	ft_putchar_fd('-',1);
	temp = -n
	}
	else
	temp = n;
	nb = temp;
	while (temp != 0)
	{
		temp = temp/10;
		nb_chiffre++;
	}
	ft_recur(nb,nb_chiffre)
	return (nb_chiffre);
}
