/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 08:52:35 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/24 08:52:36 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i_beg;
	size_t	i_end;

	i_beg = 0;
	i_end = ft_strlen(s);
	while (s[i_beg] == ' ' || s[i_beg] == '\t' || s[i_beg] == '\n')
		i_beg++;
	if (i_beg == i_end)
		return ("");
	while (s[i_end - 1] == ' ' || s[i_end - 1] == '\t' || s[i_end - 1] == '\n')
		i_end--;
	str = ft_strnew(i_end - i_beg);
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, &s[i_beg], i_end - i_beg);
	return (str);
}
