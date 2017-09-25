/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 13:55:56 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/22 13:55:57 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t num)
{
	char *tmp;

	tmp = (char*)str;
	while (num--)
	{
		if (*tmp == ch)
			return (tmp);
		tmp++;
	}
	return (0);
}
