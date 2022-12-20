/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combntest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:31:13 by aherrman          #+#    #+#             */
/*   Updated: 2022/07/19 18:38:25 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}	
void ft_print_nb(int i, int tab[10], int max)
{
	int ii;

	ii = 0;

	while(ii <= i)
	{
	ft_putchar(tab[ii] + 48);
	ii++;
	}

	if ( tab[0]!=max || tab[9-max]!=9)
	{	
		ft_putchar(',');
	ft_putchar(32);
	}
//	if (( tab[0] < max) ||  ( tab[9-max]< 9 ))
//
//	ft_putchar(',');
//	ft_putchar(32);
	
}

void ft_recur(int n, int tab[10], int i)
{
	int max;

	max=0;

	max =10-n;
	if (n > 0)
	{
		while(tab[i]<=max)
		{

			tab[i+1]=tab[i]+1;

			if( n==1 )
			{
			ft_print_nb(i ,tab,max-i);
			} 
		ft_recur(n-1, tab,i+1 );
		tab[i]=tab[i]+1;
			
		}
	}
}
void ft_print_combn(int n)
{ 
	int tab[10];
		tab[0] = 0;
	
		ft_recur(n, tab, 0);
}
int main(void)
{

ft_print_combn(6);
	return(0);
}
