/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_so_long_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:48:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/19 11:27:04 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_add_heros_pos(t_game *game, int x, int y)
{
	game->p++;
	game->pos->x = x;
	game->pos->y = y;
	game->mpos->x = x;
	game->mpos->y = y;
}
