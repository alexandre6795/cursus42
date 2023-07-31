/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:56:12 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/31 11:22:33 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_print(int i, long int time, int status)
{
	pthread_mutex_t	mutex;

	pthread_mutex_lock(&mutex);
	printf("%ld ms %d is ", time, i);
	if (status == 1)
		printf("takes his fork and steal the other from his neighbor\n");
	else if (status == 2)
		printf("eating\n");
	else if (status == 3)
		printf("sleeping\n");
	else if (status == 0)
		printf("thinking\n");
	else if (status == -1)
		printf("mourur\n");
	pthread_mutex_unlock(&mutex);
}
void	ft_eat(t_data *philo)
{
	if (philo->status == 1)
	{
		philo->start = ft_real_time();
		ft_print(philo->rank, philo->start - philo->time, philo->status);
		philo->status = 2;
	}
	if (philo->status != 2)
		return ;
	philo->status = 2;
	ft_print(philo->rank, philo->start - philo->time, philo->status);
	ft_timer(philo->t_eat);
	philo->eatcount++;
	pthread_mutex_unlock(philo->fork);
	pthread_mutex_unlock(philo->steal);
}
void	ft_take_forks(t_data *philo)
{
	int				i;
	struct timeval	start;
	struct timeval	end;

	i = 0;
	if (philo->status != 1)
		return ;
	gettimeofday(&start, NULL);
	pthread_mutex_lock(philo->fork);
	if (philo->steal == NULL)
	{
		printf("%ld ms %d is take his fork but don't have other one",
				philo->start - philo->time,
				philo->rank);
		ft_timer(philo->t_die);
		pthread_mutex_unlock(philo->fork);
		philo->status = -1;
	}
	else
		pthread_mutex_lock(philo->steal);
	gettimeofday(&end, NULL);
	i = (end.tv_sec - start.tv_sec) * 1000 + (end.tv_usec - start.tv_usec)
		/ 1000;
	if (i > philo->t_die)
		philo->status = -1;
}
void	ft_sleep(t_data *philo)
{
	if (philo->status != 2)
		return ;
	philo->status = 3;
	philo->start = ft_real_time();
	ft_print(philo->rank, philo->start - philo->time, philo->status);
	ft_timer(philo->t_sleep);
}

void	ft_think(t_data *philo)
{
	if (philo->status == -1)
		return ;
	else
		philo->status = 0;
	philo->start = ft_real_time();
	ft_print(philo->rank, philo->start - philo->time, philo->status);
	philo->status = 1;
}