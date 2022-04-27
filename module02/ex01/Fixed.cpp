/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:34:08 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/27 13:38:05 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed (void) : _fixed(0) {std::cout << "Default constructor called" << std::endl;}
Fixed::Fixed (int const i) : _fixed(i * (1 << Fixed::_bits)) {std::cout << "Int constructor called" << std::endl;};
Fixed::Fixed (float const f) : _fixed((int)roundf(f * (1 << Fixed::_bits))) {std::cout << "Float constructor called" << std::endl;};
Fixed::~Fixed (void) 			{std::cout << "Destructor called" << std::endl;}
Fixed::Fixed (const Fixed& cpy)	{std::cout << "Copy constructor called" << std::endl;*this = cpy;}

Fixed& 	Fixed::operator=(const Fixed& cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = cpy.getRawBits();	
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Fixed& src)
{
	o << src.toFloat();
	return (o);
}

int
Fixed::getRawBits(void) const {return (this->_fixed);}

void
Fixed::setRawBits(const int raw) {this->_fixed = raw;}

int
Fixed::toInt(void) const {return ((int)(this->_fixed / (1 << Fixed::_bits)));}

float
Fixed::toFloat(void) const {return ((float)this->_fixed / (1 << Fixed::_bits));}