/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:16:07 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/27 10:20:12 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
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

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	s = malloc(count * size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, (size * count));
	return (s);
}

void	ft_bzero(void *b, size_t len)
{
	char	*temp;

	temp = (char *)b;
	while (len > 0)
	{
		*temp = '\0';
		temp++;
		len--;
	}
}

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (copy == 0)
		return (0);
	ft_strlcpy(copy, s1, ft_strlen(s1) + 1);
	return (copy);
}
