/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 10:30:13 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/17 16:25:52 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cubecraft.h"

static void		context_init(t_env *env)
{
	glClearDepth(1.f);
	glClearColor(0.48f, 0.65f, 0.99f, 0.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthMask(GL_TRUE);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	GLdouble fW, fH;
	fH = tan(90.0 / 360. * M_PI) * 0.01f;
	fW = fH * ((float)env->window->width / (float)env->window->height);
	glFrustum(-fW, fW, -fH, fH, 0.01, 500.0);
	glMatrixMode(GL_MODELVIEW);
}

int		loop_hook(void *data)
{
	t_env	*env;

	env = (t_env*)data;
	context_init(env);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//world_add_chunk(env->world, chunk_create(env->world, 16, 0));
	glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex3f(-1, 1, 10);
	glVertex3f(1, 1, 10);
	glVertex3f(1, -1, 10);
	glVertex3f(-1, -1, 10);
	glEnd();
	GL_ERROR();
	world_render(env->world);
	mlx_opengl_swap_buffers(env->window->mlx_window);
	return (0);
}

int		main(void)
{
	t_env	env;

	env.window = window_create("acazuc", 1280, 720);
	context_init(&env);
	mlx_opengl_window_set_context(env.window->mlx_window);
	env.world = world_create();
	mlx_loop_hook(env.window->mlx, loop_hook, &env);
	mlx_loop(env.window->mlx);
	return (0);
}
