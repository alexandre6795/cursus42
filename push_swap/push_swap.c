/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:25:59 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/04 11:24:31 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_all *list)
{
	list->sa = NULL;
	list->sb = NULL;
}

//void	ft_print_list(t_stack *list)
//{
//	int	i;
//
//	i = ft_lst_range(list)+1;
//	printf("range = %d\n", i);
//	while (i > 0)
//	{
//		printf("value in chain = %ld ranking = %d\n", list->v,list->r);
//		i--;
//		list=list->next;
//	}
//}

int	main(int ac, char **av)
{
	t_all *stack;
	int select;
	if (ac <= 1)
		exit(0);
	stack = malloc(sizeof(t_all));
	ft_init(stack);
	printf("ok init\n");
	if (ft_verif_av(ac, av) == 0)
	{
		printf("ok verif av\n");
		ft_char_to_int_list(ac, av, stack);
		printf("ok char_to_int\n");
		stack = ft_ranking(stack);
		select = ft_selection(*stack);
	}
	else
	{
		ft_error(stack);
	}
	//ft_print_list(stack->sa);
	return (0);
}