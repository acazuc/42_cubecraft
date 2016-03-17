/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_chunk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 11:38:03 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 11:41:23 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

void	world_add_chunk(t_world *world, t_chunk *chunk)
{
	t_chunk	**new;
	size_t	i;

	if (!(new = malloc(sizeof(*new) * (world->chunks_number + 2))))
		ERROR("Failed to malloc new world's chunks");
	i = 0;
	while (i < world->chunks_number)
	{
		new[i] = world->chunks[i];
		i++;
	}
	new[i++] = chunk;
	new[i++] = NULL;
	free(world->chunks);
	world->chunks = new;
	world->chunks_number++;
}
