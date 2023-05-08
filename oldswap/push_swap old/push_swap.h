/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:22:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/21 08:56:38 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef SEPARATOR
#  define SEPARATOR " "
# endif

//***** LIB *****//
# include "printf/ft_printf.h"
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include "printf/libft/libft.h"

//*****STRUCT*****//


//***** fonction *****//
t_list	*ft_av_to_int(char**av, int ac);
void	ft_list_check_int(int *nb);
int		ft_check_limit(int *nb);
int		ft_check_twin(int *nb);

void	ft_check_list_char(char **s);
int		ft_check_only_nb(char **s);
void	ft_jump_error(char **s, int *nb);
//***** move_a ******//
void	swap_a(void);
void	push_a(void);
void	rot_a(void);
void	rreot_a(void);

//***** move_b ******//
void	swap_b(void);
void	push_b(void);
void	rot_b(void);
void	rrot_b(void);

//***** combo_ab *****//
void	swap_ab(void);
void	rot_ab(void);
void	rrot_ab(void);
#endif
