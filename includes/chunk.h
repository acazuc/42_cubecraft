/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 10:03:59 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 10:05:13 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHUNK_H
# define CHUNK_H

# include "block.h"

typedef struct	s_chunk
{
	t_block		*blocks;
	int			x;
	int			y;
	int			z;
}				t_chunk;

#endif
