/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiblack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 12:54:15 by kiblack           #+#    #+#             */
/*   Updated: 2019/06/03 01:54:58 by kiblack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_str;
	char	*src_str;

	i = -1;
	dst_str = (char*)dst;
	src_str = (char*)src;
	if (!dst && !src)
		return (NULL);
	if (src_str < dst_str)
	{
		while ((int)(--len) >= 0)
			*(dst_str + len) = *(src_str + len);
	}
	else
	{
		while (++i < len)
			*(dst_str + i) = *(src_str + i);
	}
	return (dst_str);
}
