/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_chunk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 14:40:08 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 14:45:41 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

t_chunk	*world_get_chunk(t_world *world, int x, int z)
{
	size_t	i;

	i = 0;
	while (i < world->chunks_nb)
	{
		if (world->chunks[i]->x == x && world->chunks[i]->z == z)
			return (world->chunks[i]);
		i++;
	}
	return (NULL);
}
