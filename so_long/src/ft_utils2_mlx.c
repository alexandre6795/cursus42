/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2_mlx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:07:13 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/19 11:29:02 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_image2(t_mlx *pic, mlx_t *mlx)
{
	pic->ee2 = mlx_texture_to_image(mlx, pic->t_ee2);
	if (!pic->ee2)
		return (1);
	pic->wall = mlx_texture_to_image(mlx, pic->t_wall);
	if (!pic->wall)
		return (1);
	pic->wall2 = mlx_texture_to_image(mlx, pic->t_wall2);
	if (!pic->wall2)
		return (1);
	pic->floor = mlx_texture_to_image(mlx, pic->t_floor);
	if (!pic->floor)
		return (1);
	pic->floor2 = mlx_texture_to_image(mlx, pic->t_floor2);
	if (!pic->floor2)
		return (1);
	return (0);
}

int	ft_texture2(t_mlx *pic)
{
	pic->t_pp2 = mlx_load_png("img/p2.png");
	if (!pic->t_pp2)
		return (1);
	pic->t_wall = mlx_load_png("img/w1.png");
	if (!pic->t_wall)
		return (1);
	pic->t_wall2 = mlx_load_png("img/w2.png");
	if (!pic->t_wall2)
		return (1);
	pic->t_floor = mlx_load_png("img/floor1.png");
	if (!pic->t_floor)
		return (1);
	pic->t_floor2 = mlx_load_png("img/floor2.png");
	if (!pic->t_floor2)
		return (1);
	return (0);
}

int	ft_valid_car(char c)
{
	if (c == 'C' || c == 'E' || c == 'Q' || c == 'P' || c == '1' || c == '0')
		return (1);
	return (0);
}

void	ft_clean2(t_mlx *pic, mlx_t *mlx)
{
	if (pic->t_ee)
		mlx_delete_texture(pic->t_ee);
	if (pic->ee)
		mlx_delete_image(mlx, pic->ee);
	if (pic->t_ee2)
		mlx_delete_texture(pic->t_ee2);
	if (pic->ee2)
		mlx_delete_image(mlx, pic->ee2);
	if (pic->wall)
		mlx_delete_image(mlx, pic->wall);
	if (pic->t_wall)
		mlx_delete_texture(pic->t_wall);
	if (pic->wall2)
		mlx_delete_image(mlx, pic->wall2);
	if (pic->t_wall2)
		mlx_delete_texture(pic->t_wall2);
	if (pic->floor)
		mlx_delete_image(mlx, pic->floor);
	if (pic->t_floor)
		mlx_delete_texture(pic->t_floor);
	if (pic->t_floor2)
		mlx_delete_texture(pic->t_floor2);
	if (pic->floor2)
		mlx_delete_image(mlx, pic->floor2);
}

void	ft_clean(t_mlx *pic, mlx_t *mlx)
{
	if (pic->qq)
		mlx_delete_image(mlx, pic->qq);
	if (pic->t_qq)
		mlx_delete_texture(pic->t_qq);
	if (pic->cc)
		mlx_delete_image(mlx, pic->cc);
	if (pic->t_cc)
		mlx_delete_texture(pic->t_cc);
	if (pic->cc2)
		mlx_delete_image(mlx, pic->cc2);
	if (pic->t_cc2)
		mlx_delete_texture(pic->t_cc2);
	if (pic->cc3)
		mlx_delete_image(mlx, pic->cc3);
	if (pic->t_cc3)
		mlx_delete_texture(pic->t_cc3);
	if (pic->t_pp)
		mlx_delete_texture(pic->t_pp);
	if (pic->pp)
		mlx_delete_image(mlx, pic->pp);
	if (pic->t_pp2)
		mlx_delete_texture(pic->t_pp2);
	if (pic->pp2)
		mlx_delete_image(mlx, pic->pp2);
	ft_clean2 (pic, mlx);
}
