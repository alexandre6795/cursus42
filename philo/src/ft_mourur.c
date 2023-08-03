/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mourur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:21:00 by aherrman          #+#    #+#             */
/*   Updated: 2023/08/03 13:54:59 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_death(t_philo *philo)
{
	int				i;
	long long int	j;

	i = 0;
	j = ft_real_time();
	j = j - philo->data[i]->start;
	while (philo->nb_philo > i)
	{
		if (philo->data[i]->lasteat + philo->data[i]->t_die < j
			&& philo->data[i]->status != 2)
		{
			pthread_mutex_lock(philo->data[i]->printf);
			philo->data[i]->status = -2;
			ft_print(philo->data[i]->rank, philo->data[i]->time,
				philo->data[i]->status);
			pthread_mutex_unlock(philo->data[i]->printf);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_valid_food(t_philo *philo)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (philo->nb_philo > i)
	{
		if (philo->data[i]->eatcount >= philo->data[i]->eatneed)
		{
			j++;
		}
		i++;
		if (j == philo->nb_philo)
		{
			return (1);
		}
	}
	return (0);
}

void	*ft_mourur_routine(void *arg)
{
	t_philo	*philo;
	int		i;

	philo = (t_philo *)arg;
	i = 0;
	while (ft_death(philo) == 0 && (ft_valid_food(philo) == 0
			|| philo->data[0]->eatneed == -1))
		usleep(100);
	while (i < philo->nb_philo)
	{
		philo->data[i]->status = -1;
		philo->data[i]->d = -1;
		i++;
	}
	return (0);
}

pthread_t	ft_mourur(t_philo *philo)
{
	pthread_t	mourur;

	if (pthread_create(&mourur, NULL, ft_mourur_routine, (void *)philo) != 0)
		return (NULL);
	return (mourur);
}
