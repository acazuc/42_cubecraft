/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 10:22:48 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 10:39:48 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

t_window	*window_create(char *name, int width, int height)
{
	t_window	*window;

	if (!(window = malloc(sizeof(*window))))
		ERROR("Failed to malloc window");
	if (!(window->mlx = mlx_init()))
		ERROR("Failed to init mlx");
	if (!(window->mlx_window = mlx_new_opengl_window(window->mlx
					, width, height, name)))
		ERROR("Failed to create new window");
	window->width = width;
	window->height = height;
	window->name = name;
	return (window);
}
