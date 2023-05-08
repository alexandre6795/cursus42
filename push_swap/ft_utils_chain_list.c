/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_chain_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:29:20 by aherrman          #+#    #+#             */
/*   Updated: 2023/04/27 15:23:53 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back_int(t_stack **list, t_stack *new)
{
	t_stack	*a;

	if (!(*list))
	{
		*list = new;
		return ;
	}
	a = *list;
	while (a->next != NULL)
		a = a->next;
	a->next = new;
}

t_stack	*ft_new_elem(int value)
{
	t_stack	*new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
		printf("value = %d\n",value);
	new->v = value;
	new->next = (NULL);
	return (new);
}

int	ft_lst_range(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_lst_add_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
