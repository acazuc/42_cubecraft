/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:53:06 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 13:52:26 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

void		error_quit(char *name, char *file, int line);

t_window	*window_create(char *name, int width, int height);

t_world		*world_create(void);
void		world_add_chunk(t_world *world, t_chunk *chunk);
void		world_render(t_world *world);

t_chunk		*chunk_create(t_world *world, int x, int z);
void		chunk_draw(t_chunk *chunk);
void		chunk_render(t_chunk *chunk);

#endif
