/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:01:49 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/13 13:15:46 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if ((n > 0) || ((*(unsigned char *)(s + i) == '\0') || (c == 0)))
	{
		while (n > i)
		{
			if (*(unsigned char *)(s + i) == (unsigned char)c)
				return ((void *)s + i);
		i++;
		}
	}
	return (NULL);
}
