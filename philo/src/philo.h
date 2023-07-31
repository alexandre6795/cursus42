/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:22:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/07/31 10:29:05 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

//***** LIB *****//
# include <fcntl.h>
# include <pthread.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
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

typedef struct s_data
{
	long int		t_die;
	long int		t_eat;
	long int		t_sleep;
	long int		eatcount;
	long int		eatneed;
	int				rank;
	int				status;
	int				nb_philo;
	long int		time;
	long int		start;
	pthread_mutex_t	*fork;
	pthread_mutex_t	*steal;
}					t_data;

typedef struct s_philo
{
	int				error;
	long int		imin;
	long int		imax;
	int				nb_philo;
	t_data			**data;
}					t_philo;

//***** ft_av_to_tab.c *****//
int					ft_valid_ar(int ac, char **av, t_philo *philo);
int					ft_av_to_tab(int ac, char **av, t_philo *philo);
int					ft_valid_tab(t_philo *philo);
long int			ft_real_time(void);
//***** ft_error.c *****//
void				ft_free(t_philo *philo);
int					ft_error(char *s);
//***** ft_philo.c *****//
int					ft_philo(t_philo *philo);
//***** ft_utils.c *****//
int					ft_is_valid(char *s);
int					ft_for_line(t_philo *philo, int i);
void				ft_steal_init(t_philo *philo, int i);
void				ft_l_init(t_philo *philo, int i);
void				ft_timer(int time_ms);

//*****mem*****//
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

//*****put*****//
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					ft_atoi(const char *str);

//*****malloc*****//
void				*ft_calloc(size_t count, size_t size);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *c);
size_t				ft_strlcpy(char *dest, const char *src, size_t len);
//*****ft_routine.c*****//
void				ft_take_forks(t_data *philo);
void				ft_sleep(t_data *philo);
void				ft_eat(t_data *philo);
void				ft_print(int i, long int time, int status);
void				ft_think(t_data *philo);
#endif