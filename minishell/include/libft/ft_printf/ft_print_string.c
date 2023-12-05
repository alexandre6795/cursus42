/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:58:35 by sbouheni          #+#    #+#             */
/*   Updated: 2023/09/20 04:23:32 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_print_string(char *ap)
{
	int		count;
	char	*null_str;

	count = 0;
	null_str = "(null)";
	if (ap)
	{
		while (ap[count])
		{
			if (ft_print_char(ap[count]) < 0)
				return (-2147483648);
			count++;
		}
	}
	else
	{
		while (null_str[count])
		{
			if (ft_print_char(null_str[count]) < 0)
				return (-2147483648);
			count++;
		}
	}
	return (count);
}
