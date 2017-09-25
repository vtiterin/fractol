/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 20:37:57 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/23 20:37:58 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;

	str = ft_strnew(ft_strlen(s));
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, s);
	i = 0;
	while (str[i])
	{
		str[i] = (*f)(str[i]);
		i++;
	}
	return (str);
}
