/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiblack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:46:37 by kiblack           #+#    #+#             */
/*   Updated: 2019/05/31 14:02:02 by kiblack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		len;
	int		index;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * len + 1);
	if (!new_str)
		return (NULL);
	new_str[len] = '\0';
	index = 0;
	while (index < len)
	{
		if (*s1)
			new_str[index] = *s1++;
		else if (*s2)
			new_str[index] = *s2++;
		index++;
	}
	return (new_str);
}