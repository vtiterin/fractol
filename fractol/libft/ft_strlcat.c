/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:40:05 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/21 17:40:09 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*m_dst;
	char	*m_src;
	size_t	i;
	size_t	len;

	i = size;
	m_dst = (char*)dst;
	m_src = (char*)src;
	while (i-- && *dst)
		dst++;
	len = dst - m_dst;
	i = size - len;
	if (i-- == 0)
		return (len + ft_strlen(src));
	while (*src)
	{
		if (i--)
			*dst++ = *src;
		src++;
	}
	*dst = '\0';
	return (len + (src - m_src));
}
