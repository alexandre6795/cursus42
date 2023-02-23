/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:06:48 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/23 15:15:11 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void ft_swap(int *a, int *b)
{
	int c = 0;
	c = *a;
	*a  = *b;
	*b = c;
}

int main()
{
	int a = 15;
	int b = 70;

	printf("a=%i\n",a);
	printf("b=%i\n",b);
	ft_swap(&a,&b);
	printf("a=%i\n",a);
	printf("b=%i\n",b);
	return(0);
}
