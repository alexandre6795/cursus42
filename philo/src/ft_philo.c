/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:32:07 by aherrman          #+#    #+#             */
/*   Updated: 2023/08/03 13:58:44 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*ft_philo_routine(void *arg)
{
	t_data	*philo;

	philo = (t_data *)arg;
	if (philo->rank % 2 == 1)
		usleep(250);
	else
		philo->status = 1;
	if (philo->nb_philo == 1)
		philo->status = 1;
	while (1)
	{
		if (philo->d == -1)
		{
			pthread_mutex_unlock(philo->fork);
			pthread_mutex_unlock(philo->steal);
			pthread_mutex_lock(philo->printf);
			pthread_mutex_unlock(philo->printf);
			break ;
		}
		if (philo->status == 1 && philo->d == 0)
			ft_take_forks(philo);
		else if (philo->d == 0)
			ft_think(philo);
	}
	return (0);
}

int	ft_next_philo(t_philo *philo, pthread_t *th)
{
	int	i;

	i = 0;
	if (i == 0)
		pthread_mutex_destroy(philo->data[0]->printf);
	while (i < philo->nb_philo)
	{
		if (philo->nb_philo > 1)
			if (pthread_join(th[i], NULL) != 0)
				return (ft_error("thread join failed"));
		if (pthread_mutex_destroy(philo->data[i]->fork) != 0)
			return (ft_error("mutex destroy failed"));
		i++;
	}
	return (0);
}

int	ft_init_mutex(t_philo *philo)
{
	int	i;

	i = 0;
	philo->data[0]->start = ft_real_time();
	while (i < philo->nb_philo)
	{
		if (philo->data[i]->rank % 2 == 0)
			philo->data[i]->status = 1;
		else
			philo->data[i]->status = 0;
		philo->data[i]->start = philo->data[0]->start;
		if (pthread_mutex_init(philo->data[i]->fork, NULL) != 0)
			return (ft_error("mutex init failed"));
		if (philo->nb_philo > 1)
			if (pthread_mutex_init(philo->data[i]->steal, NULL) != 0)
				return (ft_error("mutex init failed"));
		i++;
	}
	return (0);
}

int	ft_creat_pthread(t_philo *philo, pthread_t *th)
{
	int	i;

	i = 0;
	if (ft_init_mutex(philo) != 0)
		return (1);
	while (i < philo->nb_philo)
	{
		if (pthread_create(&th[i], NULL, ft_philo_routine,
				(void *)philo->data[i]) != 0)
			return (ft_error("thread create failed"));
		i++;
	}
	return (0);
}

int	ft_philo(t_philo *philo)
{
	pthread_t	mourur;
	pthread_t	*th;

	th = malloc(sizeof(pthread_t) * philo->nb_philo);
	if (philo->error != 0)
		return (1);
	mourur = ft_mourur(philo);
	if (mourur == NULL)
		return (ft_error("thread create failed"));
	if (ft_creat_pthread(philo, th) != 0)
		return (1);
	if (pthread_join(mourur, NULL) == 0 || philo->nb_philo == 1)
	{
		usleep(100);
		if (ft_next_philo(philo, th) != 0)
			return (1);
	}
	else
		return (ft_error("thread join failed"));
	return (0);
}
