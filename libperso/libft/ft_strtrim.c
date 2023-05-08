/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:30:21 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/16 11:46:26 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	c;

		c = 0;
	while (ft_strchr(set, s1[c]) != NULL)
	{
	c++;
	}
	return (c);
}

static size_t	ft_end(char const *s1, char const *set)
{
	size_t	c;

	c = ft_strlen(s1);
	while ((c > 0) && (ft_strchr(set, s1[c]) != NULL))
	{
	c--;
	}
	return (c + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*copy;
	size_t		start;
	size_t		end;
	size_t		rlen;

	if (set == NULL || s1 == NULL)
		return (NULL);
	if (*s1 == '\0')
		return (ft_calloc(1, sizeof(char)));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	rlen = (end - start + 1);
	if (start >= end)
		return (ft_calloc(1, sizeof(char)));
	copy = malloc(sizeof(char) * rlen);
	if (copy == 0)
		return (0);
	ft_strlcpy((char *)copy, &s1[start], rlen);
	return ((char *)copy);
}
