/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byjeon <byjeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:57:35 by byjeon            #+#    #+#             */
/*   Updated: 2022/07/18 18:10:23 by byjeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countlen(long num)
{
	int	len;

	len = 1;
	while (num > 9)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

void	ft_putnbr(long num)
{
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}

int	ft_unitoa(int nb)
{
	int				size;
	unsigned int	u;

	size = 0;
	u = (unsigned int)nb;
	size += ft_countlen(u);
	ft_putnbr(u);
	return (size);
}

int	ft_itoa(int nb)
{
	int		size;
	long	num;

	size = 0;
	num = nb;
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
		size += 1;
	}
	size += ft_countlen(num);
	ft_putnbr(num);
	return (size);
}
