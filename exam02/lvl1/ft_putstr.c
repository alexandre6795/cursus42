/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:34:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/23 14:44:42 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>


void ft_putstr(char *str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
		write(1,&str[i],1);
			i++;
	}
}

int main()
{
	char *str = "coucou  2space\n0123456	tab%$^&*(^%";

	ft_putstr(str);
}
