/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 10:11:23 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 12:36:51 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

t_world	*world_create(void)
{
	t_world	*world;

	if (!(world = malloc(sizeof(*world))))
		ERROR("Failed to create new world");
	world->chunks = NULL;
	world->chunks_nb = 0;
	return (world);
}
