/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2_display.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 09:48:41 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/13 17:42:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_displayC(t_mlx *pic, mlx_t *mlx, t_temp temp, t_game *game)
{
	(void)game;
	if (ft_displayF(pic, mlx, game, temp) != 0)
		return (1);
		if (mlx_image_to_window(mlx, pic->CC, temp.i.t1 * 32, temp.i.t0
				* 32) < 0)
			return (1);
	return (0);
}
