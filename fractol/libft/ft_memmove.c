/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 12:27:18 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/22 12:27:18 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *s, size_t num)
{
	size_t	i;
	char	*dst;
	char	*src;

	dst = (char*)dest;
	src = (char*)s;
	if (src > dst)
	{
		i = 0;
		while (i < num)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		i = num;
		while (i != 0)
		{
			i--;
			dst[i] = src[i];
		}
	}
	return (dest);
}
