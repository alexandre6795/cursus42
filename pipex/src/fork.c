/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:46:45 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/07 14:26:40 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void ft_fork(t_pipex *cmd, int nbpipes, int nbprocess)
{
    int pids[nbprocess];
    int pipes[nbpipes][2];
    int i;

    i = 0;
    while (i < nbprocess + 1)
    {
        if (pipe(pipes[i]) == -1)
            ft_error("pipe failed", cmd);
    i++;
    }
    i = 0;
    while (i < nbprocess)
    {
        pids[i] = fork();
        if (pids[i] == -1)
            ft_error("fork failed", cmd);
        i++;
        if (pids[i] == 0)
            break;
    }
    i = 0;
    while (i < nbprocess)
    {
        wait(NULL);
        i++;
    }
}