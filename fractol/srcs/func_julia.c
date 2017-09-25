/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_julia.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 14:55:40 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/28 14:55:43 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ch_julia(double *cre, double *cim, t_main *tab)
{
	if (tab->c % 8 == 0)
	{
		*cre = 0.285;
		*cim = 0;
	}
	else if (tab->c % 8 == 1)
	{
		*cre = 0.285;
		*cim = 0.01;
	}
	else if (tab->c % 8 == 2)
	{
		*cim = 0.1428;
		*cre = 0.45;
	}
	else if (tab->c % 8 == 3)
	{
		*cim = -0.3842;
		*cre = -0.70176;
	}
	else
		ch_julia2(cre, cim, tab);
}

void	ch_julia2(double *cre, double *cim, t_main *tab)
{
	if (tab->c % 8 == 4)
	{
		*cre = -0.835;
		*cim = -0.2321;
		return ;
	}
	else if (tab->c % 8 == 5)
	{
		*cre = -0.8;
		*cim = +0.156;
		return ;
	}
	else if (tab->c % 8 == 6)
	{
		*cre = -0.7269;
		*cim = +0.1889;
		return ;
	}
	else if (tab->c % 8 == 7)
	{
		*cim = 0.8;
		*cre = 0;
		return ;
	}
}

int		ft_ch_collor(int i, t_main *tab)
{
	if (tab->b_color == 0)
		return (ft_collor(i));
	else if (tab->b_color == 1)
		return (ft_collor5(i));
	else if (tab->b_color == 2)
		return (ft_collor1(i));
	else if (tab->b_color == 3)
		return (ft_collor6(i));
	else if (tab->b_color == 4)
		return (ft_collor2(i));
	else if (tab->b_color == 5)
		return (ft_collor7(i));
	else if (tab->b_color == 6)
		return (ft_collor3(i));
	else if (tab->b_color == 7)
		return (ft_collor8(i));
	else if (tab->b_color == 8)
		return (ft_collor4(i));
	else
		return (ft_collor9(i));
}
