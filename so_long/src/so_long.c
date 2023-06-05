/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:48:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/05 18:22:02 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"	

 void 	ft_print_map(t_game *game)
{
	int i = 0;
	int j = 0;
	
	while(game->msize->x > i)
	{
		while(game->msize->y > j)
		{
		printf("%c",game->map[i][j]);
		j++;
		}
		i++;
	}
		printf("C = %d\n",game->C);
	printf("P = %d\n",game->P);
	printf("Q = %d\n",game->Q);
	printf("E = %d\n",game->E);
	printf("msize->x = %d\n",game->msize->x);
	printf("msize->y = %d\n",game->msize->y);
	printf("pos->x = %d\n",game->pos->x);
	printf("pos->y = %d\n",game->pos->y);
}

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
	game->msize->x = 0;
	game->pos->x = 0;
	game->msize->y = 0;
	game->pos->y = 0;
	game->map = NULL;
}
void	ft_valid_game(char *av,t_game *game)
{
	t_temp	temp;
	int		fd;
	int		len;

	fd = open(av, O_RDONLY);
	len = ft_size(fd);
	game->msize->x = len;
	temp.i.t0 = 0;
	game->map = malloc(sizeof(char *) * (len + 1));
	fd = open(av, O_RDONLY);
	while (1)
	{
		temp.s.s0 = get_next_line(fd);
		printf("%s", temp.s.s0);
		if (temp.s.s0 == NULL)
			break ;
		else
			game->map[temp.i.t0] = temp.s.s0;
		temp.i.t0++;
	}
	ft_print_map(game);
	ft_valid_fl(game,len-1);
	ft_print_map(game);
	//ft_valid_other(game, len-1);
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

	ft_valid_av(ac, av);
	game = malloc(sizeof(t_game));
	ft_ini_game(game);
	ft_valid_game(av[1],game);
	return (0);
}