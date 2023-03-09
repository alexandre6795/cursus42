/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:47:59 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/07 12:19:58 by aherrman         ###   ########.fr       */
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

void	rrot_a(void)
{
	ft_printf("rrb\n");
}

void	ft_jum_error(char **s)
{
	ft_free(s)
	write(2, "Error", 5);
	write(2, "/n", 1);
	exit(1)
}
