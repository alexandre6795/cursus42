/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:48:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/13 16:44:08 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_temp(t_temp *temp)
{
	temp->i.t0 = 0;
	temp->i.t1 = 0;
	temp->i.t2 = 0;
	temp->i.t3 = 0;
	temp->i.t4 = 0;
	temp->i.t5 = 0;
	temp->s.s0 = NULL;
	temp->s.s1 = NULL;
	temp->s.s2 = NULL;
	temp->s.s3 = NULL;
}

void	ft_ini_game(t_game *game)
{
	game->pos = malloc(sizeof(t_pos));
	game->msize = malloc(sizeof(t_pos));
	game->C = 0;
	game->P = 0;
	game->Q = 0;
	game->E = 0;
	game->step = 0;
	game->collected = 0;
	game->msize->x = 0;
	game->pos->x = 0;
	game->msize->y = 0;
	game->pos->y = 0;
	game->map = NULL;
}
void	ft_valid_game(char *av, t_game *game)
{
	t_temp	temp;
	int		fd;
	int		len;

	fd = open(av, O_RDONLY);
	if (fd < 0)
		ft_error("file not found", game);
	len = ft_size(fd);
	game->msize->x = len;
	temp.i.t0 = 0;
	game->map = malloc(sizeof(char *) * (len + 1));
	fd = open(av, O_RDONLY);
	while (1)
	{
		temp.s.s0 = get_next_line(fd);
		if (temp.s.s0 == NULL)
			break ;
		else
			game->map[temp.i.t0] = temp.s.s0;
		temp.i.t0++;
	}
	free(temp.s.s0);
	close(fd);
	ft_valid_fl(game, len - 1);
	ft_valid_other(game, len - 1);
}

int	ft_valid_ag(char *av)
{
	char	*last4;
	int		i;

	i = 0;
	while (av[i])
		i++;
	last4 = av + i - 4;
	if (ft_strncmp(last4, ".ber", 4) != 0)
		return (1);
	return (0);
}
int	main(int ac, char **av)
{
	t_game *game;
	mlx_t *mlx;
	t_mlx *pic;

	ft_valid_av(ac, av);
	game = malloc(sizeof(t_game));
	ft_ini_game(game);
	ft_valid_game(av[1], game);
	pic = (t_mlx *)malloc(sizeof(t_mlx));
	ft_init_pic(pic);
	if (!(mlx = mlx_init(32 * game->msize->y, 32 * game->msize->x, "MLX42",
				true)))
		ft_error("can t open game sorry :/", game);
mlx_set_setting(MLX_STRETCH_IMAGE,true);
	ft_create_word(pic, game, mlx);
	//mlx_loop_hook(mlx,ft_hook,mlx);
	mlx_loop(mlx);
	ft_clean(pic,mlx);
	mlx_terminate(mlx);
	ft_free(game);
	system("leaks so_long");
	return (0);
}