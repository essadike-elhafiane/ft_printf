/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:42:58 by eelhafia          #+#    #+#             */
/*   Updated: 2022/11/16 01:26:31 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char form, va_list args)
{
	int		count;
	long	c;

	count = 0;
	c = 0;
	if (form == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (form == 'd' || form == 'i')
		count += ft_putnbr (va_arg(args, int));
	else if (form == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (form == 'u')
		count += ft_unputnbr (va_arg(args, unsigned int));
	else if (form == 'p')
	{
		count += ft_putstr("0x");
		count += hixap ((long)va_arg(args, void *));
	}
	else if (form == 'x' || form == 'X')
		count += hixad(va_arg(args, unsigned int), form);
	else
		count += ft_putchar(form);
	return (count);
}

int	ft_printf(const char *form, ...)
{
	int		i;
	int		a;
	va_list	args;

	va_start(args, form);
	i = 0;
	a = 0;
	while (form[i])
	{
		if (form[i] == '%')
		{
			a += check(form[i +1], args);
			i++;
		}
		else
			a += ft_putchar(form[i]);
		i++;
	}
	va_end (args);
	return (a);
}
