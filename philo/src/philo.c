/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:04:57 by aherrman          #+#    #+#             */
/*   Updated: 2023/08/03 10:15:07 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_mutex(t_philo *philo)
{
	pthread_mutex_t	*mutex;
	int				i;

	i = 0;
	mutex = malloc(sizeof(pthread_mutex_t));
	while (i < philo->nb_philo)
	{
		philo->data[i]->printf = mutex;
		i++;
	}
	if (pthread_mutex_init(mutex, NULL) != 0)
		return (ft_error("mutex init failed"));
	return (0);
}

long int	ft_real_time(void)
{
	long int		i;
	struct timeval	start;

	i = 0;
	gettimeofday(&start, NULL);
	i = (start.tv_sec) * 1000 + (start.tv_usec) / 1000;
	return (i);
}

void	ft_init_temp(t_temp *temp)
{
	temp->i.t0 = 0;
	temp->i.t1 = 0;
	temp->i.t2 = 0;
	temp->i.t3 = 0;
	temp->i.t4 = 0;
	temp->i.t5 = 0;
	temp->s.s0 = NULL;
	temp->s.s1 = NULL;
	temp->s.s2 = NULL;
	temp->s.s3 = NULL;
}

int	ft_print_all(t_philo *philo)
{
	int	i;

	i = 0;
	while (i < philo->nb_philo)
	{
		printf("philo[%d] rank = %d\n", i, philo->data[i]->rank);
		printf("%p\n", philo->data[i]->printf);
		printf("philo[%d] status = %d\n", i, philo->data[i]->status);
		printf("fork = %p steal = %p\n", philo->data[i]->fork,
			philo->data[i]->steal);
		printf("philo[%d] eatcount = %ld\n", i, philo->data[i]->eatcount);
		printf("philo[%d] eatneed = %ld\n", i, philo->data[i]->eatneed);
		printf("\n");
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_philo	*philo;

	philo = malloc(sizeof(t_philo));
	philo->error += ft_valid_ar(ac, av, philo);
	philo->error += ft_av_to_tab(ac, av, philo);
	philo->error += ft_valid_tab(philo);
	philo->error += ft_philo(philo);
	ft_free(philo);
	return (0);
}
