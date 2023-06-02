/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:32:15 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/15 17:41:14 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
