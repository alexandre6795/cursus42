/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:51:36 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/23 15:06:37 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return(i);
}

int main()
{
	char *str = "bhuegru  ubugrhuo	dgr342543645luhger$%^*^&^%(^(hilursthlshrt";

	int i = 0;
	i = ft_strlen(str);
	printf("%d\n",i);
	i = strlen(str);
	printf("%d\n",i);
	return(0);
}

