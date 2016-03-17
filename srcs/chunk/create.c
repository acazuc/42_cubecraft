/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 12:45:13 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 13:52:15 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

void	chunk_create(t_world *world, int x, int z)
{
	t_chunk	*chunk;

	if (!(chunk = malloc(sizeof(*chunk))))
		ERROR("Failed to malloc new chunk");
	chunk->world = world;
	chunk->gl_list = glGenLists(1);
	GL_ERROR();
	chunk->x = x;
	chunk->z = z;
}
