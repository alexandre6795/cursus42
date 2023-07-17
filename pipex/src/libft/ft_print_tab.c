/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:29:14 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/17 16:52:51 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tab(char **tab)
{
	int	i;

	i = 0;
	if (tab)
	{
		while (tab[i])
		{
			fprintf(stderr,"tab[%d] = %s len = %zu\n", i, tab[i], ft_strlen(tab[i]));
			i++;
		}
		printf("size = %d\n", i);
	}
	else
		printf("tab is NULL\n");
}
