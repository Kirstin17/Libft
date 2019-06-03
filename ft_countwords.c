/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiblack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 19:06:00 by kiblack           #+#    #+#             */
/*   Updated: 2019/05/30 19:06:04 by kiblack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char ch)
{
	const char	*string;
	int			i;
	int			wc;

	string = str;
	i = 0;
	wc = 0;
	while (string[i] != '\0')
	{
		if (string[i] && (string[i] == ch))
			i++;
		if ((string[i] != ch) && string[i])
		{
			wc++;
			while ((string[i] != ch) && string[i])
				i++;
		}
	}
	return (wc);
}