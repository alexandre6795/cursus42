/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:58:31 by aherrman          #+#    #+#             */
/*   Updated: 2022/11/05 09:55:01 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 'A' && a <= 'Z')
		|| (a >= 'a' && a <= 'z') || (a >= '0' && a <= '9'))
		return (1);
	else
		return (0);
}
