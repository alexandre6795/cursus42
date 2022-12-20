/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_apha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:13:32 by aherrman          #+#    #+#             */
/*   Updated: 2022/07/21 12:13:47 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_str_is_alpha(char *str)
{
	 int i;

	i = 0;
	while (str[i])
	{
	if(str[i] < 'A' || str[i] > 'Z' && str[i] < 'a' || str[i] > 'z')
	return(0);
	i++;
	}
		return(1);
}
int main()
{
	char test[]="1";
printf("%d",ft_str_is_alpha(test));
}
