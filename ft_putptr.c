/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byjeon <byjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:07:59 by byjeon            #+#    #+#             */
/*   Updated: 2022/07/18 17:33:46 by byjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrlen(unsigned long long num)
{
	int	len;

	len = 1;
	while (num >= 16)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

void	ft_putptr2(unsigned long long num)
{
	if (num >= 16)
	{
		ft_putptr2(num / 16);
		ft_putptr2(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_putptr(unsigned long long num)
{
	int	len;

	len = 2;
	ft_putstr("0x");
	if (num == 0)
	{
		ft_putchar('0');
		len++;
	}
	else
	{
		ft_putptr2(num);
		len += ft_ptrlen(num);
	}
	return (len);
}
