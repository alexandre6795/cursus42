/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:22:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/20 09:37:11 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

//***** LIB *****//
# include "libft/libft.h"
# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

//*****STRUcT*****//
typedef struct s_lint
{
	long int		t0;
	long int		t1;
	long int		t2;
	long int		t3;
	long int		t4;
	long int		t5;
}					t_lint;

typedef struct s_string
{
	char			*s0;
	char			*s1;
	char			*s2;
	char			*s3;
}					t_string;

typedef struct s_temp
{
	t_lint			i;
	t_string		s;

}					t_temp;
typedef struct s_file
{
	int				fd;
	char			*file;
}					t_file;

typedef struct s_lst
{
	char			*cmd;
	char			**arv;
	struct s_lst	*next;
	struct s_lst	*prev;
}					t_lst;

void				ft_init_temp(t_temp *temp);
typedef struct s_pipex
{
	char			**path;
	t_file			*f1;
	t_file			*f2;
	int				nbr_p;
	int				len;
	t_lst			*lst;

}					t_pipex;
void				ft_init_t_struc(t_pipex *a);
//***** PROTOTYPE *****//
void				ft_valid_av(int ac, char **av, t_pipex *cmd);
void				ft_arg_to_cmd(int ac, char **av, char **env, t_pipex *cmd);
//***** ERROR *****//
void				ft_error(char *str, t_pipex *cmd);
void				ft_free(t_pipex *cmd);
void				ft_free_list(t_lst *lst);
void				ft_fc(t_pipex *cmd);
void				ft_free_access(t_lst *a, t_pipex *cmd);
//***** UTILS_LIST *****//
void				ft_lstadd_back_pipex(t_pipex *list, t_lst *new);
t_lst				*ft_new_elem_pipex(char **arv, char *cmd);
char				**ft_d(char **s, char *cmd);
void				ft_del_last(t_pipex *cmd);
int					ft_lst_len(t_pipex *cmd);
//***** UTILS *****//
void				ft_create_pipe(int nbpipe, int **pipefd, t_pipex *cmd);
void				redir_input(int input_fd, t_pipex *cmd);
void				redir_output(int input_fd, t_pipex *cmd);
void				close_pipes(int nbpipes, int **pipefd, int i);
void				close_mpipes(int nbpipes, int **pipefd, int nbprocess);
//***** UTILS2 *****//
int					ft_child_process(t_pipex *cmd, int **pipefd, int i);
void				ft_parent_process(t_pipex *cmd, int nbpipes, int **pipefd,
						int nbprocess);
//***** FORK *****//
void				ft_fork(t_pipex *cmd, int process, int nbpipe);
//***** TEST *****//
void				ft_print_list(t_lst *list);
int					ft_lst_range(t_lst *lst);
void				ft_free_list2(t_lst *lst);
void				ft_f(t_pipex *cmd);
void				ft_op(t_pipex *cmd);
#endif