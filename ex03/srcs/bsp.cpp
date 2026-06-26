/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 15:36:37 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/26 21:08:44 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	px(Point const p)
{
	return (p.getX().toFloat());
}

static float	py(Point const p)
{
	return (p.getY().toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1 = (px(b) - px(a)) * (py(point) - py(a)) - (py(b) - py(a)) * (px(point) - px(a));
	float	d2 = (px(c) - px(b)) * (py(point) - py(b)) - (py(c) - py(b)) * (px(point) - px(b));
	float	d3 = (px(a) - px(c)) * (py(point) - py(c)) - (py(a) - py(c)) * (px(point) - px(c));

	bool has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	bool has_zero = (d1 == 0) || (d2 == 0) || (d3 == 0);

	if (has_zero)
		return (false);
	return !(has_neg && has_pos);
}
