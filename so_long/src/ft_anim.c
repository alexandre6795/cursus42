/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_anim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:05:58 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/19 16:29:11 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_nline(t_game *game)
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
				&& game->collected == game->c)
		{
			printf("You win !\n");
			mlx_close_window(game->mlx);
		}
		else if (game->map[game->mpos->x][game->mpos->y] == 'Q')
		{
			printf("insert coin for restart\n");
			mlx_close_window(game->mlx);
		}
		else if (game->map[game->mpos->x][game->mpos->y] == '0')
		{
			game->map[game->pos->x][game->pos->y] = '0';
			game->map[game->mpos->x][game->mpos->y] = 'P';
		}
	}
}

void	ft_del(t_game *game)
{
	mlx_delete_image(game->mlx, game->pic->cc);
	mlx_delete_image(game->mlx, game->pic->cc2);
	mlx_delete_image(game->mlx, game->pic->cc3);
	mlx_delete_image(game->mlx, game->pic->pp);
	mlx_delete_image(game->mlx, game->pic->qq);
	mlx_delete_image(game->mlx, game->pic->ee);
	mlx_delete_image(game->mlx, game->pic->ee2);
	mlx_delete_image(game->mlx, game->pic->wall);
	mlx_delete_image(game->mlx, game->pic->floor);
	mlx_delete_image(game->mlx, game->pic->floor2);
	mlx_delete_image(game->mlx, game->pic->pp2);
	mlx_delete_image(game->mlx, game->pic->wall2);
}

void	ft_del2(t_game *game)
{
	mlx_delete_texture(game->pic->t_cc);
	mlx_delete_texture(game->pic->t_cc2);
	mlx_delete_texture(game->pic->t_cc3);
	mlx_delete_texture(game->pic->t_pp);
	mlx_delete_texture(game->pic->t_qq);
	mlx_delete_texture(game->pic->t_ee);
	mlx_delete_texture(game->pic->t_ee2);
	mlx_delete_texture(game->pic->t_wall);
	mlx_delete_texture(game->pic->t_floor);
	mlx_delete_texture(game->pic->t_floor2);
	mlx_delete_texture(game->pic->t_pp2);
	mlx_delete_texture(game->pic->t_wall2);
}

void	ft_anim_on_key(t_game *game)
{
	ft_nline(game);
	ft_del(game);
	if (game->map[game->mpos->x][game->mpos->y] != 'E'
		|| game->collected == game->c)
	{
		game->pos->x = game->mpos->x;
		game->pos->y = game->mpos->y;
	}
	ft_image(game->pic, game->mlx);
	ft_display(game->pic, game->mlx, game);
	ft_print_step(game);
}
