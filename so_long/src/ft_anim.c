/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_anim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:05:58 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/16 14:59:38 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"



void	ft_del(t_game *game)
{	
	game->pos->y = 0;
	mlx_delete_image(game->mlx, game->pic->CC);
	mlx_delete_image(game->mlx, game->pic->CC2);
	mlx_delete_image(game->mlx, game->pic->CC3);
	mlx_delete_image(game->mlx, game->pic->PP);
	mlx_delete_image(game->mlx, game->pic->QQ);
	mlx_delete_image(game->mlx, game->pic->EE);
	mlx_delete_image(game->mlx, game->pic->EE2);
	mlx_delete_image(game->mlx, game->pic->WALL);
	mlx_delete_image(game->mlx, game->pic->FLOOR);
	mlx_delete_image(game->mlx, game->pic->FLOOR2);
	mlx_delete_image(game->mlx, game->pic->PP2);
	mlx_delete_image(game->mlx, game->pic->WALL2);
}
void	ft_del2(t_game *game)
{
	mlx_delete_texture(game->pic->t_CC);
	mlx_delete_texture(game->pic->t_CC2);
	mlx_delete_texture(game->pic->t_CC3);
	mlx_delete_texture(game->pic->t_PP);
	mlx_delete_texture(game->pic->t_QQ);
	mlx_delete_texture(game->pic->t_EE);
	mlx_delete_texture(game->pic->t_EE2);
	mlx_delete_texture(game->pic->t_WALL);
	mlx_delete_texture(game->pic->t_FLOOR);
	mlx_delete_texture(game->pic->t_FLOOR2);
	mlx_delete_texture(game->pic->t_PP2);
	mlx_delete_texture(game->pic->t_WALL2);
}

void	ft_anim_on_key(t_game *game)
{
	if ((game->mpos->x != game->pos->x || game->mpos->y != game->pos->y))
	{
		if (game->map[game->mpos->x][game->mpos->y] == 'C')
		{
			game->collected++;
			game->map[game->mpos->x][game->mpos->y] = 'P';
			game->map[game->pos->x][game->pos->y] = '0';
		}
		else if (game->map[game->mpos->x][game->mpos->y] == 'E'
				&& game->collected == game->C)
				{
					printf("You win !\n");
			mlx_close_window(game->mlx);
				}
		else if (game->map[game->mpos->x][game->mpos->y] == 'Q')
		{
			printf("You lose !\n");
			mlx_close_window(game->mlx);
		}
		else if (game->map[game->mpos->x][game->mpos->y] == '0')
		{
			game->map[game->pos->x][game->pos->y] = '0';
			game->map[game->mpos->x][game->mpos->y] = 'P';
		}
		ft_del(game);
		if(game->map[game->mpos->x][game->mpos->y] != 'E'|| game->collected == game->C)
		{
		game->pos->x = game->mpos->x;
		game->pos->y = game->mpos->y;
		}
		printf("pos x %d pos y %d mpos%d mpos y %d\n", game->pos->x, game->pos->y, game->mpos->x, game->mpos->y);
		ft_image(game->pic, game->mlx);
		ft_display(game->pic, game->mlx, game);
	}
}