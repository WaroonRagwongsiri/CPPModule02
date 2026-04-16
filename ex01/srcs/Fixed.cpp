/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroo <waroo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:23:09 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/04/16 21:05:24 by waroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << DEFAULT_CLS_MSG << std::endl;
	this->fixed_number = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << COPY_CLS_MSG << std::endl;
	this->fixed_number = other.fixed_number;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout << COPY_OP_MSG << std::endl;
	if (this == &other)
		return (*this);
	this->fixed_number = other.fixed_number;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << DCLS_MSG << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << GET_RAW_BIT_MSG << std::endl;
	return this->fixed_number;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << SET_RAW_BIT_MSG << std::endl;
	this->fixed_number = raw;
}

Fixed::Fixed(const int intVal)
{
	this->fixed_number = intVal << this->fraction;
}

Fixed::Fixed(const float floatVal)
{
	this->fixed_number = roundf(floatVal * (1 << this->fraction));
}

float Fixed::toFloat() const
{
	return (float) this->fixed_number / (1 << this->fraction);
}

int Fixed::toInt() const
{
	return this->fixed_number >> this->fraction;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}
