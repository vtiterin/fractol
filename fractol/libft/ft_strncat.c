/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:19:49 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/21 15:19:50 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *destptr, char *srcptr, size_t num)
{
	size_t i_des;
	size_t i_src;

	i_des = ft_strlen(destptr);
	i_src = 0;
	while (srcptr[i_src] && num)
	{
		destptr[i_des] = srcptr[i_src];
		i_des++;
		i_src++;
		num--;
	}
	destptr[i_des] = '\0';
	return (destptr);
}
