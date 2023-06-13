/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:22:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/13 16:33:04 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define WIDTH 512
# define HEIGHT 512
//***** LIB *****//
# include "../.mlx42/include/MLX42/MLX42.h"
# include "libft/libft.h"
# include <fcntl.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

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
	int				x;
	int				y;
}					t_pos;
typedef struct s_game
{
	char			**map;
	int				C;
	int				P;
	int				E;
	int				Q;
	int				GC;
	int				step;
	int				collected;
	t_pos			*pos;
	t_pos			*msize;
}					t_game;
typedef struct s_mlx
{
	mlx_image_t		*QQ;
	mlx_image_t		*CC;
	mlx_image_t		*CC2;
	mlx_image_t		*CC3;
	mlx_image_t		*PP;
	mlx_image_t		*PP2;
	mlx_image_t		*EE;
	mlx_image_t		*EE2;
	mlx_image_t		*WALL;
	mlx_image_t		*WALL2;
	mlx_image_t		*FLOOR;
	mlx_image_t		*FLOOR2;
	mlx_texture_t	*t_QQ;
	mlx_texture_t	*t_CC;
	mlx_texture_t	*t_CC2;
	mlx_texture_t	*t_CC3;
	mlx_texture_t	*t_PP;
	mlx_texture_t	*t_PP2;
	mlx_texture_t	*t_EE;
	mlx_texture_t	*t_EE2;
	mlx_texture_t	*t_WALL;
	mlx_texture_t	*t_WALL2;
	mlx_texture_t	*t_FLOOR;
	mlx_texture_t	*t_FLOOR2;

}					t_mlx;
//ft_valid_av.c//
void				ft_valid_av(int ac, char **av);
void				ft_n1l(int i, t_game *game);
//ft_error.c//
void				ft_error(char *err, t_game *game);
void				ft_free(t_game *game);
void				ft_init_pic(t_mlx *pic);
void				ft_freep(t_mlx *pic);
//ft_valid_map.c//
void				ft_valid_fl(t_game *game, int len);
void				ft_valid_other(t_game *game, int fd);
int					ft_size(int fd);
//ft_so_long_utils.c//
void				ft_add_heros_pos(t_game *game, int x, int y);
//ft_flood_fill//
void				ft_flood_fill(t_game *game);

//ft_utils_mlx.c//
void				ft_hook(void *param, t_game *game);
void				ft_create_word(t_mlx *pic, t_game *game, mlx_t *mlx);
//ft_utils2_mlx.c//
void				ft_clean(t_mlx *pic, mlx_t *mlx);
void				ft_clean2(t_mlx *pic, mlx_t *mlx);
int					ft_valid_car(char c);
int					ft_image2(t_mlx *pic, mlx_t *mlx);
int					ft_texture2(t_mlx *pic);
//ft_utils2_display.c//
int					ft_displayQ(t_mlx *pic, mlx_t *mlx, t_temp temp,
						t_game *game);
int					ft_displayE(t_mlx *pic, mlx_t *mlx, t_temp temp,
						t_game *game);
int					ft_display1(t_mlx *pic, mlx_t *mlx, t_temp temp,
						t_game *game);
int					ft_displayP(t_mlx *pic, mlx_t *mlx, t_temp temp,
						t_game *game);
int					ft_displayC(t_mlx *pic, mlx_t *mlx, t_temp temp,
						t_game *game);
//ft_utils2_display.c//
int					ft_displayF(t_mlx *pic, mlx_t *mlx, t_game *game,
						t_temp temp);

// /!\ file for make test /!\ ///
//ft_print_map.c//
void				ft_print_map(t_game *game);
//ft_print_char_tab.c//
void				ft_print_char_tab(char **tab);

#endif
