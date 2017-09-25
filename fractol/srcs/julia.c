/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 12:50:46 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/28 12:50:49 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_julia2(t_main *tab, double cre, double cim)
{
	int		i;
	double	tmp;
	double	zre;
	double	zim;

	zre = 1.5 * (tab->x - tab->ox) / (tab->zoom * CW / 2.5) + tab->movex;
	zim = (tab->y - tab->oy) / (tab->zoom * CH / 2.5) + tab->movey;
	i = -1;
	while (zre * zre + zim * zim < 4 && ++i < tab->maxiter)
	{
		tmp = zre * zre - zim * zim + cre;
		zim = 2.0 * zre * zim + cim;
		zre = tmp;
	}
	if (i < tab->maxiter && i > 0)
	{
		tab->color = ft_ch_collor(i % 16, tab);
		ft_memcpy(&tab->ibuf[(tab->x * 4) + (tab->y * tab->isize)],
			&(tab->color), 4);
	}
}

void	ft_julia(t_main *tab)
{
	double	cre;
	double	cim;

	cre = tab->cr;
	cim = tab->ci;
	if (tab->b_move % 3 == 0)
		ch_julia(&cre, &cim, tab);
	tab->y = -1;
	while (++tab->y < CH)
	{
		tab->x = -1;
		while (++tab->x < CW)
			ft_julia2(tab, cre, cim);
	}
}
