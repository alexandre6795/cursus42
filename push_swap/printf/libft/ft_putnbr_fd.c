/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:10:01 by aherrman          #+#    #+#             */
/*   Updated: 2022/12/22 11:18:47 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static void	ft_recur(unsigned int n, int nb_chiffre, int fd)
{
	if (n > 0)
	{
		ft_recur(n / 10, nb_chiffre - 1, fd);
		ft_putchar_fd(((n % 10) + 48), fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	unsigned int	temp;
	int				nb_chiffre;

	nb_chiffre = 0;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{		
		ft_putchar_fd('-', fd);
		temp = -n;
	}
	else
		temp = n;
		nb = temp;
	while (temp != 0)
	{
		temp = temp / 10;
		nb_chiffre++;
	}
	ft_recur(nb, nb_chiffre, fd);
}
