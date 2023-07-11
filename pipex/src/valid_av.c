/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_av.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:29:38 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/05 11:17:18 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void ft_valid_av(int ac,char **av)
{
    int fd ;
    
    fd = 0;
    if (ac < 5)
        ft_error("less 5 arguments in av",NULL);
    open(av[1],fd);
    if(fd < 0)
    ft_error("files no found",NULL);
    
}