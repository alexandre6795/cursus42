/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:41:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/17 17:13:51 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void ft_free2(t_pipex *cmd)
{
	  free(cmd->f1->file);
	  free(cmd->f2->file);
		free(cmd->f1);
		free(cmd->f2);
		free(cmd->path);
		free(cmd->lst);
		free(cmd);
}

void	ft_free(t_pipex *cmd)
{
	int	i;

	i = 0;
	if (cmd)
	{
		while (cmd->lst)
		{
			 while(cmd->lst->arv[i])
			 {
				free(cmd->lst->arv[i]);
			 	i++;
			 }
			free(cmd->lst->arv);
			free(cmd->lst->cmd);
			cmd->lst = cmd->lst->next;
		}
		i = 0;
		 while (cmd->path[i])
		 {
		 	free(cmd->path[i]);
		 	i++;
		 }
		ft_free2(cmd);
	}
}

void	ft_error(char *str, t_pipex *cmd)
{
	if (!(str))
		ft_printf("unknow error\n");
	else
		ft_printf("%s\n", str);
	ft_free(cmd);
	exit(1);
}
void ft_fc(t_pipex *cmd)
{
	if (!cmd->lst)
	return;
	while ((cmd->lst)->prev)
		(cmd->lst) = (cmd->lst)->prev;
}