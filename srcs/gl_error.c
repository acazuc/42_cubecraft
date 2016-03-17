/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gl_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 12:50:45 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 15:35:22 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

static char		*get_str_error(GLenum error)
{
	if (error == GL_INVALID_ENUM)
		return ("GL_INVALID_ENUM");
	else if (error == GL_INVALID_VALUE)
		return ("GL_INVALID_VALUE");
	else if (error == GL_INVALID_OPERATION)
		return ("GL_INVALID_OPERATION");
	else if (error == GL_STACK_UNDERFLOW)
		return ("GL_STACK_UNDERFLOW");
	else if (error == GL_OUT_OF_MEMORY)
		return ("GL_OUT_OF_MEMORY");
	else if (error == GL_INVALID_FRAMEBUFFER_OPERATION)
		return ("GL_INVALID_FRAMEBUFFER_OPERATION");
	else if (error == GL_TABLE_TOO_LARGE)
		return ("GL_TABLE_TOO_LARGE");
	return ("GL_UNKNOWN_ERROR");
}

void			gl_error(char *file, int line)
{
	GLenum	error;
	char	*err_str;
	
	error = GL_NO_ERROR;
	if ((error = glGetError()) != GL_NO_ERROR)
	{
		err_str = get_str_error(error);
		ft_putstr_fd(err_str, 2);
		ft_putstr_fd(" did happend (", 2);
		ft_putstr_fd(file, 2);
		ft_putchar_fd(':', 2);
		ft_putnbr_fd(line, 2);
		ft_putstr_fd(")\n", 2);
		exit(0);
	}
}
