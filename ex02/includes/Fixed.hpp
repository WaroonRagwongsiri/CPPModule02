/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroo <waroo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:22:11 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/04/16 21:06:04 by waroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <ostream>
# include <cmath>

# define FRACTION 8

# define DEFAULT_CLS_MSG "Default constructor called"
# define COPY_CLS_MSG "Copy constructor called"
# define COPY_OP_MSG "Copy assignment operator called"
# define DCLS_MSG "Destructor called"
# define GET_RAW_BIT_MSG "getRawBits member function called"
# define SET_RAW_BIT_MSG "setRawBits member function called"

class Fixed
{
private:
	int					fixed_number;
	static const int	fraction = FRACTION;
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed(const int intVal);
	Fixed(const float floatVal);
	float toFloat( void ) const;
	int toInt( void ) const;

	// Comparision
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	// Arithmetic
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;

	// In/Decrement
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);

	// min,max
	static Fixed& min(Fixed& l, Fixed& r);
	static const Fixed& min(const Fixed& l, const Fixed& r);
	static Fixed& max(Fixed& l, Fixed& r);
	static const Fixed& max(const Fixed& l, const Fixed& r);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif