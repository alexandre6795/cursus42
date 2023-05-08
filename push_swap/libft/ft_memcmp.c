/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:50:18 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/15 16:57:22 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if ((*(unsigned char *)(s1 + i) - (*(unsigned char *)(s2 + i))) == 0)
			i++;
		else
			return (*(unsigned char *)(s1 + i) - (*(unsigned char *)(s2 + i)));
	}
	return (*(unsigned char *)(s1 + i) - (*(unsigned char *)(s2 + i)));
}
