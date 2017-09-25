/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 14:51:07 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/21 14:51:07 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destptr, const char *srcptr)
{
	size_t i_des;
	size_t i_src;

	i_des = ft_strlen(destptr);
	i_src = 0;
	while (srcptr[i_src])
	{
		destptr[i_des] = srcptr[i_src];
		i_des++;
		i_src++;
	}
	destptr[i_des] = '\0';
	return (destptr);
}
