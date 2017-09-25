/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 15:13:41 by vtiterin          #+#    #+#             */
/*   Updated: 2016/11/24 15:13:42 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp_f;
	t_list	*tmp_n;

	tmp_f = *alst;
	while (tmp_f)
	{
		tmp_n = tmp_f->next;
		(*del)(tmp_f->content, tmp_f->content_size);
		free(tmp_f);
		tmp_f = tmp_n;
	}
	*alst = NULL;
}
