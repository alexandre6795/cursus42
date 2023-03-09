/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 11:22:34 by aherrman          #+#    #+#             */
/*   Updated: 2023/03/07 12:43:34 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef SEPARATOR
#  define SEPARATOR "\f\n \r\t\v"
# endif

//***** LIB *****//
# include "printf/ft_printf.h"
# include "printf/libft/libft.h"
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

//***** fonction *****//
void	ft_list_check_int(int *nb);
int		ft_check_limit(int *nb);
int		ft_check_twin(int *nb);

void	ft_list_check_char(char **s);
int		ft_check_only_nb(char **s);
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
