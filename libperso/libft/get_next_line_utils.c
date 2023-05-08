/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:28:03 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/15 13:13:41 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"get_next_line.h"

int	ft_found_newline(t_list *stash)
{
	int		i;
	t_list	*temp;

	if (stash == NULL)
		return (0);
	temp = ft_lst_get_last(stash);
	i = 0;
	while (temp->content[i])
	{
		if (temp->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

t_list	*ft_lst_get_last(t_list *stash)
{
	t_list	*temp;

	temp = stash;
	while (temp && temp->next)
		temp = temp->next;
	return (temp);
}

void	ft_generate_line(char **line, t_list *stash)
{
	int	i;
	int	len;

	len = 0;
	while (stash)
	{
		i = 0;
		while (stash->content[i])
		{
			if (stash->content[i] == '\n')
			{
				len++;
				break ;
			}
			i++;
			len++;
		}
		stash = stash->next;
	}
	*line = malloc(sizeof(char) * (len + 1));
}

int	ft_free_stash_or_len(t_list **stash, char *s, int select)
{
	t_list	*temp;
	t_list	*next;
	int		i;

	i = 0;
	if (select == 0)
	{
		if (stash)
		{
			temp = *stash;
			while (temp)
			{
				free(temp->content);
				next = temp->next;
				free(temp);
				temp = next;
			}
			*stash = NULL;
		}
	}
	else if (select == 1)
		while (s[i])
			i++;
	return (i);
}
