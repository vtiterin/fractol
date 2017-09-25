/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 19:56:00 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/21 19:56:03 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	while (*str1 == *str2 && num)
	{
		if (!*str1)
		{
			return (0);
		}
		str1++;
		str2++;
		num--;
	}
	return (*(unsigned char*)str1 - *(unsigned char*)str2);
}
