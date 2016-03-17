/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_chunk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 13:14:08 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 13:18:48 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

void	world_remove_chunk(t_world *world, t_chunk *chunk)
{
	t_chunk	**new;
	size_t	i;
	size_t	j;

	if (!(new = malloc(sizeof(*new) * world->chunks_nb)))
		ERROR("Failed to malloc new chunks tab");
	i = 0;
	j = 0;
	while (i < world->chunks_nb)
	{
		if (world->chunks[i] != chunk)
		{
			new[j] = world->chunks[i];
			j++;
		}
		i++;
	}
	new[j] = NULL;
	free(world->chunks);
	world->chunks = new;
	world->chunks_nb--;
}
