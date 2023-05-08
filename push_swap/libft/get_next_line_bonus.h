/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:11:28 by aherrman          #+#    #+#             */
/*   Updated: 2023/04/26 15:21:08 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

//*****lib*****//
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

//*****STRUCT*****//

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}					t_list;

//*****proto*****//
char				*get_next_line(int fd);
void				ft_read_and_stash(int fd, t_list **stash);
int					ft_add_to_stash(t_list **stash, char *buf, int size, int i);
void				ft_extract_line(t_list *stash, char **line);
int					ft_clean_stash(t_list **stash, int i, int j, t_list *lc[2]);
int					ft_found_newline(t_list *stash);
t_list				*ft_lst_get_last(t_list *stash);
void				ft_generate_line(char **line, t_list *stash);
int					ft_free_stash_or_len(t_list **stash, char *s, int select);
#endif
