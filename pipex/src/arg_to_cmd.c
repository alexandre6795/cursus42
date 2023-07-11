/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_cmd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:54:11 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/07 14:05:43 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

// void ft_test_access(t_pipex *cmd)
// {
//     t_temp temp;
//     char **str0;

//     temp.i.t1 = 0;0;

//     while (cmd->path[temp.i.t1])
//     {
//         temp.i.t0 = 1;
//         while (temp.i.t0 < cmd->len - 1)
//         {
//             if (access(cmd->path[temp.i.t1], X_OK) == 0)
//             {
//                str0= ft_split(cmd->str[temp.i.t0], ' ');
//                cmd->path[temp.i.t1] = ft_strjoin(cmd->path[temp.i.t1], str0[0]);
//                 execve(cmd->path[temp.i.t0], str0, NULL);
//             }
//          temp.i.t0++;
//         }
//         temp.i.t1++;
//     }
// }
void ft_path(char **env, t_pipex *cmd, char **av, int ac)
{
    int i;

    (void)cmd;
    i = 0;
    while (env[i])
    {
        if (ft_strncmp(env[i], "PATH", 4) == 0)
        {
            cmd->path = ft_split(env[i] + 5, ':');
        }
        i++;
    }
    i = 0;
    while (cmd->path[i])
    {
        cmd->path[i] = ft_strjoin(cmd->path[i], "/");
        i++;
    }
    cmd->f1 = malloc(sizeof(char *) * ft_strlen(av[1]));
    cmd->f2 = malloc(sizeof(char *) * ft_strlen(av[ac - 1]));
    cmd->f1 = av[1];
    cmd->f2 = av[ac - 1];
    cmd->str = malloc(sizeof(char *) * ft_strlen(av[0]) + 1);
    cmd->str = av[0];
}
int tablenbr(char **str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void ft_list(int ac, char **av, t_pipex *cmd)
{
    int i;
    char **str;
    i = 2;
    (void)ac;
    while (i < ac)
    {
        str = ft_split(av[i], ' ');
        for (int i = 0; i < tablenbr(str); i++)
            printf("str[%d] = %s\n", i, str[i]);
        ft_lstadd_back_pipex(cmd, ft_new_elem_pipex(str, str[0]));
        i++;
    }
    i = 0;
    ft_del_last(cmd);
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}

void ft_arg_to_cmd(int ac, char **av, char **env, t_pipex *cmd)
{
    ft_list(ac, av, cmd);
    ft_path(env, cmd, av, ac);
   // ft_print_list(cmd->lst);
}