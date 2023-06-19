/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:44:03 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/19 11:26:51 by aherrman         ###   ########.fr       */
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
		{
			while (i < game->msize->x)
			{
				free(game->map[i]);
				i++;
			}
		}
		if (game->map != NULL)
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
		free(pic->cc);
		free(pic->qq);
		free(pic->ee);
		free(pic->wall);
		free(pic->floor);
		free(pic->floor2);
		free(pic->pp);
		free(pic->t_cc);
		free(pic->t_qq);
		free(pic->t_ee);
		free(pic->t_pp);
		free(pic->t_wall);
		free(pic->t_floor);
		free(pic->t_floor2);
		free(pic);
	}
}

void	ft_init_pic(t_mlx *pic)
{
	pic->cc = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->cc2 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->cc3 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->qq = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->ee = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->ee2 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->pp = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->pp2 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->wall = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->wall2 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->floor = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->floor2 = (mlx_image_t *)malloc(sizeof(mlx_image_t));
	pic->t_cc = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_cc2 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_cc3 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_qq = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_ee = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_ee2 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_pp = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_wall = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_pp2 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_wall2 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_floor = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
	pic->t_floor2 = (mlx_texture_t *)malloc(sizeof(mlx_texture_t));
}
