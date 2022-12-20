/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:57:59 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/13 13:16:23 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	y;

	y = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(s + y));
	while (y > 0)
	{
		if (s[y] == (char)c)
			return ((char *)(s + y));
			y --;
	}
	if (s[y] == (char)c)
		return ((char *)(s + y));
	return (NULL);
}
