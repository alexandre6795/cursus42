/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:43:11 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/17 14:32:24 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;

copy = malloc(sizeof(*s1) * (ft_strlen(s1)+1));
	if (copy == 0)
		return (0);
	ft_strlcpy(copy, s1, ft_strlen(s1)+1);
	return (copy);
}
