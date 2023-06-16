/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_display.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:48:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/16 10:39:58 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_displayQ(t_mlx *pic, mlx_t *mlx, t_temp temp, t_game *game)
{
	(void)game;
	if (ft_displayF(pic, mlx, game, temp) != 0)
		return (1);
	if (mlx_image_to_window(mlx, pic->QQ, temp.i.t1 * 32, temp.i.t0 * 32) < 0)
		return (1);
	return (0);
}
int	ft_displayE(t_mlx *pic, mlx_t *mlx, t_temp temp, t_game *game)
{
	(void)game;
	if (ft_displayF(pic, mlx, game, temp) != 0)
		return (1);
	if (game->collected == game->C)
	{
		if (mlx_image_to_window(mlx, pic->EE2, temp.i.t1 * 32, temp.i.t0
				* 32) < 0)
			return (1);
	}
	else 
	{
		if (mlx_image_to_window(mlx, pic->EE, temp.i.t1 * 32, temp.i.t0
					* 32) < 0)
			return (1);
	}
	return (0);
}
int	ft_displayP(t_mlx *pic, mlx_t *mlx, t_temp temp, t_game *game)
{
	(void)game;
	if (ft_displayF(pic, mlx, game, temp) != 0)
		return (1);
	if (mlx_image_to_window(mlx, pic->PP, temp.i.t1 * 32, temp.i.t0 * 32) < 0)
		return (1);
	return (0);
}
int	ft_display1(t_mlx *pic, mlx_t *mlx, t_temp temp, t_game *game)
{
	(void)game;
	if (ft_displayF(pic, mlx, game, temp) != 0)
		return (1);
	if (mlx_image_to_window(mlx, pic->WALL, temp.i.t1 * 32, temp.i.t0 * 32) < 0)
		return (1);
	return (0);
}
int	ft_displayF(t_mlx *pic, mlx_t *mlx, t_game *game, t_temp temp)
{
	int i;
	if (game->msize->x - temp.i.t1 * temp.i.t0 > 3)
		i = game->msize->x - game->msize->y + temp.i.t1 - temp.i.t0;
	else
		i = game->msize->x + game->msize->y - temp.i.t1 + temp.i.t0;

	if (i % 3 == 0)
	{
		if (mlx_image_to_window(mlx, pic->FLOOR2, temp.i.t1 * 32, temp.i.t0
				* 32) < 0)
			return (1);
	}
	else
	{
		if (mlx_image_to_window(mlx, pic->FLOOR, temp.i.t1 * 32, temp.i.t0
				* 32) < 0)
			return (1);
	}

	return (0);
}