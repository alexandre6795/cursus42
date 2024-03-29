/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:28:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/17 15:34:53 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copy;
	size_t	rlen;

	if (!s1 || !s2)
		return (0);
	rlen = (ft_strlen(s1) + ft_strlen(s2)+1);
	copy = malloc(sizeof(*s1) * rlen);
	if (copy == 0)
		return (0);
	ft_strlcpy(copy, s1, rlen);
	ft_strlcat(copy, s2, rlen);
	return (copy);
}
