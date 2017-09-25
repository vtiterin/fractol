/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:14:20 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/24 15:14:21 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *start;

	if (list == NULL)
		return (NULL);
	new_list = (*f)(list);
	start = new_list;
	while (list->next)
	{
		list = list->next;
		new_list->next = (*f)(list);
		new_list = new_list->next;
	}
	return (start);
}
