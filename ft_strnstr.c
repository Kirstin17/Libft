/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiblack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 22:47:21 by kiblack           #+#    #+#             */
/*   Updated: 2019/05/24 00:03:41 by kiblack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	if (*needle == '\0')
		return ((char*)haystack);
	i = 0;
	while (*haystack && n)
	{
		i = 0;
		while (haystack[i] == needle[i] && i <= n)
		{
			if (needle[i + 1] == '\0')
				return ((char *)haystack);
			i++;
		}
		haystack++;
		n--;
	}
	return (NULL);
}
