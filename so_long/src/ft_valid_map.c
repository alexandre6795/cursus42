/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:09:45 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/05 18:23:41 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_v(t_game *game)
{
		if (game->C == 0)
		ft_error("no coin",NULL);
		if (game->E == 0)
		ft_error("no exit",NULL);
		if (game->P == 0)
		ft_error("heros are in an other castel",NULL);
}

void ft_valid_fl(t_game *game,int len)
{
	int i;
	int j;

	i = 0;
	while(game->map[0][i] != '\n' ) 
	{
		if(game->map[0][i]!='1')
		ft_error("not only wall around map",game);
		i++;
	}
	i = 0;
	while(game->map[len][i]!= '\n')
	{
		if(game->map[len][i]!='1')
		ft_error("not only wall around map",game);
		i++;
	}
	
	j = 0;
	while(j > len && ft_strlen(game->map[i]) == ft_strlen(game->map[0]))	
	j++;
	if( j != i)
	ft_error("map line don t have same size",game);
	else
	game->msize->y = ft_strlen(game->map[0]);
}
void ft_valid_other(t_game *game,int len)
{
	t_temp	temp;
	
	temp.i.t0 = 1;
		while(game->map[temp.i.t0][0]!='\n'  && temp.i.t0 < len)
	{
		temp.i.t1 = 0;
		while(game->map[temp.i.t0][temp.i.t1])
		{
		if(game->map[temp.i.t0][0]!='1'|| game->map[ft_size(len)][ft_strlen(game->map[temp.i.t0])-1]!='1')
		ft_error("not only wall around map",NULL);
		if(game->map[temp.i.t0][temp.i.t1]=='C')
		game->C++;
		if(game->map[temp.i.t0][temp.i.t1]=='E')
		game->E++;
		if(game->map[temp.i.t0][temp.i.t1]=='P')
		game->P++;
		if(game->map[temp.i.t0][temp.i.t1]=='Q')
		game->Q++;
		temp.i.t1++;
		}
temp.i.t0++;
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
	}
	close(t);
	return(i);
}