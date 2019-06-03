/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiblack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:52:27 by kiblack           #+#    #+#             */
/*   Updated: 2019/06/03 01:43:32 by kiblack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr(int n)
{
	int		neg_flag;
	int		len;

	neg_flag = 1;
	len = ft_nlen(n);
	if (n < 0)
	{
		neg_flag = -1;
		ft_putchar('-');
	}
	while (len != 0)
	{
		ft_putchar((((n / len) % 10) * neg_flag) + '0');
		len /= 10;
	}
}
