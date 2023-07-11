/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:56:33 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/07 11:21:44 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void ft_lstadd_back_pipex(t_pipex *list, t_lst *new)
{
	t_lst *a;
	if (!(list->lst))
	{
		list->lst = new;
		new->next = NULL;
		return;
	}
	a = list->lst;
	while (a && a->next != NULL)
	{
		a = a->next;
	}
	if (new)
	{
		new->next = NULL;
	}
	a->next = new;
}

t_lst *ft_new_elem_pipex(char **arv, char *cmd)
{
	t_lst *new;

	new = (t_lst *)malloc(sizeof(t_lst));
	if (new == NULL)
		return (NULL);
	// printf("cmd = %s\n",cmd);
	new->arv = ft_d(arv);
	new->cmd = cmd;
	new->next = (NULL);
	return (new);
}
char **ft_d(char **s)
{
	int i;
	int j;
	char **str;

	i = 0;
	j = 1;
	while (s[i] != NULL)
		i++;
	str = malloc(sizeof(char *) * i);
	i = 0;
	while (s[j])
	{
		str[i] = ft_strdup(s[j]);
		i++;
		j++;
	}
	return (str);
}

void ft_del_last(t_pipex *cmd)
{
	t_lst *a;
	t_lst *b;

	a = cmd->lst;
	b = cmd->lst;
	while (a && a->next != NULL)
	{
		b = a;
		a = a->next;
	}
	if (a == cmd->lst)
	{
		cmd->lst = NULL;
	}
	else
	{
		b->next = NULL;
	}
	free(a);
}