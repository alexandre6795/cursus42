/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:43:58 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/05 17:32:07 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char *ft_cat_path(char **bla, char *cmd)
{
    char *path;
    int i;

    path = ft_strjoin(bla ,cmd);
    return (path);
}
