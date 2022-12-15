/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byjeon <byjeon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:18:28 by byjeon            #+#    #+#             */
/*   Updated: 2022/12/14 19:21:30 by byjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

// ft_class.c
int		ft_class(char ch, va_list ap);

// ft_printf.c
int		ft_printf(const char *format, ...);

// ft_putcs.c
int		ft_putchar(char ch);
int		ft_putstr(char *str);

// ft_puthex.c
int		ft_hexlen(unsigned int num);
int		ft_puthex(unsigned int num, char c);

// ft_putnbr.c
int		ft_countlen(long num);
void	ft_putnbr(long num);
int		ft_unitoa(int nb);
int		ft_itoa(int nb);

// ft_putptr.c
int		ft_ptrlen(unsigned long long num);
void	ft_putptr2(unsigned long long num);
int		ft_putptr(unsigned long long num);

#endif
