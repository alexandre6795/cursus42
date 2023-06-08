/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_mlx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:48:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/08 17:57:39 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_display(t_mlx *pic, mlx_t *mlx, t_game *game)
{
	t_temp	temp;

	temp.i.t0 = 0;
	while (temp.i.t0 < game->msize->x - 1 && game->map[temp.i.t0][0] != '\n')
	{
		temp.i.t1 = 0;
		while (temp.i.t1 < game->msize->y && game->map[temp.i.t0][temp.i.t1])
		{
			if (game->map[temp.i.t0][temp.i.t1] == 'C')
				temp.i.t3 = ft_displayC(pic, mlx, temp);
			if (game->map[temp.i.t0][temp.i.t1] == 'E')
				temp.i.t3 = ft_displayE(pic, mlx, temp);
			if (game->map[temp.i.t0][temp.i.t1] == 'Q')
				temp.i.t3 = ft_displayQ(pic, mlx, temp);
			if (game->map[temp.i.t0][temp.i.t1] == 'P')
				temp.i.t3 = ft_displayP(pic, mlx, temp);
			if (game->map[temp.i.t0][temp.i.t1] == '1')
				temp.i.t3 = ft_display1(pic, mlx, temp);
			if (game->map[temp.i.t0][temp.i.t1] == '0')
				temp.i.t3 = ft_displayF(pic, mlx, game, temp);
			temp.i.t1++;
		}
		temp.i.t0++;
	}
	return (temp.i.t3);
}

int	ft_image(t_mlx *pic, mlx_t *mlx)
{
	pic->CC = mlx_texture_to_image(mlx, pic->t_CC);
	if (!pic->CC)
		return (1);
	pic->EE = mlx_texture_to_image(mlx, pic->t_EE);
	if (!pic->EE)
		return (1);
	pic->PP = mlx_texture_to_image(mlx, pic->t_PP);
	if (!pic->PP)
		return (1);
	pic->QQ = mlx_texture_to_image(mlx, pic->t_QQ);
	if (!pic->QQ)
		return (1);
	pic->WALL = mlx_texture_to_image(mlx, pic->t_WALL);
	if (!pic->WALL)
		return (1);
	pic->FLOOR = mlx_texture_to_image(mlx, pic->t_FLOOR);
	if (!pic->FLOOR)
		return (1);
	pic->FLOOR2 = mlx_texture_to_image(mlx, pic->t_FLOOR2);
	if (!pic->FLOOR2)
		return (1);
	return (0);
}

int	ft_texture(t_mlx *pic)
{
	pic->t_CC = mlx_load_png("img/Pickle.png");
	if (!pic->t_CC)
		return (1);
	pic->t_EE = mlx_load_png("img/Pickle.png");
	if (!pic->t_EE)
		return (1);
	pic->t_QQ = mlx_load_png("img/Pickle.png");
	if (!pic->t_QQ)
		return (1);
	pic->t_PP = mlx_load_png("img/Pickle.png");
	if (!pic->t_PP)
		return (1);
		pic->t_WALL = mlx_load_png("img/Pickle.png");
	if (!pic->t_WALL)
		return (1);
	 pic->t_FLOOR = mlx_load_png("img/floor1.png");
	 if (!pic->t_FLOOR)
	 	return (1);
	pic->t_FLOOR2 = mlx_load_png("img/floor2.png");
	if (!pic->t_FLOOR2)
		return (1);
	return (0);
}

void	ft_hook(void *param, t_game *game)
{
	mlx_t	*mlx;

	mlx = param;
	if (mlx_is_key_down(mlx, MLX_KEY_ESCAPE))
		mlx_close_window(mlx);
	if (mlx_is_key_down(mlx, MLX_KEY_W) && game->pos->x - 1 != '1')
	{
		game->pos->x -= 1;
	}
	if (mlx_is_key_down(mlx, MLX_KEY_S) && game->pos->x + 1 != '1')
	{
		game->pos->x += 1;
	}
	if (mlx_is_key_down(mlx, MLX_KEY_A) && game->pos->y - 1 != '1')
	{
		game->pos->y -= 1;
	}
	if (mlx_is_key_down(mlx, MLX_KEY_D) && game->pos->y + 1 != '1')
	{
		game->pos->y += 1;
	}
}
void	ft_create_word(t_mlx *pic, t_game *game, mlx_t *mlx)
{
	if (ft_texture(pic) != 0)
		 ft_error("trouble in create texture", game);
	if (ft_image(pic, mlx) != 0)
		ft_error("trouble in create texture", game);
	if (ft_display(pic, mlx, game) != 0)
		ft_error("can t display picture", game);
}