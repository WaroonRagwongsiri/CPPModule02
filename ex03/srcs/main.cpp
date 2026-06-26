/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 14:57:10 by waroonwork@       #+#    #+#    */
/*   Updated: 2026/06/26 21:10:00 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void	get_point_info(const Point p, std::string name)
{
	std::cout << name << ": " << "x: " << p.getX() << " y: " << p.getY() << std::endl;
}

void	testcase(Point const a, Point const b, Point const c, Point const p)
{
	get_point_info(a, "Vertice 1");
	get_point_info(b, "Vertice 2");
	get_point_info(c, "Vertice 3");
	get_point_info(p, "Point");
	if (bsp(a, b, c, p))
		std::cout << "Is in triangle" << std::endl;
	else
		std::cout << "NOT in triangle" << std::endl;
	std::cout << std::endl;
}

int	main(void)
{
	// Inside
	const Point t1_a(0, 0);
	const Point t1_b(5, 0);
	const Point t1_c(0, 5);
	const Point t1_p(1, 1);
	testcase(t1_a, t1_b, t1_c, t1_p);

	const Point t2_a(0, 0);
	const Point t2_b(10, 0);
	const Point t2_c(0, 10);
	const Point t2_p(3, 2);
	testcase(t2_a, t2_b, t2_c, t2_p);

	const Point t3_a(0, 0);
	const Point t3_b(10, 0);
	const Point t3_c(5, 8);
	const Point t3_p(5, 2);
	testcase(t3_a, t3_b, t3_c, t3_p);

	const Point t4_a(0, 0);
	const Point t4_b(20, 0);
	const Point t4_c(10, 15);
	const Point t4_p(10, 4);
	testcase(t4_a, t4_b, t4_c, t4_p);

	// Outside
	const Point t5_a(0, 0);
	const Point t5_b(5, 0);
	const Point t5_c(0, 5);
	const Point t5_p(3, 3);
	testcase(t5_a, t5_b, t5_c, t5_p);

	const Point t6_a(0, 0);
	const Point t6_b(10, 0);
	const Point t6_c(0, 10);
	const Point t6_p(15, 15);
	testcase(t6_a, t6_b, t6_c, t6_p);

	const Point t7_a(0, 0);
	const Point t7_b(10, 0);
	const Point t7_c(5, 8);
	const Point t7_p(5, 10);
	testcase(t7_a, t7_b, t7_c, t7_p);

	const Point t8_a(0, 0);
	const Point t8_b(20, 0);
	const Point t8_c(10, 15);
	const Point t8_p(-5, -3);
	testcase(t8_a, t8_b, t8_c, t8_p);

	// Edge
	const Point t9_a(0, 0);
	const Point t9_b(5, 0);
	const Point t9_c(0, 5);
	const Point t9_p(2.5f, 0);
	testcase(t9_a, t9_b, t9_c, t9_p);

	const Point t10_a(0, 0);
	const Point t10_b(10, 0);
	const Point t10_c(5, 8);
	const Point t10_p(2.5f, 4);
	testcase(t10_a, t10_b, t10_c, t10_p);

	return (0);
}
