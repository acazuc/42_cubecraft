/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 15:28:16 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 15:33:46 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

void	chunk_generate(t_chunk *chunk)
{
	size_t	x;
	size_t	y;
	size_t	z;

	x = 0;
	while (x < CHUNK_WIDTH)
	{
		y = 0;
		while (y < CHUNK_HEIGHT)
		{
			z = 0;
			while (z < CHUNK_WIDTH)
			{
				chunk->blocks[x][y][z] = block_create(chunk, 1, x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}
