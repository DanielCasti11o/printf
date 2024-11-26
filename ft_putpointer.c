/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:36:43 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/22 20:36:54 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *pr)
{
	int	j;

	j = 0;
	if (!pr)
		return (ft_putstr("(nil)"));
	j += ft_putstr("0x");
	j += ft_puthex((unsigned long)pr, 'x');
	return (j);
}
