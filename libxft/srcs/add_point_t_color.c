/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_point_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takiapo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/02 10:28:41 by takiapo           #+#    #+#             */
/*   Updated: 2016/03/02 13:24:51 by takiapo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibxft.h"

void		add_point_t_color(t_img *img, int x, int y, t_color colorx)
{
	int	color;

	color = mlx_get_color_value(img->mlx, ctoi(colorx));	
	make_struct_color(color, &colorx);
	if (img->endian == 0)
	{
		img->data[y * img->size_line + x * 4 + 3] = colorx.red;
		img->data[y * img->size_line + x * 4 + 2] = colorx.green;
		img->data[y * img->size_line + x * 4 + 1] = colorx.blue;
		img->data[y * img->size_line + x * 4 + 0] = colorx.trans;
	}
	else if (img->endian == 1)
	{
		img->data[y * img->size_line + x * 4 + 0] = colorx.trans;
		img->data[y * img->size_line + x * 4 + 1] = colorx.green;
		img->data[y * img->size_line + x * 4 + 2] = colorx.blue;
		img->data[y * img->size_line + x * 4 + 3] = colorx.trans;
	}
}
