/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 15:28:06 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/21 15:28:07 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	while (*string != symbol && *string)
	{
		string++;
	}
	if (symbol == *string)
	{
		return ((char*)string);
	}
	else
	{
		return (NULL);
	}
}
