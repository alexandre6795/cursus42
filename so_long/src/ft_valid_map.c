/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:09:45 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/07 11:35:54 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_v(t_game *game)
{
	if (game->C == 0)
		ft_error("no coin", game);
	if (game->E == 0)
		ft_error("no exit", game);
	if (game->P == 0)
		ft_error("heros are in an other castel", game);
	if (game->E > 1)
		ft_error("more one exit", game);
	if (game->P > 1)
		ft_error("only one heros in this game", game);
	ft_flood_fill(game);
}

void	ft_valid_fl(t_game *game, int len)
{
	int	i;

	i = 0;
	while (game->map[0][i] != '\n')
	{
		if (game->map[0][i] != '1')
			ft_error("not only wall around map", game);
		i++;
	}
	i = 0;
	while (game->map != NULL
		&& (ft_strlen(game->map[i]) == ft_strlen(game->map[0])))
		i++;
	if (ft_strlen(game->map[len]) + 1 == ft_strlen(game->map[0]))
		i++;
	if (i != game->msize->x)
		ft_error("map line don t have same size", game);
	game->msize->y = ft_strlen(game->map[0]) - 1;
	i = 0;
	while (game->map[len][i] != '\n' && game->msize->y > i)
	{
		if (game->map[len][i] != '1')
			ft_error("not only wall around map", game);
		i++;
	}
}
void	ft_valid_other(t_game *game, int len)
{
	t_temp temp;

	temp.i.t0 = 0;
	while (temp.i.t0++ < len && game->map[temp.i.t0][0] != '\n')
	{
		temp.i.t1 = 0;
		temp.i.t3 = 0;
		while (temp.i.t1 < game->msize->y && game->map[temp.i.t0][temp.i.t1++])
		{
			if (game->map[temp.i.t0][0] != '1'
				|| game->map[temp.i.t0][game->msize->y - 1] != '1')
				ft_error("not only wall around map", NULL);
			if (game->map[temp.i.t0][temp.i.t1] == 'C')
				game->C++;
			if (game->map[temp.i.t0][temp.i.t1] == 'E')
				game->E++;
			if (game->map[temp.i.t0][temp.i.t1] == 'P')
				ft_add_heros_pos(game, temp.i.t0, temp.i.t1);
			if (game->map[temp.i.t0][temp.i.t1] == 'Q')
				temp.i.t3++;
			ft_n1l(temp.i.t3,game);
		}
		game->Q += temp.i.t3;
	}
	ft_v(game);
}

	int ft_size(int fd)
	{
		int i;
		char *s;
		int t;

		t = fd;
		i = 0;
		while (1)
		{
			s = get_next_line(t);
			if (s == NULL)
				break ;
			else
				i++;
			free(s);
		}
		close(t);
		return (i);
	}