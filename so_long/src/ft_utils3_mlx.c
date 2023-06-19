/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils3_mlx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:48:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/19 16:31:59 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_display0(t_mlx *pic, mlx_t *mlx, t_game *g)
{
	t_temp	t;

	t.i.t0 = 0;
	while (t.i.t0 < g->msize->x && (g->map[t.i.t0][0] != '\n'))
	{
		t.i.t1 = 0;
		while (g->map[t.i.t0][t.i.t1])
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

int	ft_image0(t_mlx *pic, mlx_t *mlx)
{
	pic->cc = mlx_texture_to_image(mlx, pic->t_cc);
	if (!pic->cc)
		return (1);
	pic->ee = mlx_texture_to_image(mlx, pic->t_ee);
	if (!pic->ee)
		return (1);
	pic->pp = mlx_texture_to_image(mlx, pic->t_pp);
	if (!pic->pp)
		return (1);
	pic->qq = mlx_texture_to_image(mlx, pic->t_qq);
	if (!pic->qq)
		return (1);
	pic->wall = mlx_texture_to_image(mlx, pic->t_wall);
	if (!pic->wall)
		return (1);
	pic->floor = mlx_texture_to_image(mlx, pic->t_floor);
	if (!pic->floor)
		return (1);
	pic->floor2 = mlx_texture_to_image(mlx, pic->t_floor2);
	if (!pic->floor2)
		return (1);
	return (0);
}

int	ft_texture0(t_mlx *pic)
{
	pic->t_cc = mlx_load_png("img/w2.png");
	if (!pic->t_cc)
		return (1);
	pic->t_ee = mlx_load_png("img/c2.png");
	if (!pic->t_ee)
		return (1);
	pic->t_qq = mlx_load_png("img/q1.png");
	if (!pic->t_qq)
		return (1);
	pic->t_pp = mlx_load_png("img/p1.png");
	if (!pic->t_pp)
		return (1);
	pic->t_wall = mlx_load_png("img/w1.png");
	if (!pic->t_wall)
		return (1);
	pic->t_floor = mlx_load_png("img/floor1.png");
	if (!pic->t_floor)
		return (1);
	pic->t_floor2 = mlx_load_png("img/floor2.png");
	if (!pic->t_floor2)
		return (1);
	return (0);
}

void	ft_print_step(t_game *game)
{
	char	*str;
	char	*step;

	step = ft_itoa(game->step);
	str = ft_strjoin("step : ", step);
	mlx_put_string(game->mlx, str, 0, 0);
	free(str);
	free(step);
}
