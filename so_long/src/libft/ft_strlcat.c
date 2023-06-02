/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 13:51:26 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/23 16:05:58 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)

{
	size_t	idest;
	size_t	isrc;
	size_t	ret;
	size_t	i;

	i = 0;
	if ((!dest) && (len == 0))
		return (0);
	idest = ft_strlen(dest);
	isrc = ft_strlen(src);
	if (len == 0)
		return (isrc);
	else if (len < idest)
		ret = len + isrc;
	else
		ret = idest + isrc;
	while ((len - 1 > idest + i) && (src[i] != '\0'))
	{
		dest[idest + i] = src[i];
		i++;
	}
	if (i < len)
		dest[idest + i] = '\0';
	return (ret);
}
