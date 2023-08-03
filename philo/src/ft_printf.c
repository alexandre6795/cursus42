/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:01:06 by aherrman          #+#    #+#             */
/*   Updated: 2023/08/03 10:18:11 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	put_digit(long long int n, int b, int *length)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n < 0)
	{
		n *= -1;
		length += write(1, "-", 1);
	}
	if (n >= b)
		put_digit(n / b, b, length);
	*length += write(1, &hexa[n % b], 1);
}

void	put_string(char *s, int *length)
{
	if (!s)
		s = "(null)";
	while (*s)
		*length = write(1, s++, 1);
}

int	ft_printf(const char *format, ...)
{
	int		lenght;
	va_list	pointer;

	va_start(pointer, format);
	lenght = 0;
	while (*format)
	{
		if ((*format == '%') && *(format + 1))
		{
			format++;
			if (*format == 's')
				put_string(va_arg(pointer, char *), &lenght);
			else if (*format == 'd')
				put_digit((long long int)va_arg(pointer, int), 10, &lenght);
		}
		else
		{
			lenght += write(1, format, 1);
			format++;
		}
	}
	return (va_end(pointer), lenght);
}
