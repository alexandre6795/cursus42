/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:50:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/15 10:24:07 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	a = *lst;
	while (a->next != NULL)
		a = a->next;
	a->next = new;
}
