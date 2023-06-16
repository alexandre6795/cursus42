/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2_display.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:48:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/16 15:05:05 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_displayC(t_mlx *pic, mlx_t *mlx, t_temp temp, t_game *game)
{
	(void)game;
	if (ft_displayF(pic, mlx, game, temp) != 0)
		return (1);
	if (mlx_image_to_window(mlx, pic->CC, temp.i.t1 * 32, temp.i.t0 * 32) < 0)
		return (1);
	return (0);
}

void	ft_mv_up(t_game *game)
{
	if (game->map[game->pos->x - 1][game->pos->y] != '1'
		&& (game->map[game->pos->x - 1][game->pos->y] != 'E'
		|| game->collected == game->C))
	{
		game->mpos->x = game->pos->x - 1;
		game->mpos->y = game->pos->y;
		game->step++;
	}
}
void	ft_mv_dw(t_game *game)
{
	if (game->map[game->pos->x
		+ 1][game->pos->y] != '1'&& (game->map[game->pos->x
			+ 1][game->pos->y] != 'E'
		|| game->collected == game->C))
	{
		game->mpos->x = game->pos->x + 1;
		game->mpos->y = game->pos->y;
		game->step++;
	}
}
void	ft_mv_lf(t_game *game)
{
	if (game->map[game->pos->x][game->pos->y
		- 1] != '1'&& (game->map[game->pos->x][game->pos->y - 1] != 'E'
		|| game->collected == game->C))
	{
		game->mpos->x = game->pos->x;
		game->mpos->y = game->pos->y - 1;
		game->step++;
	}
}
void	ft_mv_rt(t_game *game)
{
	if (game->map[game->pos->x][game->pos->y
		+ 1] != '1'&& (game->map[game->pos->x][game->pos->y + 1] != 'E'
		|| game->collected == game->C))
	{
		game->mpos->x = game->pos->x;
		game->mpos->y = game->pos->y + 1;
		game->step++;
	}
}
