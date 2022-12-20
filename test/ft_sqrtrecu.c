/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtrecu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:44:32 by aherrman          #+#    #+#             */
/*   Updated: 2022/07/31 09:32:06 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_recur(int nb,int i)
{
	if ((nb == 1) || (nb==0))
			return (nb);
	if (i > nb / 2)
		return(0);
	if (i * i == nb )
			return(i);
 return(ft_recur(nb,i+1));
}

int	ft_sqrt(int nb)
{
	int i;

	i = 2; 
	return (ft_recur(nb,i));

}
int main()
{
	printf("%d",ft_sqrt(214748647));
}
