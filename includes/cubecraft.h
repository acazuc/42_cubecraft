/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cubecraft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 09:50:41 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 13:53:11 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBECRAFT_H
# define CUBECRAFT_H

# include "../libft/includes/libft.h"
# include "../mlx/mlx.h"
# include "../mlx/mlx_opengl.h"
# include "includes.h"
# include "env.h"
# include "prototypes.h"

# define ERROR(x) (error_quit(x, __FILE__, __LINE__))
# define GL_ERROR() (gl_error(__FILE__, __LINE__))
# define TRUE 1
# define FALSE 0

#endif
