/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_chain_list1.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:29:20 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/05 19:27:55 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back_int(t_stack **list, t_stack *new)
{
	t_stack	*a;

	if (!list)
		return ;
	if (!(*list))
	{
		*list = new;
		new->av = NULL;
		new->next = NULL;
		return ;
	}
	a = *list;
	while (a && a->next != NULL)
	{
		a = a->next;
	}
	if (new)
	{
		new->av = a;
		new->next = NULL;
	}
	a->next = new;
}

t_stack	*ft_new_elem(long int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->v = value;
	new->r = 1;
	new->av = (NULL);
	new->next = (NULL);
	return (new);
}

int	ft_lst_range(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
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
	if (new->next)
		new->next->av = new;
}

int	ft_lower_in_list(t_stack list)
{
	int		lower;
	t_stack	*temp;

	temp = &list;
	lower = temp->r;
	while (temp)
	{
		if (temp->r < lower)
			lower = temp->r;
		temp = temp->next;
	}
	return (lower);
}
