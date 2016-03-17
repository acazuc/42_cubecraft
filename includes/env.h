/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 10:28:41 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 10:29:56 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

# include "window.h"
# include "world.h"

typedef struct	s_env
{
	t_window	*window;
	t_world		*world;
}				t_env;

#endif
