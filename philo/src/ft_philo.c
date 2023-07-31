/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:32:07 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/31 14:56:19 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*ft_philo_routine(void *arg)
{
	t_data	*philo;

	philo = (t_data *)arg;
	  while (1)
	 {
		if(philo->status == -1 ||philo->eatcount == philo->eatneed)
		break;
			philo->start = ft_real_time();
	  	ft_take_forks(philo);
	  		   ft_eat(philo);
	  		   ft_sleep(philo);
	  		   ft_think(philo);
	   }
	return (0);
}
int ft_next_philo(t_philo* philo)
{
	int i;
	i=0;
while (i < philo->nb_philo)
	{
		if (pthread_join(th[i], NULL) != 0)
			return (ft_error("thread join failed"));
		if (pthread_mutex_destroy(philo->data[i]->fork) != 0)
			return (ft_error("mutex destroy failed"));
		i++;
	}
}
int	ft_philo(t_philo *philo)
{
	int			i;
	pthread_t	th[philo->nb_philo];

	if (philo->error != 0)
		return (1);
	i = 0;
	while (i < philo->nb_philo)
	{
		if (pthread_mutex_init(philo->data[i]->fork, NULL) != 0)
			return (ft_error("mutex init failed"));
		if (pthread_create(&th[i], NULL, ft_philo_routine,
				(void *)philo->data[i]) != 0)
			return (ft_error("thread create failed"));
		i++;
	}
	while (i < philo->nb_philo)
	{
		if (pthread_join(th[i], NULL) != 0)
			return (ft_error("thread join failed"));
		if (pthread_mutex_destroy(philo->data[i]->fork) != 0)
			return (ft_error("mutex destroy failed"));
		i++;
	}
	return (0);
}
