/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:56:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/11 12:07:16 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char	**ft_free(char **word, int *nb)
{
	size_t	i;

	i = 0;
	while (word[i])
	{
		free(word[i]);
		i++;
	}
	free(word);
	i = 0;
	while (nb)
	{
		free(nb);
		i++;
	}
	free(nb);
	return (NULL);
}