/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtiterin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 10:04:49 by vtiterin          #+#    #+#             */
/*   Updated: 2016/12/29 10:04:51 by vtiterin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>
# include <math.h>
# define ABS(x) ((x) < 0 ? -(x) : (x))
# define CH 320
# define CW 480

typedef struct		s_main
{
	double			ox;
	double			oy;
	void			*win;
	void			*mlx;
	void			*image;
	char			*ibuf;
	int				isize;
	int				icolor;
	int				iendian;
	double			zoom;
	double			movex;
	double			movey;
	int				color;
	unsigned int	c;
	unsigned int	b_color;
	unsigned int	b_move;
	unsigned int	options;
	int				maxiter;
	int				fract;
	double			cr;
	double			ci;
	int				x;
	int				y;
}					t_main;

void				ft_mandelbrot(t_main *tab);
void				ft_mandelbrot2(t_main *tab, double cre, double cim);
void				ft_julia(t_main *tab);
void				ft_julia2(t_main *tab, double cre, double cim);
void				ch_julia(double *cre, double *cim, t_main *tab);
void				ch_julia2(double *cre, double *cim, t_main *tab);
void				ft_spider(t_main *tab);
void				ft_spider2(t_main *tab, double *cre, double *cim);
int					ft_collor(int i);
int					ft_collor1(int i);
int					ft_collor2(int i);
int					ft_collor3(int i);
int					ft_collor4(int i);
int					ft_collor5(int i);
int					ft_collor6(int i);
int					ft_collor7(int i);
int					ft_collor8(int i);
int					ft_collor9(int i);
void				ft_options(t_main *tab);
void				ft_maxiterup(t_main *tab);
void				ft_maxiterdown(t_main *tab);
void				ft_move(t_main *tab);
void				ft_zoom_down(t_main *tab);
void				ft_zoom_up(t_main *tab);
void				ft_im_left(t_main *tab);
void				ft_im_right(t_main *tab);
void				ft_im_up(t_main *tab);
void				ft_im_down(t_main *tab);
int					expose_hook(t_main *tab);
int					key_hook(int keycode, t_main *tab);
int					mouse_hook(int button, int x, int y, t_main *tab);
void				ft_ch_julia(t_main *tab);
void				ft_ch_julia_b(t_main *tab);
int					ft_ch_collor(int i, t_main *tab);
void				ft_reset(t_main *tab);
void				ft_res(t_main *tab);
void				my_key_func(int keycode, t_main *tab);
void				ft_ch_col(t_main *tab);
int					motion_hook(int x, int y, t_main *tab);
int					ft_fract(char *av);
void				ft_error();
void				ft_pr_legend(t_main *tab);
void				ft_win_xlean(t_main *tab);

#endif
