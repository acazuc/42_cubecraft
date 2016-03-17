/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 13:20:02 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 13:22:25 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

t_block	*block_create(int type, int x, int y, int z)
{
	t_block	*block;

	if (!(block = malloc(sizeof(*block))))
		ERROR("Failed to malloc new block");
	block->type = type;
	block->x = x;
	block->y = y;
	block->z = z;
	return (block);
}
