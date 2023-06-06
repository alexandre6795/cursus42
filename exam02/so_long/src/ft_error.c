/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:44:03 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/05 10:34:34 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_free(t_game *game)
{
	if(game !=NULL)
	{
		free(game->map);
		free(game->pos);
		free(game);
	}
	
}

void ft_error(char *err,t_game *game)
{
	if(err != NULL)
	ft_printf("%s\n",err);
	else
	ft_printf("erreur inconnu\n");
	
	if(game != NULL)
	ft_free(game);
}