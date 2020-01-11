/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacharle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 09:52:34 by cacharle          #+#    #+#             */
/*   Updated: 2020/01/11 10:14:29 by cacharle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

t_bool	parse_ceilling_color(t_state *state, char *line)
{
	int	tmp;

	line++;
	if ((tmp = ft_atoi(line)) > 255 || tmp < 0)
		return (FALSE);
	state->ceilling_color.rgb.r = (t_byte)tmp;
	if ((line = ft_strchr(line, ',') + 1) == NULL)
		return (FALSE);
	if ((tmp = ft_atoi(line)) > 255 || tmp < 0)
		return (FALSE);
	state->ceilling_color.rgb.g = (t_byte)tmp;
	if ((line = ft_strchr(line, ',') + 1) == NULL)
		return (FALSE);
	if ((tmp = ft_atoi(line)) > 255 || tmp < 0)
		return (FALSE);
	state->ceilling_color.rgb.b = (t_byte)tmp;
	return (TRUE);
}

t_bool	parse_floor_color(t_state *state, char *line)
{
	int	tmp;

	line++;
	if ((tmp = ft_atoi(line)) > 255 || tmp < 0)
		return (FALSE);
	state->floor_color.rgb.r = (t_byte)tmp;
	if ((line = ft_strchr(line, ',') + 1) == NULL)
		return (FALSE);
	if ((tmp = ft_atoi(line)) > 255 || tmp < 0)
		return (FALSE);
	state->floor_color.rgb.g = (t_byte)tmp;
	if ((line = ft_strchr(line, ',') + 1) == NULL)
		return (FALSE);
	if ((tmp = ft_atoi(line)) > 255 || tmp < 0)
		return (FALSE);
	state->floor_color.rgb.b = (t_byte)tmp;
	return (TRUE);
}