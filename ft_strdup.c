/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiblack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:11:58 by kiblack           #+#    #+#             */
/*   Updated: 2019/06/03 01:55:27 by kiblack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char *src)
{
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	if ((str = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	len = 0;
	while (src[len])
	{
		str[len] = src[len];
		len++;
	}
	str[len] = '\0';
	return (str);
}
