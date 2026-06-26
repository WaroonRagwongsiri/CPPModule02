/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 14:57:10 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/26 15:35:45 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void get_point_info(Point p)
{
	std::cout << "A: x: " << p.getX() << " y: " << p.getY() << std::endl;
}

int	main(void)
{
	Point a;
	Point b(2, 10);
	Point c(2, -2);
	Point d(float(4), float(3));
	Point e(d);
	get_point_info(a);
	get_point_info(b);
	get_point_info(c);
	get_point_info(d);
	get_point_info(e);
	return (0);
}
