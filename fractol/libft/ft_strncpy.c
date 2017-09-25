/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:16:19 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/21 14:16:20 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destptr, const char *srcptr, size_t num)
{
	size_t i;

	i = 0;
	while (num)
	{
		destptr[i] = srcptr[i];
		if (destptr[i] == '\0')
		{
			while (num)
			{
				destptr[i] = '\0';
				i++;
				num--;
			}
			break ;
		}
		i++;
		num--;
	}
	return (destptr);
}
