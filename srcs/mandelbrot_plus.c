/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot_plus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takiapo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 13:48:03 by takiapo           #+#    #+#             */
/*   Updated: 2016/03/17 13:54:01 by takiapo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void delete_coords(t_complex *j, t_complex *p)
{
	j->im = 0;
	j->re = 0;
	p->im = 0;
	p->re = 0;
}