/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:22:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/06/19 14:11:43 by aherrman         ###   ########.fr       */
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
void				ft_init_temp(t_temp *temp);
typedef struct s_pos
{
	int				x;
	int				y;
}					t_pos;
typedef struct s_mlx
{
	mlx_image_t		*qq;
	mlx_image_t		*cc;
	mlx_image_t		*cc2;
	mlx_image_t		*cc3;
	mlx_image_t		*pp;
	mlx_image_t		*pp2;
	mlx_image_t		*ee;
	mlx_image_t		*ee2;
	mlx_image_t		*wall;
	mlx_image_t		*wall2;
	mlx_image_t		*floor;
	mlx_image_t		*floor2;
	mlx_texture_t	*t_qq;
	mlx_texture_t	*t_cc;
	mlx_texture_t	*t_cc2;
	mlx_texture_t	*t_cc3;
	mlx_texture_t	*t_pp;
	mlx_texture_t	*t_pp2;
	mlx_texture_t	*t_ee;
	mlx_texture_t	*t_ee2;
	mlx_texture_t	*t_wall;
	mlx_texture_t	*t_wall2;
	mlx_texture_t	*t_floor;
	mlx_texture_t	*t_floor2;

}					t_mlx;

typedef struct s_game
{
	char			**map;
	int				c;
	int				p;
	int				e;
	int				q;
	int				gc;
	int				step;
	int				collected;
	t_pos			*pos;
	t_pos			*msize;
	t_pos			*mpos;
	t_mlx			*pic;
	mlx_t			*mlx;
}					t_game;
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
int					ft_size(int fd, t_game *game);
//ft_so_long_utils.c//
void				ft_add_heros_pos(t_game *game, int x, int y);
//ft_flood_fill//
void				ft_flood_fill(t_game *game);

//ft_utils_mlx.c//
void				ft_keyhook(mlx_key_data_t keydata, void *param);
void				ft_create_word(t_mlx *pic, t_game *game, mlx_t *mlx);
int					ft_image(t_mlx *pic, mlx_t *mlx);
//ft_utils2_mlx.c//
void				ft_clean(t_mlx *pic, mlx_t *mlx);
void				ft_clean2(t_mlx *pic, mlx_t *mlx);
int					ft_valid_car(char c);
int					ft_image2(t_mlx *pic, mlx_t *mlx);
int					ft_texture2(t_mlx *pic);
int					ft_display(t_mlx *pic, mlx_t *mlx, t_game *g);
//ft_utils2_display.c//
int					ft_displayq(t_mlx *pic, mlx_t *mlx, t_temp temp,
						t_game *game);
int					ft_displaye(t_mlx *pic, mlx_t *mlx, t_temp temp,
						t_game *game);
int					ft_display1(t_mlx *pic, mlx_t *mlx, t_temp temp,
						t_game *game);
int					ft_displayp(t_mlx *pic, mlx_t *mlx, t_temp temp,
						t_game *game);
int					ft_displayc(t_mlx *pic, mlx_t *mlx, t_temp temp,
						t_game *game);
int					ft_display(t_mlx *pic, mlx_t *mlx, t_game *g);
//ft_utils2_display.c//
int					ft_displayf(t_mlx *pic, mlx_t *mlx, t_game *game,
						t_temp temp);
void				ft_mv_up(t_game *game);
void				ft_mv_lf(t_game *game);
void				ft_mv_dw(t_game *game);
void				ft_mv_rt(t_game *game);

// ft_anim.c
void				ft_anim_on_key(t_game *game);

// /!\ file for make test /!\ ///
//ft_print_map.c//
void				ft_print_map(t_game *game);
//ft_print_char_tab.c//
void				ft_print_char_tab(char **tab);

#endif
