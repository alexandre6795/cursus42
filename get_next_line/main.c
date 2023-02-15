/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 07:55:52 by aherrman          #+#    #+#             */
/*   Updated: 2023/02/15 12:15:51 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"get_next_line.h"
#include<fcntl.h>

int main(void)
{
	int fd[10];


	fd[0] = open("test0",O_RDONLY);
	fd[1] = open("test1",O_RDONLY);
	fd[2] = open("test2",O_RDONLY);
	fd[3] = open("test3",O_RDONLY);
	fd[4] = open("test4",O_RDONLY);
	
	char *line0 = get_next_line(fd[0]);
	char *line1 = get_next_line(fd[1]);
	char *line2 = get_next_line(fd[2]);
	char *line3 = get_next_line(fd[3]);
	char *line4 = get_next_line(fd[4]);
	while(line0 || line1 || line2 || line3 || line4)
	{
		if (line0)
			printf("0 = %s",line0);
		if (line1)
			printf("1 = %s",line1);
		if (line2)
			printf("2 = %s",line2);
		if (line3)
			printf("3 = %s",line3);
		if (line4)
			printf("4 = %s",line4);
		free(line0);
		free(line1);
		free(line2);
		free(line3);
		free(line4);
		line1 = get_next_line(fd[1]);
		line0 = get_next_line(fd[0]);
		line2 = get_next_line(fd[2]);
		line3 = get_next_line(fd[3]);
		line4 = get_next_line(fd[4]);
	}
}

