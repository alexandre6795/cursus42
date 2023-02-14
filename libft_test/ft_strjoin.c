/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:28:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/01/03 10:16:49 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copy;
	size_t	rlen;

rlen = (ft_strlen(s1) + ft_strlen(s2) + 1);
copy = malloc(sizeof(*s1) * rlen);
	if (copy == 0)
		return (NULL);
	ft_strlcpy(copy, s1, rlen);
	ft_strlcat(copy, s2, rlen);
	return (copy);
}
