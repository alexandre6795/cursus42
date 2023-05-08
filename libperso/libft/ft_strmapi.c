/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:38:14 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/15 16:07:38 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*copy;
	size_t	i ;

	i = 0;
	if ((!s) || (!f))
		return (NULL);
	copy = ft_calloc(sizeof(char), (ft_strlen(s) + 1));
	if (copy == NULL)
		return (NULL);
	while (s[i])
	{
		copy[i] = f(i, s[i]);
			i++;
	}
	return (copy);
}
