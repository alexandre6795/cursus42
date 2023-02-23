/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 09:54:02 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/23 10:11:28 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc ,char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while((argv[1][i] == ' ' || argv[1][i] == '	') && argv[1][i] != '\0')
			i++;
		while((argv[1][i] != ' ' && argv[1][i] != '	') && argv[1][i] != '\0')
		{
			write(1,&argv[1][i],1);
				i++;
		}
	}
	write(1,"\n",1);

	return(0);
}
