/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 11:00:03 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/22 11:00:04 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destt, const void *s, int c, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*src;

	dst = destt;
	src = s;
	if (n)
	{
		while (n-- > 0)
		{
			if ((*dst++ = *src++) == (unsigned char)c)
				return (dst);
		}
	}
	return (0);
}
