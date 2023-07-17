/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:41:04 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/17 16:53:09 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	ft_print_list(t_lst *lst)
{
	int		i;
	int		j;
	t_lst	*list;

	list = lst;
	i = ft_lst_range(list);
	printf("range = %d\n", i);
	while (list && i > 0)
	{
		printf("cmd = %s\n   [", list->cmd);
		j = 0;
		while (list->arv[j])
		{
			printf("arv[%d] = %s ", j, list->arv[j]);
			j++;
		}
		printf("]\n");
		i--;
		list = list->next;
	}
}

int	ft_lst_range(t_lst *lst)
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
