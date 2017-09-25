/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 12:57:05 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/28 12:57:07 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_ini(t_main *tab, char *arg)
{
	tab->mlx = mlx_init();
	tab->win = mlx_new_window(tab->mlx, CW, CH, "fractol");
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
	tab->fract = ft_fract(arg);
}

int		main(int ar, char **arg)
{
	t_main *tab;

	if (ar == 2)
	{
		if (!(tab = (t_main*)malloc(sizeof(t_main))))
			return (1);
		ft_ini(tab, arg[1]);
		mlx_key_hook(tab->win, key_hook, tab);
		mlx_mouse_hook(tab->win, mouse_hook, tab);
		mlx_expose_hook(tab->win, expose_hook, tab);
		mlx_hook(tab->win, 6, 1L << 13, motion_hook, tab);
		mlx_loop(tab->mlx);
	}
	ft_error();
	return (0);
}
