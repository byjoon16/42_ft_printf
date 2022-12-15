/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_class.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byjeon <byjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:14:32 by byjeon            #+#    #+#             */
/*   Updated: 2022/07/18 17:32:23 by byjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_class(char ch, va_list ap)
{
	int	len;

	len = 0;
	if (ch == 'c')
		len += ft_putchar((char)va_arg(ap, int));
	else if (ch == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (ch == '%')
		len += ft_putchar('%');
	else if (ch == 'x' || ch == 'X')
		len += ft_puthex(va_arg(ap, int), ch);
	else if (ch == 'd' || ch == 'i')
		len += ft_itoa(va_arg(ap, int));
	else if (ch == 'u')
		len += ft_unitoa(va_arg(ap, int));
	else if (ch == 'p')
		len += ft_putptr(va_arg(ap, unsigned long long));
	return (len);
}
