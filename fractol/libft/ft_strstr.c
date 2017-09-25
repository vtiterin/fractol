/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 18:03:20 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/21 18:03:21 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str1, const char *str2)
{
	char *my_str1;
	char *my_str2;

	if (*str2 == '\0')
		return ((char*)str1);
	while (*str1)
	{
		my_str1 = (char*)str1;
		my_str2 = (char*)str2;
		while (*my_str1 == *my_str2 && *my_str2)
		{
			my_str1++;
			my_str2++;
		}
		if (*my_str2 == '\0')
			return ((char*)str1);
		str1++;
	}
	return (0);
}
