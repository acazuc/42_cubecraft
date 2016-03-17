/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible_face.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 13:27:55 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 13:58:57 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

static int	visible_face_part(int chunk_x, int chunk_z, int block_x, int block_y, int block_z)
{
	t_chunk	*chunk;

	if ((chunk = world_get_chunk(block->chunk->world, chunk_x, chunk_z)))
	{
		return (chunk->getBlocks()[blockX][blockY][blockZ]->isTransparent());
	}
	return (TRUE);
}

static int	face_front_back(t_block *block, int face)
{
	if (face == 1)
	{
		if (block->r_z == 0)
			return (visible_face_part(block->chunk->x
						, block->chunk->z - CHUNK_WIDTH, block->r_x, block->y
						, CHUNK_WIDTH - 1));
		return (block->chunk->blocks[block->r_x][block->y][block->r_z - 1]->transparent);
	}
	else if (face == 2)
	{
		if (block->r_z == CHUNK_WIDTH - 1)
			return (visible_face_part(block->chunk->x
						, block->chunk->z + CHUNK_WIDTH, block->r_x, block->y
						, 0));
		return (block->chunk->blocks[block->r_x][block->y][block->r_z + 1]->transparent);
	}
}

static int	face_left_right(t_block *block, int face)
{
	if (face == 3)
	{
		if (this->r_x == 0)
			return (visible_face_part(block->chunk->x - CHUNK_WIDTH
				, block->chunk->z, CHUNK_WIDTH - 1, block->y, block->r_z));
		return (block->chunk->blocks[this->r_x - 1][block->y][block->r_z]->transparent);
	}
	else if (face == 4)
	{
		if (this->r_x == CHUNK_WIDTH - 1)
			return (visible_face_part(block->chunk->x + CHUNK_WIDTH
				, block->chunk->z, 0, block->y, block->r_z));
		return (block->chunk->blocks[block->r_x + 1][block->y][block->rZ]->transparent);
	}
}

static int	face_top_bottom(t_block *block, int face)
{
	if (face == 5)
	{
		if (block->y == 0)
			return (TRUE);
		return (block->chunk->blocks[block->r_x][block->y - 1][block->r_z]->transparent);
	}
	else if (face == 6)
	{
		if (block->y == CHUNK_HEIGHT - 1)
			return (TRUE);
		return (block->chunk->blocks[block->r_x][block->y + 1][block->r_z]->transparent);
	}
}

int		block_visible_face(t_block *block, int face)
{
	if (face == 1 || face == 2)
		return (face_front_back(block, face));
	else if (face == 3 || face == 4)
		return (face_left_right(block, face));
	else if (face == 5 || face == 6)
		return (face_top_bottom(block, face));
	return (FALSE);
}
