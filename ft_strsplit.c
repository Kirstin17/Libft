/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiblack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 20:47:43 by kiblack           #+#    #+#             */
/*   Updated: 2019/06/03 00:24:20 by kiblack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			k;
	char		**array;

	k = 0;
	if (!s || !c)
		return (NULL);
	i = ft_countwords(s, c);
	if (!(array = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	array[i] = NULL;
	while (s[i] != '\0')
	{
		while (*s == c && *s)
			s++;
		i = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			array[k++] = ft_mem_alloc(s, i);
			s += i;
		}
	}
	return (array);
}
