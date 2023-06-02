/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:39:29 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/18 15:29:32 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = ft_strlen(src);
	if (len == 0)
		return (y);
	else
	{
		while ((len - 1 > i) && (src[i] != '\0'))
		{
		dest[i] = src[i];
		i++;
		}
	}
	dest[i] = '\0';
	return (y);
}
