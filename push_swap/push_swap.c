/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:25:59 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/25 20:08:56 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_all *list)
{
	list->sa = NULL;
	list->sb = NULL;
}
void ft_init_temp(t_temp *temp)
{
	temp->i.t0=0;
	temp->i.t1=0 ;
	temp->i.t2=0 ;
	temp->i.t3=0 ;
	temp->i.t4=0 ;
	temp->i.t5=0 ;
	temp->s.s0=NULL;
	temp->s.s1=NULL;
	temp->s.s2=NULL;
	temp->s.s3=NULL;
}

int	main(int ac, char **av)
{
	t_all *stack;
	if (ac <= 1)
		exit(0);
	stack = malloc(sizeof(t_all));
	ft_init(stack);
	if (ft_verif_av(ac, av) == 0)
	{
		ft_char_to_int_list(ac, av, stack);
		stack = ft_ranking(stack);
		ft_sort(stack);
	}
	else
	{
		ft_error(stack);
	}
	ft_free(stack);
	//ft_print_list(stack->sa);
	return (0);
}