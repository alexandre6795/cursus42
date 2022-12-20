/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:41:47 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/22 15:38:05 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if ((!lst) || (!f))
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
