/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2_mlx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:07:13 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/15 14:21:58 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_image2(t_mlx *pic, mlx_t *mlx)
{
	pic->EE2 = mlx_texture_to_image(mlx, pic->t_EE2);
	if (!pic->EE2)
		return (1);
	pic->WALL = mlx_texture_to_image(mlx, pic->t_WALL);
	if (!pic->WALL)
		return (1);
	pic->WALL2 = mlx_texture_to_image(mlx, pic->t_WALL2);
	if (!pic->WALL2)
		return (1);
	pic->FLOOR = mlx_texture_to_image(mlx, pic->t_FLOOR);
	if (!pic->FLOOR)
		return (1);
	pic->FLOOR2 = mlx_texture_to_image(mlx, pic->t_FLOOR2);
	if (!pic->FLOOR2)
		return (1);
	return (0);
}

int	ft_texture2(t_mlx *pic)
{
	pic->t_PP2 = mlx_load_png("img/p2.png");
	if (!pic->t_PP2)
		return (1);
	pic->t_WALL = mlx_load_png("img/w1.png");
	if (!pic->t_WALL)
		return (1);
	pic->t_WALL2 = mlx_load_png("img/w2.png");
	if (!pic->t_WALL2)
		return (1);
	pic->t_FLOOR = mlx_load_png("img/floor1.png");
	if (!pic->t_FLOOR)
		return (1);
	pic->t_FLOOR2 = mlx_load_png("img/floor2.png");
	if (!pic->t_FLOOR2)
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
	if (pic->t_EE)
		mlx_delete_texture(pic->t_EE);
	if (pic->EE)
		mlx_delete_image(mlx, pic->EE);
	if (pic->t_EE2)
		mlx_delete_texture(pic->t_EE2);
	if (pic->EE2)
		mlx_delete_image(mlx, pic->EE2);
	if (pic->WALL)
		mlx_delete_image(mlx, pic->WALL);
	if (pic->t_WALL)
		mlx_delete_texture(pic->t_WALL);
	if (pic->WALL2)
		mlx_delete_image(mlx, pic->WALL2);
	if (pic->t_WALL2)
		mlx_delete_texture(pic->t_WALL2);
	if (pic->FLOOR)
		mlx_delete_image(mlx, pic->FLOOR);
	if (pic->t_FLOOR)
		mlx_delete_texture(pic->t_FLOOR);
	if (pic->t_FLOOR2)
		mlx_delete_texture(pic->t_FLOOR2);
	if (pic->FLOOR2)
		mlx_delete_image(mlx, pic->FLOOR2);
}
void	ft_clean(t_mlx *pic, mlx_t *mlx)
{
	if (pic->QQ)
		mlx_delete_image(mlx, pic->QQ);
	if (pic->t_QQ)
		mlx_delete_texture(pic->t_QQ);
	if (pic->CC)
		mlx_delete_image(mlx, pic->CC);
	if (pic->t_CC)
		mlx_delete_texture(pic->t_CC);
	if (pic->CC2)
		mlx_delete_image(mlx, pic->CC2);
	if (pic->t_CC2)
		mlx_delete_texture(pic->t_CC2);
	if (pic->CC3)
		mlx_delete_image(mlx, pic->CC3);
	if (pic->t_CC3)
		mlx_delete_texture(pic->t_CC3);
	if (pic->t_PP)
		mlx_delete_texture(pic->t_PP);
	if (pic->PP)
		mlx_delete_image(mlx,pic->PP);
	if (pic->t_PP2)
		mlx_delete_texture(pic->t_PP2);
	if (pic->PP2)
		mlx_delete_image(mlx, pic->PP2);
	ft_clean2(pic, mlx);
}