/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:38:08 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/21 16:38:09 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *string, int symbol)
{
	size_t i;

	if (ft_strchr(string, symbol))
	{
		i = ft_strlen(string);
		while (string[i] != symbol)
			i--;
		return ((char*)string + i);
	}
	else
	{
		return (0);
	}
}
