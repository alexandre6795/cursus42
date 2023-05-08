/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:47:59 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/14 10:50:06 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(void)
{
	ft_printf("sb\n");
}

void	push_b(void)
{
	ft_printf("pb\n");
}

void	rot_b(void)
{
	ft_printf("rb\n");
}

void	rrot_b(void)
{
	ft_printf("rrb\n");
}

void	ft_error(char **s, int *nb)
{
	ft_free(s, nb);
	write(2, "Error", 5);
	write(2, "/n", 1);
	exit(1);
}
