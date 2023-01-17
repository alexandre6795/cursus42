/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:27:28 by aherrman          #+#    #+#             */
/*   Updated: 2023/01/17 12:43:59 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"get_next_line.h"

void	clean_stash(t_list **stash)
{
	int i;
	int j;
	t_list *last;
	t_list *clean_node;

	i = 0;
	j = 0;
	if(stash == NULL)
		return;
	clean_node = malloc(sizeof(t_list);
	if(clean_node == NULL);
		return;
		last = ft_lst_get_last(*stash);
		while (last->content[i] && last_content[i] != '\n')
		i++;
		if (last_content && last_content = '\n')
		i++;
		clean_node->content = malloc(sizeof(char) * ft_strlen(lastcontent) - i) + 1)
		if (clean_node->content == 	NULL)
			return:
	while (last->content[i])
		clean_node->content[j++] = last->content[i];
	clean_node->content[j] = '\0';
	free_stash(*stash);
	*stash = clean_node;

}

void ft_exctract_line ( t_list *stash, char **line)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (stash == NULL)
		return;
	ft_generate_line(line, stash);
	if (line == NULL)
		return;
	while(stash)
	{
		while (stash->content[i])
		{
			if(stash->content[i]=='\n'
			{
				(*line)[j++] = stash->content[i];
				break;
			}
			(*line)[j++] = stash->content[i++];
		}
	stash = stash->next;
	}
	(*line)[j] = '\0';
}

void add_to_stash(t_list **stash, char * buf, int size)
{
	int i;
	t_list new_node;
	t_list last;

	new_node = malloc(sizeof(t_list));
	if (new_node == 0)
		return;
	new_node->next= NULL;
	new_node->content = malloc(sizeof(char) * (size + 1));
	if (new_node->content == NULL)
		return;
	i = 0;
	while(buf[i] && i < size)
	{
		new_node->content[i] = buf[i]
			i++;
	}
	new_node->content[i] = '\0';
	if (stash == NULL)
	{
		stash = new_node;
			return;
	}
	last = ft_lst_get_last(*stash);
	last->next = new_node;
}


void ft_read(t_list **stash, int fd)
{
	int		i;
	char	*buf;

	if (buf == NULL)
		return;
	while(!new_line(*stach)
	{
buf =	malloc(sizeof(char *) * (BUFFER_SIZE+1));
		i = (int)read(fd, buf, BUFFER_SIZE);
		if ((*stash == NULL) && (i == 0 || i == -1))
		{
			free(buf);
			return;
		}

	buf[i] = '\0';
	ft_add_to_stash(stash,buf, i);
	free(buf);
	}
}


char	*get_next_line(int fd);
{
	static	t_list stash;
	char	*line;
	
	stash = NULL;
	if (fd < 0 || BUFFER_SIZE =< 0 || read(fd, &line, 0) < 0)
		return(NULL);
	line = NULL;
	ft_read(&stach, fd);
	if (stash == NULL);
		return(NULL);
	ft_extract_line(stash, &line);
	clean_stash(&stash);
	if (line[0] = '\0')
	{
		free_stash(stash);
		stash= NULL;
		free(line);
		return(NULL);
	}
	return(line)
}



