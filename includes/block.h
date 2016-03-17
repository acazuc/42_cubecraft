/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 10:05:23 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 14:00:33 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BLOCK_H
# define BLOCK_H

typedef struct s_chunk	t_chunk;

typedef struct	s_block
{
	t_chunk		*chunk;
	int			type;
	int			r_x;
	int			r_z;
	int			x;
	int			y;
	int			z;
}				t_block;

#endif
