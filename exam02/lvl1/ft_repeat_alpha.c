/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:15:30 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/23 16:35:42 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
void ft_putstr(char c,int i)
{
	while(i > 0)
	{
		write(1,&c,1);
		i--;
	}
}

int main(int argc,char** argv)
{
	int i = 0;
	if (argc==2)
	{
		while(argv[1][i]!= '\0')
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
					ft_putstr(argv[1][i],argv[1][i] - 'a' );
			 if( argv[1][i] >= 'A' &&  argv[1][i] <= 'Z')
					ft_putstr(argv[1][i],argv[1][i] - 'A' );
			write(1,&argv[1][i],1);
						i++;
		}
	}
		write(1,"\n",1);
		return(0);
	}


