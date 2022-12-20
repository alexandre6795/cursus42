/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aherrman <aherrman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:35:55 by aherrman          #+#    #+#             */
/*   Updated: 2022/12/16 11:55:45 by aherrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"printf.h"

static int ft_tri (const char *attribut,va_list list)
{
	int nbchar ;
	nbchar = 0;
   if ((attribut == c) || (attributs == s)
	   nbchar = ft_putc(va_arg(list,char*));
   else if (attributs == p)

   else if ((attributs == d) || (attributs == u))

   else if (attributs == i)
   fp_putnbr((int)va_arg(list,int);

   else if (attributs == x)

   else if (attributs == X)

int ft_printf(const char *format, ...)
{
	va_list list;
	int nbchar;
	char c;

	va_start (list,*format);
	nbchar = 0;

	while ((*format) != '\0')
	{
		c = *format;
		format++;
		if(c !='%')
		{
			ft_putchar(c);
			nbchar++;
		}
		else
			nbchar += ft_tri(*format,list);
	}
	va_end(list)



