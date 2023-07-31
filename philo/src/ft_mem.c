/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:00:51 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/27 10:21:11 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

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

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*temp;

	temp = (char *)dest;
	if (temp == 0 && (char *)src == NULL)
		return (NULL);
	while (len > 0)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
		len--;
	}
	return (temp);
}

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

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;

	temp = (unsigned char *)b;
	while (len > 0)
	{
		*temp = (unsigned char)c;
		temp++;
		len--;
	}
	return (b);
}
