/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 15:32:00 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/28 15:32:03 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_res(t_main *tab)
{
	tab->ox = CW / 2.0;
	tab->oy = CH / 2.0;
	tab->zoom = 1.0;
	tab->movex = 0;
	tab->movey = 0;
	tab->c = 0;
	tab->b_color = 0;
	tab->cr = 0;
	tab->ci = 0;
	tab->b_move = 0;
	tab->maxiter = 50;
	tab->options = 0;
}

void	ft_maxiterup(t_main *tab)
{
	tab->maxiter += 50;
	expose_hook(tab);
}

void	ft_options(t_main *tab)
{
	tab->options += 1;
	expose_hook(tab);
}

void	ft_win_xlean(t_main *tab)
{
	int c;
	int x;
	int y;

	c = 0x0000000;
	y = 0;
	while (y < CH)
	{
		x = 0;
		while (x < tab->isize)
		{
			ft_memcpy(&tab->ibuf[(x) + (y * tab->isize)], &(c), 4);
			x += 1;
		}
		y++;
	}
}

void	ft_pr_legend(t_main *tab)
{
	mlx_string_put(tab->mlx, tab->win, 10, 30,
		0xFFFFFF, "ESC          : quit");
	mlx_string_put(tab->mlx, tab->win, 10, 50,
		0xFFFFFF, "R            : reset");
	mlx_string_put(tab->mlx, tab->win, 10, 70,
		0xFFFFFF, "Arrows       : move");
	mlx_string_put(tab->mlx, tab->win, 10, 90,
		0xFFFFFF, "Num *        : change palette");
	mlx_string_put(tab->mlx, tab->win, 10, 110,
		0xFFFFFF, "Space        : move change Julia");
	mlx_string_put(tab->mlx, tab->win, 10, 130,
		0xFFFFFF, "PgUp/PgDn    : adjust maxdots");
	mlx_string_put(tab->mlx, tab->win, 10, 150,
		0xFFFFFF, "NUM +/-      : zoom");
	mlx_string_put(tab->mlx, tab->win, 10, 170,
		0xFFFFFF, "L/R mouse    : zoom");
	mlx_string_put(tab->mlx, tab->win, 10, 190,
		0xFFFFFF, "Scrolling    : zoom");
	mlx_string_put(tab->mlx, tab->win, 10, 210,
		0xFFFFFF, "Num 5        : change Julia");
	mlx_string_put(tab->mlx, tab->win, 10, 230,
		0xFFFFFF, "Middle mouse : change Julia");
}
