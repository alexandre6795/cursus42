/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:46:23 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/07 10:56:59 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

 void 	ft_print_map(t_game *game)
{
	int i = 0;
	
	while(game->msize->x > i)
	{
		printf("%s",game->map[i]);
		i++;
	}
	printf("\n");
	printf("C = %d\n",game->C);
	printf("P = %d\n",game->P);
	printf("Q = %d\n",game->Q);
	printf("E = %d\n",game->E);
	printf("msize->x = %d\n",game->msize->x);
	printf("msize->y = %d\n",game->msize->y);
	printf("pos->x = %d\n",game->pos->x);
	printf("pos->y = %d\n",game->pos->y);
}