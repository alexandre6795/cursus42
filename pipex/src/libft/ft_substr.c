/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:59:00 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/03 11:34:27 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	rlen;

	if (!s)
		return (0);
	if (ft_strlen(s) <= start)
		return (ft_calloc(1, sizeof(char)));
	else if ((ft_strlen(s) - (size_t)(start)) < len)
		rlen = ft_strlen(s) - (size_t)(start);
	else
	rlen = len;
	rlen += 1;
	copy = malloc(sizeof(*s) * rlen + 1);
	if (copy == 0)
		return (NULL);
	ft_strlcpy(copy, &s[start], rlen);
	return (copy);
}
