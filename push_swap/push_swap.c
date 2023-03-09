/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:26:25 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/07 12:43:27 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**list;
	int		i;
	int		*tab;

	i = 1;
	if (ac == 1)
		return (0);
	list = ft_split(av[i], SEPARATOR);
	ft_list_check_char(list);
	 while (ac > i)
	{
		tab[i] = ft_atoi(list[i]);
		i++;
	}
	ft_list_check_int(tab);
		// ici list non triee valide
		// trie et appel de fonction
		return (0);
}
// validation pas de double