/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:43:04 by eelhafia          #+#    #+#             */
/*   Updated: 2022/11/16 01:20:12 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

void	helphixad(unsigned int n)
{
	char	*ss;

	ss = "0123456789ABCDEF";
	if (n >= 0 && n <= 15)
		ft_putchar(ss[n]);
	else if (n > 9)
	{
		helphixad(n / 16);
		ft_putchar(ss[n % 16]);
	}
}

int	hixad(unsigned int n, char c)
{
	char	*s;

	s = "0123456789abcdef";
	if (c == 'x')
	{
		if (n >= 0 && n <= 15)
			ft_putchar(s[n]);
		else if (n > 9)
		{
			hixad(n / 16, c);
			ft_putchar(s[n % 16]);
		}
	}
	else if (c == 'X')
	{
		helphixad(n);
	}
	return (lenhixa(n));
}

int	hixap(unsigned long long n)
{
	char	*s;

	s = "0123456789abcdef";
	if (n >= 0 && n <= 15)
		ft_putchar(s[n]);
	else if (n > 9)
	{
		hixap(n / 16);
		ft_putchar(s[n % 16]);
	}
	return (lenhixa(n));
}
