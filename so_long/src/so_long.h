/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:22:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/07 16:43:04 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

//***** LIB *****//
# include "libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include "../.mlx42/include/MLX42/MLX42.h"

//*****STRUCT*****//
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
void				ft_init_temp(t_temp *temp);
typedef struct s_pos
{
	int x;
	int y;
}					t_pos;
typedef struct s_game
{
	char **map;
	int C;
	int P;
	int E;
	int Q;
	int GC;
	t_pos *pos;
	t_pos *msize;
}					t_game;
//ft_valid_av.c//
void ft_valid_av(int ac, char **av);
void ft_n1l(int i, t_game *game);
//ft_error.c//
void ft_error(char *err,t_game *game);
void ft_free(t_game *game);
//ft_valid_map.c//
void ft_valid_fl(t_game *game,int len);
void ft_valid_other(t_game *game,int fd);
int ft_size(int fd);
//ft_so_long_utils.c//
void ft_add_heros_pos(t_game *game,int x, int y);
//ft_flood_fill//
void	ft_flood_fill(t_game *game);


// /!\ file for make test /!\ ///
//ft_print_map.c//
 void 	ft_print_map(t_game *game);
 //ft_print_char_tab.c//
 void ft_print_char_tab(char **tab);

#endif
