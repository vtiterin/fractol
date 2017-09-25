/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 09:45:53 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/22 09:45:54 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
	char		*dst;
	const char	*src;

	dst = destptr;
	src = srcptr;
	while (num-- > 0)
		*dst++ = *src++;
	return (destptr);
}
