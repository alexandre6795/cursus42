/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:47:01 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/07 11:09:51 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void ft_print_char_tab(char **tab)
{
	int i;
	int j;

	j = 0;
	i = 0;
	printf("ci dessous le tableau de char \n");
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			j++;
		}
		printf("ligne[%d]have[%d]cara\n ligne = %s\n", i, j, tab[i]);
		i++;
	}
	printf("total line[%d]\n", i);
}