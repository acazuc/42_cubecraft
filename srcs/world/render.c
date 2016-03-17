/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 12:35:55 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 12:37:07 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

void	world_render(t_world *world)
{
	size_t	i;

	i = 0;
	while (i < world->chunks_nb)
	{
		chunk_render(world->chunks[i]);
		i++;
	}
}
