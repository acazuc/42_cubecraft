/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   world.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 10:01:57 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 12:36:34 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORLD_H
# define WORLD_H

# include "chunk.h"

typedef struct	s_world
{
	t_chunk		**chunks;
	size_t		chunks_nb;
}				t_world;

#endif
