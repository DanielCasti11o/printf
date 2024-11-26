/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:37:14 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/22 20:37:33 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned long num)
{
	int		ln;

	ln = 0;
	if (num >= 10)
	{
		ln += ft_putunbr(num / 10);
	}
	ln += ft_putchar((num % 10) + '0');
	return (ln);
}
