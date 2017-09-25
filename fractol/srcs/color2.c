/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 12:53:50 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/28 12:53:53 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_collor5(int i)
{
	int r;

	r = 0;
	r = i == 0 ? 0xFF0000 : r;
	r = i == 1 ? 0x7A67EE : r;
	r = i == 2 ? 0xFF0000 : r;
	r = i == 3 ? 0x7A67EE : r;
	r = i == 4 ? 0xFFD700 : r;
	r = i == 5 ? 0x836FFF : r;
	r = i == 6 ? 0xFFD700 : r;
	r = i == 7 ? 0x00B2EE : r;
	r = i == 8 ? 0xf8c95f : r;
	r = i == 9 ? 0xF0FFFF : r;
	r = i == 10 ? 0xf8c95f : r;
	r = i == 11 ? 0xd3ecf8 : r;
	r = i == 12 ? 0xf8c95f : r;
	r = i == 13 ? 0x000764 : r;
	r = i == 14 ? 0x995700 : r;
	r = i == 15 ? 0x000764 : r;
	return (r);
}

int		ft_collor6(int i)
{
	int r;

	r = 0;
	r = i == 0 ? 0xFF4500 : r;
	r = i == 1 ? 0xFFA500 : r;
	r = i == 2 ? 0xFF4500 : r;
	r = i == 3 ? 0xFFA500 : r;
	r = i == 4 ? 0x8B2323 : r;
	r = i == 5 ? 0xEE3B3B : r;
	r = i == 6 ? 0x8B2323 : r;
	r = i == 7 ? 0xEE3B3B : r;
	r = i == 8 ? 0xFF7F24 : r;
	r = i == 9 ? 0xFFE7BA : r;
	r = i == 10 ? 0xFF7F24 : r;
	r = i == 11 ? 0xFFE7BA : r;
	r = i == 12 ? 0xf8c95f : r;
	r = i == 13 ? 0x8B4726 : r;
	r = i == 14 ? 0x995700 : r;
	r = i == 15 ? 0x8B4726 : r;
	return (r);
}

int		ft_collor7(int i)
{
	int r;

	r = 0;
	r = i == 0 ? 0xFF6A6A : r;
	r = i == 1 ? 0x8B658B : r;
	r = i == 2 ? 0xFF6A6A : r;
	r = i == 3 ? 0x8B658B : r;
	r = i == 4 ? 0xCD950C : r;
	r = i == 5 ? 0x00B2EE : r;
	r = i == 6 ? 0xCD950C : r;
	r = i == 7 ? 0x00B2EE : r;
	r = i == 8 ? 0xFFB90F : r;
	r = i == 9 ? 0xFFFF00 : r;
	r = i == 10 ? 0xFFB90F : r;
	r = i == 11 ? 0xFF6A6A : r;
	r = i == 12 ? 0xf8c95f : r;
	r = i == 13 ? 0xFFFF00 : r;
	r = i == 14 ? 0xEEEED1 : r;
	r = i == 15 ? 0xFFFF00 : r;
	return (r);
}

int		ft_collor8(int i)
{
	int r;

	r = 0;
	r = i == 0 ? 0xFF0000 : r;
	r = i == 1 ? 0x97FFFF : r;
	r = i == 2 ? 0xFF0000 : r;
	r = i == 3 ? 0x97FFFF : r;
	r = i == 4 ? 0xFFD700 : r;
	r = i == 5 ? 0x00B2EE : r;
	r = i == 6 ? 0x97FFFF : r;
	r = i == 7 ? 0x7FFF00 : r;
	r = i == 8 ? 0xf8c95f : r;
	r = i == 9 ? 0xFFFF00 : r;
	r = i == 10 ? 0xf8c95f : r;
	r = i == 11 ? 0x7FFF00 : r;
	r = i == 12 ? 0xf8c95f : r;
	r = i == 13 ? 0x00FF00 : r;
	r = i == 14 ? 0xEEEED1 : r;
	r = i == 15 ? 0x00FF00 : r;
	return (r);
}

int		ft_collor9(int i)
{
	int r;

	r = 0;
	r = i == 0 ? 0x00F5FF : r;
	r = i == 1 ? 0x00BFFF : r;
	r = i == 2 ? 0x00F5FF : r;
	r = i == 3 ? 0x00BFFF : r;
	r = i == 4 ? 0x97FFFF : r;
	r = i == 5 ? 0xFF00FF : r;
	r = i == 6 ? 0xFFD700 : r;
	r = i == 7 ? 0x836FFF : r;
	r = i == 8 ? 0xf8c95f : r;
	r = i == 9 ? 0xFF00FF : r;
	r = i == 10 ? 0xf8c95f : r;
	r = i == 11 ? 0xF0FFFF : r;
	r = i == 12 ? 0xf8c95f : r;
	r = i == 13 ? 0xFF0000 : r;
	r = i == 14 ? 0x995700 : r;
	r = i == 15 ? 0xFF0000 : r;
	return (r);
}
