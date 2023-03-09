/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:11:20 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/06 12:30:07 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int ft_putstr(char * s, int ac)
{
	int i = 0;
		while(s[i])
		{
			write(1,&s[i],1);
			i++;
		}
		if (ac  > 6)
		{

			write(2,"fail",4);
			exit(1);
		}
	write(1,"\n",1);
return(0);
}

int main (int ac , char **av)
{
	int	i = 1 ;
	while ( ac > i && av[i])
	{
		ft_putstr(av[i], ac);
				i++;
	}
	return(0);
}
