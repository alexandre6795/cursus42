/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:44:03 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/07 12:05:51 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free(t_game *game)
{
		int i;
		
		i = 0;

	if (game!= NULL)
	{
		if (game->map != NULL)
		while (i < game->msize->x)
		{
			free(game->map[i]);
			i++;
		}
		free(game->map);
		free(game->pos);
		free(game->msize);
		free(game);
	}
}

void	ft_error(char *err, t_game *game)
{
	if (err != NULL)
		ft_printf("ERROR : %s\n", err);
	else
		ft_printf("ERROR : erreur inconnu\n");

	if (game != NULL)
		ft_free(game);
		exit(0);
}