/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 15:35:04 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/22 15:35:05 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *l, size_t len)
{
	char	*my_big;
	char	*my_lit;
	size_t	i;

	if (*l == '\0')
		return ((char*)big);
	while (len && *big)
	{
		my_big = (char*)big;
		my_lit = (char*)l;
		i = len;
		while (*my_big == *my_lit && *my_lit && i)
		{
			my_big++;
			my_lit++;
			i--;
		}
		if (*my_lit == '\0')
			return ((char*)big);
		big++;
		len--;
	}
	return (0);
}
