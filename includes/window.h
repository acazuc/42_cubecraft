/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 10:24:26 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 10:26:19 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WINDOW_H
# define WINDOW_H

typedef struct	s_window
{
	void		*mlx_window;
	void		*mlx;
	char		*name;
	int			width;
	int			height;
}				t_window;

#endif
