/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:53:06 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 15:33:08 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

void		error_quit(char *name, char *file, int line);
void		gl_error(char *file, int line);

t_window	*window_create(char *name, int width, int height);

t_world		*world_create(void);
void		world_add_chunk(t_world *world, t_chunk *chunk);
void		world_remove_chunk(t_world *world, t_chunk *chunk);
t_chunk		*world_get_chunk(t_world *world, int x, int z);
void		world_render(t_world *world);

t_chunk		*chunk_create(t_world *world, int x, int z);
void		chunk_draw(t_chunk *chunk);
void		chunk_render(t_chunk *chunk);
void		chunk_generate(t_chunk *chunk);

t_block		*block_create(t_chunk *chunk, int type, int x, int y, int z);
int			block_visible_face(t_block *block, int face);
void		block_draw(t_block *block);

#endif
