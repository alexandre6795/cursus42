/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:08:39 by aherrman          #+#    #+#             */
/*   Updated: 2022/07/19 17:59:13 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}



void	ft_recur(unsigned int unb,int i,int nb_chiffre)
{
//	printf("\n out %d %d %d \n", unb , i, nb_chiffre);
	if(nb_chiffre>0)
	{
		//if(nb_chiffre==1)
		//{
//printf("\n  unb %d\ni %d \n nb %d\n ", unb , i,nb_chiffre );
//			ft_putchar (((unb/i)%10)+48);
		
		//}
		ft_recur(unb,i*10,nb_chiffre-1);
		ft_putchar (((unb /i)%10)+48);
	}

//	else(nb_chiffre==0);

//	ft_putchar (unb%10+48);



//		else
//					ft_putchar('0');
		
		
}	

void	ft_putnbr(int nb)
{
	unsigned int nb1;
	unsigned int temp ;
	int i ;

	temp = 0;
 	i = 0;
	if (nb < 0)
	{	
		ft_putchar ('-');
		nb1 = -nb;
	}
	else
	{
		nb1 = nb;
	}
	temp= nb1;
	while( temp != 0) 
	{
		temp=temp/10;
		i++;
		//
	}
//printf("temp %d\n",temp);
	
	if( i > 0 )
	{
	ft_recur(nb1,1,i);
	}
	else
	{
		ft_putchar(48);		
	}
}

int main ()
{
	int a;
//	a = 0;
//	ft_putnbr( a );
// a = -2147483648;
//	ft_putnbr( a );
//	a = 2147483647;
//	ft_putnbr( a );
	a = 3;
	ft_putnbr( a );
	a = -3;
	ft_putnbr( a );

		return(0);
}
