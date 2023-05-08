/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_int_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:27:35 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/02 15:42:54 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_char_to_int_list(int ac, char **av, t_all *stack)
{
	int		i;
	char	**word;

	word = NULL;
	i = 0;
	if (ac == 2)
	{
		word = ft_split(av[1], ' ');
		while (word[i] != 0)
		{
			ft_lstadd_back_int(&stack->sa,ft_new_elem(ft_atoi_one_lint(word[i])));
			i++;
		}
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			ft_lstadd_back_int(&stack->sa,ft_new_elem(ft_atoi_one_lint(av[i])));
			i++;
		}
	}
	if (ft_list_check_int(*stack->sa) == 1)
	{
	printf("nok check_int\n");
		ft_error(stack);
	}
	printf("ok check_int\n");
	return (0);
}
