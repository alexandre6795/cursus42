/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 07:55:52 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/14 08:55:59 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"get_next_line.h"
#include<fcntl.h>

int main(void)
{
	int fd;
	char *line;

	fd = open("test",O_RDONLY);
	while(1)
	{

		line = get_next_line(fd);
		printf("%s",line);
		if (line == NULL)
			break;
		free(line);
	}
}

