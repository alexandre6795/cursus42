/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:32:15 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/16 10:04:35 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0 || ((char *)dest == 0 && (char *)src == NULL))
		return (dest);
	if (dest > src)
	{
		while (len-- > 0)
		{
			*(char *)(dest + len) = *(char *)(src + len);
		}
	}
	else
	{
		while (i < len)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}
