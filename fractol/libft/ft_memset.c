/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 08:36:53 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/22 08:36:54 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	unsigned char *tmp;

	tmp = memptr;
	if (!num)
		return (memptr);
	while (num)
	{
		*tmp = (unsigned char)val;
		tmp++;
		num--;
	}
	return (memptr);
}
