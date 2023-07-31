/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:04:57 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/31 15:04:06 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "philo.h"

long int ft_real_time()
{
	struct timeval start;
	gettimeofday(&start, NULL);
		return((start.tv_sec) * 1000 + (start.tv_usec)
			/ 1000);
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
int ft_print_all(t_philo *philo)
{
	int i;

	i = 0;
	while (i < philo->nb_philo)
	{
		printf("philo[%d] rank = %d\n", i, philo->data[i]->rank);
		printf("philo[%d] status = %d\n", i, philo->data[i]->status);
		printf("fork = %p steal = %p\n", philo->data[i]->fork, philo->data[i]->steal);
		printf("philo[%d] eatcount = %ld\n", i, philo->data[i]->eatcount);
		printf("philo[%d] eatneed = %ld\n", i, philo->data[i]->eatneed);
		i++;
	}
	return(0);
}

int	main(int ac, char **av)
{


	
	 t_philo *philo;

	 philo = malloc(sizeof(t_philo));
	 //valid agruments (only number and other)
	 philo->error += ft_valid_ar(ac, av,philo);
	 //valid struct and tab inside and prepare value (micro sec to ms)
	   philo->error += ft_av_to_tab(ac, av, philo);
	   //valid value inside tab and give value on philo struct
	   philo->error += ft_valid_tab(philo);
	   // ft_print_all(philo);
	   //threard create and join
	    philo->error += ft_philo(philo);
	  ft_free(philo);
	return(0);
}
