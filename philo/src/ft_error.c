/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:15:04 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/26 16:38:27 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void ft_free(t_philo *philo)
{
    int i ;
    i = 0;
    if(philo!=NULL)
    {
    if(philo->data!=NULL)
    {
    while (i < philo->nb_philo)
    {
        free(philo->data[i]->fork);
        free(philo->data[i]);
        i++;
    }
    free(philo->data);
    }
    free(philo);
}
}
int ft_error(char *s)
{
    if(s == NULL)
    ft_putstr_fd("Unknow error\n",2);
    else
    ft_putstr_fd(s,2);
    write(2,"\n",1);
    return(1);
}