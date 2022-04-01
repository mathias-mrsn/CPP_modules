/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:18:24 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/01 10:21:04 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int _rawBits = 8;

/*
**	CONSTRUCTORS
*/

Fixed::Fixed (void) : _value(0){
	
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed (const Fixed &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed (const int value) : _value(value * 256) {

	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed (const float value) : _value((int)roundf(value * 256)) {

	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::~Fixed (void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

/*
**	OPERATORS OVERLOAD
*/

Fixed&		Fixed::operator=(const Fixed &src) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = src._value;

	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Fixed& nb) {
	
	o << nb.toFloat();
	return (o);
}

/*
**	FUNCTIONS
*/

float
Fixed::toFloat (void) const {
	
	return ((float)this->_value / 256);
}

int
Fixed::toInt (void) const {
	
	return ((int)this->_value / 256);
}

int
Fixed::getRawBits (void) const {

	return (this->_value);
}

void
Fixed::setRawBits (int const value) {

	this->_value = value;		
}



