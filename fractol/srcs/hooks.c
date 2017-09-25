/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 15:32:11 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/28 15:32:13 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		expose_hook(t_main *tab)
{
	tab->image = mlx_new_image(tab->mlx, CW, CH);
	tab->ibuf = mlx_get_data_addr(tab->image, &(tab->icolor),
		&(tab->isize), &(tab->iendian));
	if (tab->fract == 1)
		ft_mandelbrot(tab);
	else if (tab->fract == 2)
		ft_julia(tab);
	else if (tab->fract == 3)
		ft_spider(tab);
	if (tab->options % 2 == 1)
		ft_win_xlean(tab);
	mlx_put_image_to_window(tab->mlx, tab->win, tab->image, 0, 0);
	mlx_string_put(tab->mlx, tab->win, CW - 100, 10, 0xFFFFFF, "dots: ");
	mlx_string_put(tab->mlx, tab->win, CW - 45, 10, 0xFFFFFF,
		ft_itoa(tab->maxiter));
	mlx_string_put(tab->mlx, tab->win, 10, 10, 0xFFFFFF,
		"F1 legend:");
	if (tab->options % 2 == 1)
		ft_pr_legend(tab);
	mlx_destroy_image(tab->mlx, tab->image);
	return (0);
}

void	my_key_func(int keycode, t_main *tab)
{
	if (keycode == 123)
		ft_im_left(tab);
	else if (keycode == 124)
		ft_im_right(tab);
	else if (keycode == 126)
		ft_im_up(tab);
	else if (keycode == 125)
		ft_im_down(tab);
	else if (keycode == 69)
		ft_zoom_up(tab);
	else if (keycode == 78)
		ft_zoom_down(tab);
	else if (keycode == 49)
		ft_move(tab);
	else if (keycode == 116)
		ft_maxiterup(tab);
	else if (keycode == 121)
		ft_maxiterdown(tab);
	else if (keycode == 122)
		ft_options(tab);
	else if (keycode == 87)
		ft_ch_julia_b(tab);
}

int		key_hook(int keycode, t_main *tab)
{
	if (keycode == 53)
		exit(0);
	else if (keycode == 67)
		ft_ch_col(tab);
	else if (keycode == 15)
		ft_reset(tab);
	else
		my_key_func(keycode, tab);
	return (0);
}

int		motion_hook(int x, int y, t_main *tab)
{
	if (tab->b_move % 3 == 1)
	{
		if (x >= 0 && x <= CW && y >= 0 && y <= CH)
		{
			tab->cr = (x - CW / 2) * (1.0 / (CW / 2.0));
			tab->ci = (y - CH / 2) * (1.0 / (CH / 2.0));
			expose_hook(tab);
		}
	}
	return (0);
}

int		mouse_hook(int button, int x, int y, t_main *tab)
{
	if (button == 4 || button == 1)
	{
		tab->ox = tab->ox + (tab->ox - x) / 5;
		tab->oy = tab->oy + (tab->oy - y) / 5;
		tab->zoom = tab->zoom + tab->zoom / 5;
		expose_hook(tab);
	}
	else if (button == 5 || button == 2)
	{
		tab->ox = tab->ox - (tab->ox - x) / 5;
		tab->oy = tab->oy - (tab->oy - y) / 5;
		tab->zoom = tab->zoom - tab->zoom / 5;
		expose_hook(tab);
	}
	else if (button == 3)
		ft_ch_julia(tab);
	return (0);
}
