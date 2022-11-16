/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelhafia <eelhafia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:59:27 by eelhafia          #+#    #+#             */
/*   Updated: 2022/11/16 01:17:06 by eelhafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int				ft_printf(const char *form, ...);
unsigned int	ft_unputnbr(unsigned int a);
int				hixap(unsigned long long n);
int				hixad(unsigned int n, char c);
int				lenhixa(unsigned long long n);
int				ft_putnbr(int n);
int				llen(long n);
int				ft_putchar(char c);
int				ft_putstr(char *s);
#endif