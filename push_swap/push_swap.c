/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:25:59 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/18 14:20:57 by aherrman         ###   ########.fr       */
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
	temp->lint.temp0=0;
	temp->lint.temp1=0 ;
	temp->lint.temp2=0 ;
	temp->lint.temp3=0 ;
	temp->string.temp0=NULL;
	temp->string.temp1=NULL;
	temp->string.temp2=NULL;
	temp->string.temp3=NULL;
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
	//ft_print_list(stack->sa);
	return (0);
}