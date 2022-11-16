/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:28:48 by eelhafia          #+#    #+#             */
/*   Updated: 2022/11/16 00:54:25 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	llen(long n)
{
	int	j;

	j = 0;
	if (n == 0)
		j++;
	if (n < 0)
	{
		n *= -1;
		j++;
	}
	while (n > 0)
	{
		n = n / 10;
		j++;
	}
	return (j);
}

int	lenhixa(unsigned long long n)
{
	int	j;

	j = 0;
	if (n == 0)
		j++;
	while (n > 0)
	{
		n = n / 16;
		j++;
	}
	return (j);
}

unsigned int	ft_unputnbr(unsigned int a)
{
	if (a >= 0 && a <= 9)
	{
		ft_putchar(a + 48);
	}
	if (a > 9)
	{
		ft_putnbr (a / 10);
		ft_putchar(a % 10 + 48);
	}
	return (llen(a));
}

int	ft_putnbr(int n)
{
	unsigned int	a;

	a = n;
	if (n < 0)
	{
		a = n * -1;
		ft_putchar ('-');
	}
	if (a >= 0 && a <= 9)
	{
		ft_putchar(a + 48);
	}
	if (a > 9)
	{
		ft_putnbr (a / 10);
		ft_putchar(a % 10 + 48);
	}
	return (llen(n));
}
