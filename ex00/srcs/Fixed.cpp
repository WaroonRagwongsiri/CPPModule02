/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:23:09 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/04/15 17:44:57 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_number = 0;
}

Fixed::Fixed(const Fixed& other)
{
}

Fixed &Fixed::operator=(const Fixed& other)
{
	if (this == &other)
		return (*this);
	this->fixed_number = other.fixed_number;
	return (*this);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
	return this->fixed_number;
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_number = raw;
}
