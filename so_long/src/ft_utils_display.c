/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_display.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:48:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/20 08:57:05 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_displayq(t_mlx *pic, mlx_t *mlx, t_temp temp, t_game *game)
{
	if (ft_displayf(pic, mlx, game, temp) != 0)
		return (1);
	if (mlx_image_to_window(mlx, pic->qq, temp.i.t1 * 32, temp.i.t0 * 32) < 0)
		return (1);
	return (0);
}

int	ft_displaye(t_mlx *pic, mlx_t *mlx, t_temp temp, t_game *game)
{
	if (ft_displayf(pic, mlx, game, temp) != 0)
		return (1);
	if (game->collected == game->c)
	{
		if (mlx_image_to_window(mlx, pic->ee2, temp.i.t1 * 32, temp.i.t0
				* 32) < 0)
			return (1);
	}
	else
	{
		if (mlx_image_to_window(mlx, pic->ee, temp.i.t1 * 32, temp.i.t0
				* 32) < 0)
			return (1);
	}
	return (0);
}

int	ft_displayp(t_mlx *pic, mlx_t *mlx, t_temp temp, t_game *game)
{
	if (ft_displayf(pic, mlx, game, temp) != 0)
		return (1);
	if (mlx_image_to_window(mlx, pic->pp, temp.i.t1 * 32, temp.i.t0 * 32) < 0)
		return (1);
	return (0);
}

int	ft_display1(t_mlx *pic, mlx_t *mlx, t_temp temp, t_game *game)
{
	int	i;

	if (game->msize->x - temp.i.t1 * temp.i.t0 > 3)
		i = game->msize->x - game->msize->y + temp.i.t1 - temp.i.t0
			- game->step;
	else
		i = game->msize->x + game->msize->y - temp.i.t1 + temp.i.t0
			+ game->step;
	if (i % 3 == 0)
	{
		if (mlx_image_to_window(mlx, pic->wall, temp.i.t1 * 32, temp.i.t0
				* 32) < 0)
			return (1);
	}
	else
	{
		if (mlx_image_to_window(mlx, pic->wall2, temp.i.t1 * 32, temp.i.t0
				* 32) < 0)
			return (1);
	}
	return (0);
}

int	ft_displayf(t_mlx *pic, mlx_t *mlx, t_game *game, t_temp temp)
{
	int	i;

	if (game->msize->x - temp.i.t1 * temp.i.t0 > 3)
		i = game->msize->x - game->msize->y + temp.i.t1 - temp.i.t0;
	else
		i = game->msize->x + game->msize->y - temp.i.t1 + temp.i.t0;
	if (i % 3 == 0)
	{
		if (mlx_image_to_window(mlx, pic->floor2, temp.i.t1 * 32, temp.i.t0
				* 32) < 0)
			return (1);
	}
	else
	{
		if (mlx_image_to_window(mlx, pic->floor, temp.i.t1 * 32, temp.i.t0
				* 32) < 0)
			return (1);
	}
	return (0);
}
