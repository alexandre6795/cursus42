/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:32:02 by aherrman          #+#    #+#             */
/*   Updated: 2022/07/17 13:30:00 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_sort_int_tab(int *tab , int size)
{
int i;
int ii;
int temp;
int iii;

i=0;
ii=0;
temp=0;
iii=0;


while(i<=size)	
{
ii=0;
while(ii<size-1)
{
	if( tab[ii]>tab[ii+1])
	{
		temp = tab[ii];
		tab[ii]=tab[ii+1];
		tab[ii+1]=temp;
	}
ii++;	
}
/*printf ( "%d" , tab[i]);*/

i++;
}
while(iii<size)
{printf( "%d", tab[iii]);
iii++;
}
}

int main ()
{
	int tab[5]={8,5,0,1,4};
	ft_sort_int_tab(tab,5);
	return(0);
}
