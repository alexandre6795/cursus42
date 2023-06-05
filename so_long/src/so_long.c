/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:48:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/05 11:32:45 by aherrman         ###   ########.fr       */
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
	game->C = 0;
	game->P = 0;
	game->Q = 0;
	game->E = 0;
	game->pos=NULL;
	game->map = NULL;
}
void ft_valid_game(int fd)
{
	t_temp	temp;
	char * map;
	
	temp.i.t0 = 0;
	while (1)
	{
		temp.s.s0 = get_next_line(fd);
		printf("%s",temp.s.s0);
		if (temp.s.s0 == NULL)
		{
			ft_valid_fl(map);
			break ;
		}
		else
		{
			map = temp.s.s0;
			if (temp.i.t0 == 0)
			ft_valid_fl(map);
			else
			ft_valid_other(map)
			temp.i.t0++;
		}
	}
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
	int fd;
	t_game *game;

	ft_valid_av(ac, av);
	game = malloc(sizeof(t_game));
	ft_ini_game(game);
	fd = open(av[1], O_RDONLY);
	ft_valid_game(fd);
	return (0);
}