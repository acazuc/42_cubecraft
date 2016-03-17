/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 10:03:59 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 14:00:50 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHUNK_H
# define CHUNK_H

# include "block.h"

# define CHUNK_WIDTH (16)
# define CHUNK_HEIGHT (256)

typedef struct s_world	t_world;

typedef struct	s_chunk
{
	t_world		*world;
	t_block		*blocks[CHUNK_WIDTH][CHUNK_HEIGHT][CHUNK_WIDTH];
	GLuint		gl_list;
	int			x;
	int			z;
}				t_chunk;

#endif
