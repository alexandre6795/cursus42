/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 22:11:48 by aherrman          #+#    #+#             */
/*   Updated: 2022/07/17 10:37:47 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab , int size)
{

int i;
int temp;

 i =0;	
 temp = 0;

if( size % 2 ==0 )
 size = size;
else
	size = size -1;
while(i<size/2)
{
temp = tab[i];
tab[i]=tab[size - i];
tab[size - i] = temp;
i++;
}
printf("%d %d %d %d %d %d" , tab[0],tab[1],tab[2],tab[3],tab[4],tab[5] );
}
int main()
{
	int tab[5]={4,3,2,1,0};
	ft_rev_int_tab(tab, 5);
			return(0);
}
