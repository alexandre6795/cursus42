/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pft_puts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:22:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/01/06 11:19:19 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_printf.h"

int	pft_puts(char *c)
{
	int	i;

	i = 0;
	if (c == NULL)
	{
		i = write (1, "(null)", 6);
		return (i);
	}
	while (*c != '\0')
	{
		if (write(1, c, 1) == -1)
			return (-1);
			i++;
			c++;
	}
	return (i);
}
