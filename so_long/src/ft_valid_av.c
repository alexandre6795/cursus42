/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_av.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:50:31 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/07 15:15:19 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_valid_ber(char **av)
{
	char	*s;
	size_t	i;

	i = ft_strlen(av[1]);
	s = av[1] + i - 4;
	if(ft_strncmp(s,".ber",4)!=0)
		return(1);
	return(0);
}

void	ft_valid_av(int ac, char **av)
{
	if (ac == 2 && av[1] != NULL)
	{
		if(ft_valid_ber(av) == 1)
		ft_error("pas de fichier.ber",NULL);
	}
	else
	ft_error("fichier vide ou plusieurs arguments",NULL);
}

void ft_n1l(int i, t_game *game)
{
	if (i== game->msize->y -2)
	ft_error("one line have only ennemi no way i go",game);
}