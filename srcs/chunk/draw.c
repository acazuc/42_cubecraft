/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 12:39:45 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 12:44:58 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

void	chunk_draw(t_chunk *chunk)
{
	size_t	x;
	size_t	y;
	size_t	z;

	glNewList(chunk->gl_list, GL_COMPILE);
	x = 0;
	while (x < CHUNK_WIDTH)
	{
		y = 0;
		while (y < CHUNK_HEIGHT)
		{
			z = 0;
			while (z < CHUNK_WIDTH)
			{
				block_draw(chunk->blocks[x][y][z]);
				z++;
			}
			y++;
		}
		x++;
	}
	glEndList();
}
