/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:41:28 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/22 14:41:29 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *source, size_t num)
{
	unsigned char *dst;
	unsigned char *src;

	dst = (unsigned char*)dest;
	src = (unsigned char*)source;
	while (num)
	{
		if (*dst == *src)
		{
			dst++;
			src++;
		}
		else
		{
			return (*dst - *src);
		}
		num--;
	}
	return (0);
}
