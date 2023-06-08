/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2_mlx.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:07:13 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/08 11:10:27 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


void	ft_clean2(t_mlx *pic, mlx_t *mlx)
{
	if (pic->t_WALL)
		mlx_delete_texture(pic->t_WALL);
	if (pic->WALL)
		mlx_delete_image(mlx, pic->WALL);
}
void ft_clean(t_mlx *pic,mlx_t *mlx)
{
	if(pic->CC)
		mlx_delete_image(mlx, pic->CC);
	if(pic->t_CC)
		mlx_delete_texture(pic->t_CC);
	if(pic->CC)
		mlx_delete_image(mlx, pic->EE);
	if(pic->t_EE)
		mlx_delete_texture(pic->t_EE);
	if(pic->QQ)
		mlx_delete_image(mlx, pic->QQ);
	if(pic->t_QQ)
		mlx_delete_texture(pic->t_QQ);
	if(pic->PP)
		mlx_delete_image(mlx, pic->PP);
	if(pic->t_PP)
		mlx_delete_texture(pic->t_PP);
	if(pic->PP)
		mlx_delete_image(mlx, pic->PP);
	if(pic->t_FLOOR)
		mlx_delete_texture(pic->t_FLOOR);
	if(pic->FLOOR)
		mlx_delete_image(mlx, pic->FLOOR);
	ft_clean2(pic,mlx);
}