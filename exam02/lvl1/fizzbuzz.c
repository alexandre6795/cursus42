/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:12:29 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/23 10:55:10 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_putnb(i)
{
	char str[10] = "0123456789";

		if (i > 9)
			ft_putnb(i/10);
		write(1,&str[i%10],1);
}


int main()
{
	int i;

	i = 1;

	while(i<=100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			write(1,"fizzbuzz",8);
		else if ( i % 5 == 0)
			write(1,"buzz",4);
		else if(i % 3 == 0)
			write(1,"fizz",4);
		else
			ft_putnb(i);
		write(1,"\n",1);
		i++;
	}
	return(0);
}




