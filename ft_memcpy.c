/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiblack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 22:40:31 by kiblack           #+#    #+#             */
/*   Updated: 2019/06/03 01:35:46 by kiblack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*src_ptr;
	char	*dst_ptr;

	i = 0;
	if (!dst && !src)
		return (NULL);
	src_ptr = (char*)src;
	dst_ptr = (char*)dst;
	while (i < n)
	{
		*dst_ptr++ = *src_ptr++;
		i++;
	}
	return (dst);
}
