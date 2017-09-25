/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:01:48 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/29 10:01:50 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_error(void)
{
	write(1, "\n", 1);
	write(1, "-----------------\n", 18);
	write(2, "Wrong fractal!\n", 15);
	write(1, "-----------------\n", 18);
	write(2, "Write:\n", 7);
	write(2, "1 for Mandelbrot\n", 18);
	write(2, "2 for Julia\n", 12);
	write(2, "3 for Spider\n", 13);
	write(1, "-----------------\n", 18);
	write(1, "\n", 1);
	exit(1);
}

int		ft_fract(char *av)
{
	if (ft_strlen(av) == 1 && ft_atoi(av) == 1)
		return (1);
	else if (ft_strlen(av) == 1 && ft_atoi(av) == 2)
		return (2);
	else if (ft_strlen(av) == 1 && ft_atoi(av) == 3)
		return (3);
	else
		ft_error();
	return (0);
}
