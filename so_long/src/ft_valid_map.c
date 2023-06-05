/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:09:45 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/05 11:39:59 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_valid_fl(char * map)
{
	int i;

	i = 0;
	while(map[i])
	{
		if(map[i]!='1')
		ft_error("not only wall around map",NULL);
		i++;
	}
}
void ft_valid_other(char *map)
{
	t_temp	*temp;

	ft_init_temp(temp);
		while(map[temp.i.t0])
	{
		if(map[0]!='1'|| ft_strlen(map)!='1')
		ft_error("not only wall around map",NULL);
		temp.i.t0++;
	}
}