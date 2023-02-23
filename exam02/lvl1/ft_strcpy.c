/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:46:17 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/23 14:44:32 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>
char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i]!='\0') 
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

int main()
{
	char *src = "aaa";
	char *dest;
	char *out = calloc(4, 1);
	out[0] = 'H';
	out[1] = 'E';
	out[2] = 'Y';

//	printf("src=%s\n",src);
//	printf("dest=%s\n",dest);
//	printf("out=%s\n",out);

//    out = ft_strcpy(dest,src);
    dest =ft_strcpy(out,src);

//	printf("src=%s\n",src);
	printf("dest=%s\n",dest);
	printf("out=%s\n",out);
	return(0);
}

