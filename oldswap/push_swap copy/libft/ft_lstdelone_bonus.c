/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:00:57 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/21 13:50:10 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if ((!lst) || (!del))
		return ;
	del(lst->content);
	free(lst);
}
