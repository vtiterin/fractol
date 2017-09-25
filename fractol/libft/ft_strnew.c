/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 16:39:45 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/23 16:39:47 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*arr;

	arr = (char*)malloc(size + 1 * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, size + 1);
	return (arr);
}
