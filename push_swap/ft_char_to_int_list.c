/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_int_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:27:35 by aherrman          #+#    #+#             */
/*   Updated: 2023/05/26 14:05:56 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void ft_char_to_int_list2(int ac,char **av, t_all *stack)
{
		int		i;
		i = 1;
		while (i < ac)
		{
			ft_lstadd_back_int(&stack->sa,ft_new_elem(ft_atoi_one_lint(av[i])));
			i++;
		}
}
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
	ft_char_to_int_list2(ac,av,stack);
	free(word);
	if (ft_list_check_int(*stack->sa) == 1)
		ft_error(stack);
	else if (ft_list_check_int(*stack->sa) == 2)
	return(0);
	return (0);
}
