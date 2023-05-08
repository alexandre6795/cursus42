/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:43:42 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/14 16:29:09 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int main()
{
	int a = 10;
	int *q = NULL; 

	printf("a = %p\n",a);
	printf("q = %p\n",q);

	q = &a;

	printf("a = %d\n",a);
	printf("q = %p\n",q);
}
