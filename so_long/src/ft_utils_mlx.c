/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_mlx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:48:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/19 11:27:47 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_display(t_mlx *pic, mlx_t *mlx, t_game *g)
{
	t_temp	t;

	t.i.t0 = 0;
	while (t.i.t0 < g->msize->x && (g->map[t.i.t0][0] != '\n'))
	{
		t.i.t1 = 0;
		while (ft_valid_car(g->map[t.i.t0][t.i.t1]) == 1)
		{
			if (g->map[t.i.t0][t.i.t1] == 'C')
				t.i.t3 = ft_displayc(pic, mlx, t, g);
			if (g->map[t.i.t0][t.i.t1] == 'E')
				t.i.t3 = ft_displaye(pic, mlx, t, g);
			if (g->map[t.i.t0][t.i.t1] == 'Q')
				t.i.t3 = ft_displayq(pic, mlx, t, g);
			if (g->map[t.i.t0][t.i.t1] == 'P')
				t.i.t3 = ft_displayp(pic, mlx, t, g);
			if (g->map[t.i.t0][t.i.t1] == '1')
				t.i.t3 = ft_display1(pic, mlx, t, g);
			if (g->map[t.i.t0][t.i.t1] == '0')
				t.i.t3 = ft_displayf(pic, mlx, g, t);
			t.i.t1++;
		}
		t.i.t0++;
	}
	return (t.i.t3);
}

int	ft_image(t_mlx *pic, mlx_t *mlx)
{
	pic->qq = mlx_texture_to_image(mlx, pic->t_qq);
	if (!pic->qq)
		return (1);
	pic->cc = mlx_texture_to_image(mlx, pic->t_cc);
	if (!pic->cc)
		return (1);
	pic->cc2 = mlx_texture_to_image(mlx, pic->t_cc2);
	if (!pic->cc2)
		return (1);
	pic->cc3 = mlx_texture_to_image(mlx, pic->t_cc3);
	if (!pic->cc3)
		return (1);
	pic->pp = mlx_texture_to_image(mlx, pic->t_pp);
	if (!pic->pp)
		return (1);
	pic->pp2 = mlx_texture_to_image(mlx, pic->t_pp2);
	if (!pic->pp2)
		return (1);
	pic->ee = mlx_texture_to_image(mlx, pic->t_ee);
	if (!pic->ee)
		return (1);
	if (ft_image2(pic, mlx) == 1)
		return (1);
	return (0);
}

int	ft_texture(t_mlx *pic)
{
	pic->t_qq = mlx_load_png("img/q1.png");
	if (!pic->t_qq)
		return (1);
	pic->t_ee = mlx_load_png("img/e2.png");
	if (!pic->t_ee)
		return (1);
	pic->t_ee2 = mlx_load_png("img/e1.png");
	if (!pic->t_ee2)
		return (1);
	pic->t_cc = mlx_load_png("img/c1.png");
	if (!pic->t_cc)
		return (1);
	pic->t_cc2 = mlx_load_png("img/c2.png");
	if (!pic->t_cc2)
		return (1);
	pic->t_cc3 = mlx_load_png("img/c4.png");
	if (!pic->t_cc3)
		return (1);
	pic->t_pp = mlx_load_png("img/p1.png");
	if (!pic->t_pp)
		return (1);
	if (ft_texture2(pic) == 1)
		return (1);
	return (0);
}

void	ft_keyhook(mlx_key_data_t keydata, void *param)
{
	t_game	*game;

	game = param;
	if (keydata.key == MLX_KEY_ESCAPE && keydata.action == MLX_PRESS)
		mlx_close_window(game->mlx);
	if (keydata.key == MLX_KEY_W && keydata.action == MLX_PRESS)
		ft_mv_up(game);
	if (keydata.key == MLX_KEY_S && keydata.action == MLX_PRESS)
		ft_mv_dw(game);
	if (keydata.key == MLX_KEY_A && keydata.action == MLX_PRESS)
		ft_mv_lf(game);
	if (keydata.key == MLX_KEY_D && keydata.action == MLX_PRESS)
		ft_mv_rt(game);
	ft_anim_on_key(game);
}

void	ft_create_word(t_mlx *pic, t_game *game, mlx_t *mlx)
{
	if (ft_texture(pic) != 0)
		ft_error("trouble in create texture", game);
	if (ft_image(pic, mlx) != 0)
		ft_error("trouble in create img", game);
	if (ft_display(pic, mlx, game) != 0)
		ft_error("can t display picture", game);
}
