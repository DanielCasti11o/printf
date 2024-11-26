/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:35:55 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/22 20:54:24 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	long	n;
	int		ln;

	ln = 0;
	n = num;
	if (num < 0)
	{
		ln += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ln += ft_putnbr(n / 10);
	}
	ln += ft_putchar((n % 10) + '0');
	return (ln);
}
