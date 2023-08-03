/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:56:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/08/03 13:55:11 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_print(int i, long int time, int status)
{
	long int	j;

	if (status != -1)
	{
		j = ft_real_time();
		j = j - time;
		if (status == 1)
			printf("%ld ms %d has taken a fork\n", j, i);
		else if (status == 2)
			printf("%ld ms %d is eating\n", j, i);
		else if (status == 3)
			printf("%ld ms %d is sleeping\n", j, i);
		else if (status == 0)
			printf("%ld ms %d is thinking\n", j, i);
		else if (status == -2)
			printf("%ld ms %d is dead\n", j, i);
	}
}

void	ft_eat(t_data *philo)
{
	if (philo->status < 0 || philo->d == -1)
		return ;
	ft_print(philo->rank, philo->time, philo->status);
	philo->status = 2;
	ft_print(philo->rank, philo->time, philo->status);
	philo->lasteat = ft_real_time() - philo->start;
	ft_timer(philo->t_eat);
	philo->eatcount += 1;
	pthread_mutex_unlock(philo->fork);
	pthread_mutex_unlock(philo->steal);
	ft_sleep(philo);
}

void	ft_take_forks(t_data *philo)
{
	if (philo->status < 0 || philo->d == -1)
		return ;
	if (philo->steal == NULL)
	{
		pthread_mutex_lock(philo->printf);
		printf("%ld ms %d has taken a fork\n",
			philo->start - philo->time,
			philo->rank);
		pthread_mutex_unlock(philo->printf);
		while (philo->status > 0)
			;
		usleep(1000);
		pthread_mutex_unlock(philo->fork);
		return ;
	}
	pthread_mutex_lock(philo->fork);
	pthread_mutex_lock(philo->steal);
	pthread_mutex_lock(philo->printf);
	ft_print(philo->rank, philo->time, philo->status);
	pthread_mutex_unlock(philo->printf);
	ft_eat(philo);
}

void	ft_sleep(t_data *philo)
{
	long long int	j;

	if (philo->status < 0 || philo->d == -1)
		return ;
	j = 0;
	philo->status = 3;
	pthread_mutex_lock(philo->printf);
	ft_print(philo->rank, philo->start, philo->status);
	pthread_mutex_unlock(philo->printf);
	ft_timer(philo->t_sleep);
	j = ft_real_time();
}

void	ft_think(t_data *philo)
{
	if (philo->status < 0 || philo->d == -1)
		return ;
	philo->status = 0;
	pthread_mutex_lock(philo->printf);
	ft_print(philo->rank, philo->start, philo->status);
	pthread_mutex_unlock(philo->printf);
	philo->status = 1;
}
