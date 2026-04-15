/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:23:09 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/04/15 18:11:17 by waroonwork@      ###   ########.fr       */
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
