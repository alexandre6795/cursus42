/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_av_to_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:13:28 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/31 14:53:11 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_init_real_value(t_philo *philo)
{
	int	i;

	i = 0;
	while (i < philo->nb_philo)
	{
		philo->data[i]->fork = malloc(sizeof(pthread_mutex_t));
		if (philo->data[i]->fork == NULL)
			return (ft_error("Malloc error"));
		ft_l_init(philo, i);
		i++;
	}
	i = 0;
	while (i < philo->nb_philo)
	{
		ft_steal_init(philo, i);
		i++;
	}
	return (0);
}

int	ft_valid_ar(int ac, char **av, t_philo *philo)
{
	int	i;

	i = 1;
	philo->imax = 2147483647;
	philo->imin = -2147483648;
	philo->nb_philo = 0;
	philo->data = NULL;
	philo->error = 0;
	if (ac != 6 && ac != 5)
		return (ft_error("Invalid number of argument"));
	while (av[i])
	{
		if (ft_is_valid(av[i]) == 1)
			return (ft_error("Invalid argument"));
		i++;
	}
	return (0);
}
int	ft_add_tab(t_philo *philo, char **av, int i, int ac)
{
	if (philo->error > 0)
		return (1);
	if (philo->data[i] == NULL)
	{
		ft_error("Malloc error");
		return (1);
	}
	philo->data[i]->rank = (i + 1);
	philo->data[i]->t_die = ft_atoi(av[2]);
	philo->data[i]->t_eat = ft_atoi(av[3]);
	philo->data[i]->t_sleep = ft_atoi(av[4]);
	if (ac == 6)
		philo->data[i]->eatneed = ft_atoi(av[5]);
	else
		philo->data[i]->eatneed = -1;
	return (0);
}
int	ft_valid_tab(t_philo *philo)
{
	int	i;
	int	j;

	if (philo->error != 0)
		return (1);
	i = 0;
	j = philo->nb_philo;
	while (i < j)
	{
		if (ft_for_line(philo, i) != 0)
			return (1);
		i++;
	}
	if (ft_init_real_value(philo) != 0)
		return (1);
	return (0);
}

int	ft_av_to_tab(int ac, char **av, t_philo *philo)
{
	int			i;
	long int	j;

	if (philo->error > 0)
		return (1);
	j = ft_atoi(av[1]);
	if (j < 0)
		return (ft_error("Invalid number of philosopher"));
	i = 0;
	philo->nb_philo = j;
	if (j <= 0 || j > 2147483647 || j < -2147483648)
		return (ft_error("Invalid number of philosopher"));
	philo->data = malloc(sizeof(t_data *) * j);
	if (philo->data == NULL)
		return (ft_error("Malloc error"));
	while (i < j)
	{
		philo->data[i] = ft_calloc(1, sizeof(t_data));
		if (philo->data[i] == NULL)
			return (ft_error("Malloc error"));
		if (ft_add_tab(philo, av, i, ac) == 1)
			return (1);
		i++;
	}
	return (0);
}
