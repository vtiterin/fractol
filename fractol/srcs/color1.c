/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 12:53:44 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/28 12:53:47 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_collor(int i)
{
	int r;

	r = 0;
	r = i == 0 ? 0x421e0f : r;
	r = i == 1 ? 0x19071a : r;
	r = i == 2 ? 0x09012f : r;
	r = i == 3 ? 0x040449 : r;
	r = i == 4 ? 0x000764 : r;
	r = i == 5 ? 0x0c2c8a : r;
	r = i == 6 ? 0x1852b1 : r;
	r = i == 7 ? 0x397dd1 : r;
	r = i == 8 ? 0x86b5e5 : r;
	r = i == 9 ? 0xd3ecf8 : r;
	r = i == 10 ? 0xf1e9bf : r;
	r = i == 11 ? 0xf8c95f : r;
	r = i == 12 ? 0xffaa00 : r;
	r = i == 13 ? 0xcc8000 : r;
	r = i == 14 ? 0x995700 : r;
	r = i == 15 ? 0x995700 : r;
	return (r);
}

int		ft_collor1(int i)
{
	int r;

	r = 0;
	r = i == 0 ? 0x421e0f : r;
	r = i == 1 ? 0x5D478B : r;
	r = i == 2 ? 0x09012f : r;
	r = i == 3 ? 0x8B0000 : r;
	r = i == 4 ? 0x000764 : r;
	r = i == 5 ? 0xFF3E96 : r;
	r = i == 6 ? 0x1852b1 : r;
	r = i == 7 ? 0xFF1493 : r;
	r = i == 8 ? 0x86b5e5 : r;
	r = i == 9 ? 0xFF0000 : r;
	r = i == 10 ? 0xf1e9bf : r;
	r = i == 11 ? 0xFFA500 : r;
	r = i == 12 ? 0xffaa00 : r;
	r = i == 13 ? 0xFF7F24 : r;
	r = i == 14 ? 0x995700 : r;
	r = i == 15 ? 0xFFD39B : r;
	return (r);
}

int		ft_collor2(int i)
{
	int r;

	r = 0;
	r = i == 0 ? 0x421e0f : r;
	r = i == 1 ? 0x19071a : r;
	r = i == 2 ? 0x8B658B : r;
	r = i == 3 ? 0x040449 : r;
	r = i == 4 ? 0x000764 : r;
	r = i == 5 ? 0xFFB90F : r;
	r = i == 6 ? 0x1852b1 : r;
	r = i == 7 ? 0x397dd1 : r;
	r = i == 8 ? 0xFFFF00 : r;
	r = i == 9 ? 0xd3ecf8 : r;
	r = i == 10 ? 0xf1e9bf : r;
	r = i == 11 ? 0xFFFFE0 : r;
	r = i == 12 ? 0xffaa00 : r;
	r = i == 13 ? 0xcc8000 : r;
	r = i == 14 ? 0xBCEE68 : r;
	r = i == 15 ? 0x995700 : r;
	return (r);
}

int		ft_collor3(int i)
{
	int r;

	r = 0;
	r = i == 0 ? 0x421e0f : r;
	r = i == 1 ? 0x19071a : r;
	r = i == 2 ? 0x09012f : r;
	r = i == 3 ? 0x00CD00 : r;
	r = i == 4 ? 0x000764 : r;
	r = i == 5 ? 0x0c2c8a : r;
	r = i == 6 ? 0x1852b1 : r;
	r = i == 7 ? 0x00FF7F : r;
	r = i == 8 ? 0x86b5e5 : r;
	r = i == 9 ? 0xd3ecf8 : r;
	r = i == 10 ? 0xf1e9bf : r;
	r = i == 11 ? 0x8DEEEE : r;
	r = i == 12 ? 0xffaa00 : r;
	r = i == 13 ? 0xcc8000 : r;
	r = i == 14 ? 0x995700 : r;
	r = i == 15 ? 0x00F5FF : r;
	return (r);
}

int		ft_collor4(int i)
{
	int r;

	r = 0;
	r = i == 0 ? 0xFF8C00 : r;
	r = i == 1 ? 0x19071a : r;
	r = i == 2 ? 0xBCD2EE : r;
	r = i == 3 ? 0x040449 : r;
	r = i == 4 ? 0x000764 : r;
	r = i == 5 ? 0x00B2EE : r;
	r = i == 6 ? 0x1852b1 : r;
	r = i == 7 ? 0x397dd1 : r;
	r = i == 8 ? 0x0000EE : r;
	r = i == 9 ? 0xd3ecf8 : r;
	r = i == 10 ? 0x7A67EE : r;
	r = i == 11 ? 0xf8c95f : r;
	r = i == 12 ? 0xFFF0F5 : r;
	r = i == 13 ? 0xFFD700 : r;
	r = i == 14 ? 0x995700 : r;
	r = i == 15 ? 0xFF00FF : r;
	return (r);
}
