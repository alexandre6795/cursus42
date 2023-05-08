/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:25:59 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/29 10:47:32 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init(t_stack *list)
{
	list->stack_a->content = NULL;
	list->stack_b->content = NULL;
	list->stack_a->next = NULL;
	list->stack_b->next = NULL;
}
int	main(int ac, char **av)
{
	t_stack *stack = NULL;
	ft_init(stack);
	//verification dans av que des chiffres et space
	ft_verif_av(ac, av);
	// creation de la list chaine avec split et atoi
	ft_char_to_int_list(ac, av, stack);
	// si av[i] = "1 2 3" ou si av[i]= "1" av[i+] = "2" ou si av[i]= "1" av[i+] = "2 3 4 8"
	// cas 1 split puis atoi sur un argv avec tout
	// cas 2 split sur chaque argument
	// cas 3 split sur chaque argument avec une boucle pour chaque nb dans le meme av
	// si possible verif double/
	return (0);
}