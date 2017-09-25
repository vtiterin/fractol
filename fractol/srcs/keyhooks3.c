/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:35:43 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/29 10:35:44 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_maxiterdown(t_main *tab)
{
	if (tab->maxiter - 50 > 0)
		tab->maxiter -= 50;
	expose_hook(tab);
}

void	ft_ch_col(t_main *tab)
{
	tab->b_color = (tab->b_color + 1) % 10;
	expose_hook(tab);
}

void	ft_reset(t_main *tab)
{
	ft_res(tab);
	expose_hook(tab);
}

void	ft_zoom_down(t_main *tab)
{
	tab->zoom = tab->zoom - tab->zoom / 5;
	expose_hook(tab);
}

void	ft_zoom_up(t_main *tab)
{
	tab->zoom = tab->zoom + tab->zoom / 5;
	expose_hook(tab);
}
