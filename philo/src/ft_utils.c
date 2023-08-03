/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:47:36 by aherrman          #+#    #+#             */
/*   Updated: 2023/08/03 10:09:32 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_l_init(t_philo *philo, int i)
{
	philo->data[i]->eatcount = 0;
	philo->data[i]->lasteat = 0;
	philo->data[i]->nb_philo = 0;
	philo->data[i]->d = 0;
}

void	ft_steal_init(t_philo *philo, int i)
{
	if (philo->nb_philo == 1)
		philo->data[i]->steal = NULL;
	else
	{
		if (i == 0)
		{
			philo->data[i]->steal = philo->data[philo->nb_philo - 1]->fork;
		}
		else
		{
			philo->data[i]->steal = philo->data[i - 1]->fork;
		}
	}
	philo->data[i]->time = ft_real_time();
}

int	ft_is_valid(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_for_line(t_philo *philo, int i)
{
	if (philo->data[i]->t_die <= 0 || philo->data[i]->t_die > philo->imax
		|| philo->data[i]->t_die < philo->imin)
		return (ft_error("Invalid time to die"));
	if (philo->data[i]->t_eat <= 0 || philo->data[i]->t_eat > philo->imax
		|| philo->data[i]->t_eat < philo->imin)
		return (ft_error("Invalid time to eat"));
	if (philo->data[i]->t_sleep <= 0 || philo->data[i]->t_sleep > philo->imax
		|| philo->data[i]->t_sleep < philo->imin)
		return (ft_error("Invalid time to sleep"));
	if (philo->data[i]->eatcount < 0 || philo->data[i]->eatcount > philo->imax
		|| philo->data[i]->eatcount < philo->imin)
		return (ft_error("Invalid number of time each philosopher must eat"));
	return (0);
}

void	ft_timer(int time_ms)
{
	long long	start_time;
	long long	actual_time;

	start_time = ft_real_time();
	actual_time = 0;
	while (actual_time - start_time < time_ms)
	{
		usleep(250);
		actual_time = ft_real_time();
	}
}
