/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:27:38 by aherrman          #+#    #+#             */
/*   Updated: 2023/01/17 10:19:19 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//*****lib*****//
# include <unistd.h>
# include <stdio.h>
# include <stdlig.h>
# include <sys/types.h>

# ifndef BUFFER_SIZE
#  define BUFFEER_SIZE=25;
# endif
//*****STRUCT*****//

typedef static s_list
{
	char *content
	struct s_list *next;
	t_list;

//*****proto*****//
char	*get_next_line(int fd);
#endif
