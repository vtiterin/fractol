/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 13:40:58 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/28 13:41:00 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_ch_julia(t_main *tab)
{
	tab->c += 1;
	expose_hook(tab);
}

void	ft_ch_julia_b(t_main *tab)
{
	tab->c += 1;
	expose_hook(tab);
}
