/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:31:51 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/15 16:58:50 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if ((!(lst)) || (!del))
		return ;
	while ((*lst))
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = next;
	}
}
