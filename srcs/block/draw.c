/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 13:19:09 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 16:20:41 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

static void	draw_front_back(t_block *block)
{
	if (block_visible_face(block, 1))
	{
		glTexCoord2f(0, 0);
		glVertex3f(block->x - .5f, block->y - .5f, block->z - .5f);
		glTexCoord2f(0, 1);
		glVertex3f(block->x - .5f, block->y + .5f, block->z - .5f);
		glTexCoord2f(1, 1);
		glVertex3f(block->x + .5f, block->y + .5f, block->z - .5f);
		glTexCoord2f(1, 0);
		glVertex3f(block->x + .5f, block->y - .5f, block->z - .5f);
	}
	if (block_visible_face(block, 2))
	{
		glTexCoord2f(1, 0);
		glVertex3f(block->x - .5f, block->y - .5f, block->z + .5f);
		glTexCoord2f(1, 1);
		glVertex3f(block->x - .5f, block->y + .5f, block->z + .5f);
		glTexCoord2f(0, 1);
		glVertex3f(block->x + .5f, block->y + .5f, block->z + .5f);
		glTexCoord2f(0, 0);
		glVertex3f(block->x + .5f, block->y - .5f, block->z + .5f);
	}
}

static void	draw_left_right(t_block *block)
{
	if (block_visible_face(block, 3))
	{
		glTexCoord2f(1, 0);
		glVertex3f(block->x - .5f, block->y - .5f, block->z - .5f);
		glTexCoord2f(1, 1);
		glVertex3f(block->x - .5f, block->y + .5f, block->z - .5f);
		glTexCoord2f(0, 1);
		glVertex3f(block->x - .5f, block->y + .5f, block->z + .5f);
		glTexCoord2f(0, 0);
		glVertex3f(block->x - .5f, block->y - .5f, block->z + .5f);
	}
	if (block_visible_face(block, 4))
	{
		glTexCoord2f(0, 0);
		glVertex3f(block->x + .5f, block->y - .5f, block->z - .5f);
		glTexCoord2f(0, 1);
		glVertex3f(block->x + .5f, block->y + .5f, block->z - .5f);
		glTexCoord2f(1, 1);
		glVertex3f(block->x + .5f, block->y + .5f, block->z + .5f);
		glTexCoord2f(1, 0);
		glVertex3f(block->x + .5f, block->y - .5f, block->z + .5f);
	}
}

static void	draw_top_bottom(t_block *block)
{
	if (block_visible_face(block, 5))
	{
		glTexCoord2f(0, 0);
		glVertex3f(block->x - .5f, block->y - .5f, block->z + .5f);
		glTexCoord2f(0, 1);
		glVertex3f(block->x - .5f, block->y - .5f, block->z - .5f);
		glTexCoord2f(1, 1);
		glVertex3f(block->x + .5f, block->y - .5f, block->z - .5f);
		glTexCoord2f(1, 0);
		glVertex3f(block->x + .5f, block->y - .5f, block->z + .5f);
	}
	if (block_visible_face(block, 6))
	{
		glTexCoord2f(0, 0);
		glVertex3f(block->x - .5f, block->y + .5f, block->z + .5f);
		glTexCoord2f(0, 1);
		glVertex3f(block->x - .5f, block->y + .5f, block->z - .5f);
		glTexCoord2f(1, 1);
		glVertex3f(block->x + .5f, block->y + .5f, block->z - .5f);
		glTexCoord2f(1, 0);
		glVertex3f(block->x + .5f, block->y + .5f, block->z + .5f);
	}
}

void	block_draw(t_block *block)
{
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
	draw_front_back(block);
	draw_left_right(block);
	draw_top_bottom(block);
	glEnd();
}
