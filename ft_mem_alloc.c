/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_alloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiblack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 00:38:22 by kiblack           #+#    #+#             */
/*   Updated: 2019/06/03 00:38:39 by kiblack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_mem_alloc(char const *str, size_t n)
{
	char	*mem;
	size_t	i;

	i = 0;
	if (!n || !str)
		return (NULL);
	mem = (char *)malloc(sizeof(char) * (n + 1));
	if (!mem)
		return (NULL);
	while (i < n)
	{
		mem[i] = str[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
