/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:44:03 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/16 11:40:03 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_free(t_game *game)
{
	int	i;

	i = 0;
	if (game != NULL)
	{
		if (game->map != NULL)
			while (i < game->msize->x)
			{
				free(game->map[i]);
				i++;
			}
		if(game->map != NULL)
			free(game->map);
		free(game->pos);
		free(game->mpos);
		free(game->msize);
		free(game);
	}
}

void	ft_error(char *err, t_game *game)
{
	if (err != NULL)
		ft_printf("ERROR : %s\n", err);
	else
		ft_printf("ERROR : erreur inconnu\n");
	if (game != NULL)
		ft_free(game);
	exit(0);
}
void	ft_freep(t_mlx *pic)
{
	if (pic != NULL)
	{
		free(pic->CC);
		free(pic->QQ);
		free(pic->EE);
		free(pic->WALL);
		free(pic->FLOOR);
		free(pic->FLOOR2);
		free(pic->PP);
		free(pic->t_CC);
		free(pic->t_QQ);
		free(pic->t_EE);
		free(pic->t_PP);
		free(pic->t_WALL);
		free(pic->t_FLOOR);
		free(pic->t_FLOOR2);
		free(pic);
	}
}

void	ft_init_pic(t_mlx *pic)
{
	pic->CC = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->CC2 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->CC3 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->QQ = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->EE = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->EE2 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->PP = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->PP2 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->WALL = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->WALL2 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->FLOOR = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->FLOOR2 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->t_CC = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_CC2 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_CC3 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_QQ = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_EE = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_EE2 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_PP = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_WALL = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_PP2 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_WALL2 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_FLOOR = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_FLOOR2 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
}