/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:26:25 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/21 08:59:11 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*list_init(t_list list)
{
	t_list	*temp;

	temp->content = NULL;
	temp->next = NULL;
	return (temp);
}

int	main(int ac, char **av)
{
	t_list	*list;

	if (ac == 1)
	list = list_init;
	
	return (0);
}
// validation pas de double