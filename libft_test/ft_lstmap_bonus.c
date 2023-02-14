/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:52:59 by aherrman          #+#    #+#             */
/*   Updated: 2023/01/14 13:13:36 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
#include <stdio.h>

void *ft_multi(void *i) 
{
	int *tmp;

	tmp = (int *)i;
	*tmp *= 2;
	return (tmp);
}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;

	if ((!lst) || (!f) || (!del))
		return (NULL);
temp = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&temp, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (temp);
}

int main()
{
	t_list *list;
	t_list *new_elem;
	int i ;
	int *elem;
	int *tmp;
	int test;
	
	test = 25;
	i = 0;
	elem = malloc(sizeof(int) * 10);
	elem[0] = 0;
	elem[1] = 10;
	elem[2] = 20;
	elem[3] = 30;
	elem[4] = 40;
	elem[5] = 100;
	elem[6] = 500;
	elem[7] = 999;
	elem[8] = 42;
	

	list = NULL;
	while (i < 9)
	{
		new_elem = ft_lstnew(&elem[i]);
		ft_lstadd_back(&list,new_elem);
		i++;
	}
	new_elem = list;
	list->next->content = &test;
	while (list)
	{
		tmp = (int *)list->content;
		printf("%d\n", *tmp);
		list = list->next;
	}
	list = ft_lstmap(new_elem,(&ft_multi),(&free));
	printf("------------------\n");
	while (list)
	{
		tmp = (int *)list->content;
		printf("%d\n",*tmp);
		list = list->next;
	}
}
