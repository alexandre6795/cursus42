/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:30:26 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/15 14:06:54 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_putstr_fd(char *c, int fd)
{
	size_t	i;

	i = 0;
	while (c[i])
	{
		ft_putchar_fd(c[i], fd);
		i++;
	}
}
