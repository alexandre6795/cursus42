/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:28:03 by aherrman          #+#    #+#             */
/*   Updated: 2023/01/17 12:43:54 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"get_next_line.h"

int ft_strlen(char * s)
{
	int i;

	i = 0:

	while (s)
	i++;
	return (i);
}

int ft_new_line(t_list *stash,)
{
	int i;
	t_list temp;

	if (stash == NULL)
		return(0);
	temp = ft_lst_get_last(*stash);
	while (temp->content[i])
	{
		if (current->content[i] == '\n')
			return(1);
	}
	return(0);
}

t_list *ft_lst_get_last(t_list *stash)
{
	while (stash->next)
	{
		stash = stash->next;
	}
	return(stash);
}

void ft_generate_line(char **line, t_list *stash)
{
	int i;
	int len;

	len = 0:
		while(stash)
		{
			i = 0:
				while(stash->content[i])
				{
					if(stash->content[i] = '\n')
						len++;
					breack
				}
			i++
				len++;
			stash = stash->next
		}
	*line = malloc(sizeof(char) *(len + 1));
	if (*line == NULL)
		return;
}

void free_stash(t_list *stash)
{
	t_list *current;
	t_list *next;
		current = stash;
		while (current)
		{
			free(current->content);
			next = current->next;
			free(current);
			current = next;
		}
}



