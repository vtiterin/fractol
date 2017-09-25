/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 12:51:11 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/28 12:51:14 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_mandelbrot2(t_main *tab, double cre, double cim)
{
	int		i;
	double	zre;
	double	zim;
	double	tmpre;

	i = 0;
	zre = 0;
	zim = 0;
	while (i < tab->maxiter && zre * zre + zim * zim < 4)
	{
		tmpre = zre;
		zre = tmpre * tmpre - zim * zim + cre;
		zim = 2.0 * tmpre * zim + cim;
		i++;
	}
	if (i < tab->maxiter && i > 0)
	{
		tab->color = ft_ch_collor(i % 16, tab);
		ft_memcpy(&tab->ibuf[(tab->x * 4) + (tab->y * tab->isize)],
			&(tab->color), 4);
	}
}

void	ft_mandelbrot(t_main *tab)
{
	double	cre;
	double	cim;

	tab->y = -1;
	while (++tab->y < CH)
	{
		tab->x = -1;
		while (++tab->x < CW)
		{
			cre = 1.5 * (tab->x - tab->ox) / (tab->zoom * CW / 3) + tab->movex;
			cim = (tab->y - tab->oy) / (tab->zoom * CH / 3) + tab->movey;
			ft_mandelbrot2(tab, cre, cim);
		}
	}
}
