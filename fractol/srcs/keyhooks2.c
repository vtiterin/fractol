/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:35:38 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/29 10:35:40 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_im_left(t_main *tab)
{
	tab->movex += 0.1;
	expose_hook(tab);
}

void	ft_im_right(t_main *tab)
{
	tab->movex -= 0.1;
	expose_hook(tab);
}

void	ft_im_up(t_main *tab)
{
	tab->movey += 0.1;
	expose_hook(tab);
}

void	ft_im_down(t_main *tab)
{
	tab->movey -= 0.1;
	expose_hook(tab);
}

void	ft_move(t_main *tab)
{
	tab->b_move += 1;
	expose_hook(tab);
}
