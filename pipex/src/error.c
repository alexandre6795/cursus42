/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:41:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/05 14:38:45 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void ft_free(t_pipex *cmd)
{
    int i;

    i = 0;
    if (cmd)
    {
        while (cmd->lst->next)
        {
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
        free(cmd->str);
        free(cmd->path);
        free(cmd->str);
        free(cmd->f1);
        free(cmd->f2);
        free(cmd);
    }
}

void ft_error(char *str, t_pipex *cmd)
{
    if (!(str))
        ft_printf("unknow error\n");
    else
        ft_printf("%s\n", str);
    ft_free(cmd);
    exit(1);
}