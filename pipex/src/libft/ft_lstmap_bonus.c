/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:52:59 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/22 09:38:38 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

t_list	*ft_lstclear2(t_list *lst, void (*del)(void *))
{
	ft_lstclear(&lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_elem;
	void	*content;

	if ((!lst) || (!f) || (!del))
		return (NULL);
	temp = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (content == NULL)
			return (ft_lstclear2(temp, del));
		new_elem = ft_lstnew(content);
		if (!new_elem)
		{
			del(content);
			return (ft_lstclear2(temp, del));
		}
		ft_lstadd_back(&temp, new_elem);
		lst = lst->next;
	}
	return (temp);
}
