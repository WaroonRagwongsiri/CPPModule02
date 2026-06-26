/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 14:55:39 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/26 15:33:19 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float x, const float y) : x(x), y(y)
{
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{
}

Point& Point::operator=(const Point& other)
{
	if (this == &other)
		return *this;
	(Fixed) this->y = other.x;
	(Fixed) this->x = other.y;
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

Point::~Point()
{
}

Fixed Point::getX()
{
	return (this->x);
}

Fixed Point::getY()
{
	return (this->y);
}
