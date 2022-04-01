/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:18:24 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/01 11:37:08 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int _rawBits = 8;

/*
**	CONSTRUCTORS
*/

Fixed::Fixed (void) : _value(0){}
Fixed::Fixed (const Fixed &src) {*this = src;}
Fixed::Fixed (const int value) : _value(value * 256) {}
Fixed::Fixed (const float value) : _value((int)roundf(value * 256)) {}
Fixed::~Fixed (void) {}

/*
**	OPERATORS OVERLOAD
*/

Fixed&		Fixed::operator=(const Fixed &src) {
	
	this->_value = src._value;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Fixed& nb) {	
	
	o << nb.toFloat();
	return (o);
}

int		Fixed::operator<(const Fixed& nbr) {return (this->getRawBits() < nbr.getRawBits());}
int		Fixed::operator>(const Fixed& nbr) {return (this->getRawBits() > nbr.getRawBits());}
int		Fixed::operator<=(const Fixed& nbr) {return (this->getRawBits() <= nbr.getRawBits());}
int		Fixed::operator>=(const Fixed& nbr) {return (this->getRawBits() >= nbr.getRawBits());}
int		Fixed::operator==(const Fixed& nbr) {return (this->getRawBits() == nbr.getRawBits());}
int		Fixed::operator!=(const Fixed& nbr) {return (this->getRawBits() != nbr.getRawBits());}

Fixed		Fixed::operator+(const Fixed& nbr) {return (Fixed(this->toFloat() + nbr.toFloat()));}
Fixed		Fixed::operator-(const Fixed& nbr) {return (Fixed(this->toFloat() - nbr.toFloat()));}
Fixed		Fixed::operator*(const Fixed& nbr) {return (Fixed(this->toFloat() * nbr.toFloat()));}
Fixed		Fixed::operator/(const Fixed& nbr) {return (Fixed(this->toFloat() / nbr.toFloat()));}

Fixed		Fixed::operator++(int)
{
	Fixed tmp = *this;
	
	this->setRawBits(this->getRawBits() + 1);
	return (tmp);	
}

Fixed		Fixed::operator--(int)
{
	Fixed tmp = *this;
	
	this->setRawBits(this->getRawBits() - 1);
	return (tmp);	
}

Fixed		Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);	
}

Fixed		Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);	
}

/*
**	FUNCTIONS
*/

Fixed&
Fixed::min (Fixed& n1, Fixed& n2) {return ((n1 < n2) ? n1 : n2);}

const Fixed&
Fixed::min (const Fixed& n1, const Fixed& n2) {return ((n1.getRawBits() < n2.getRawBits()) ? n1 : n2);}

Fixed&
Fixed::max (Fixed& n1, Fixed& n2) {return ((n1 > n2) ? n1 : n2);}

const Fixed&
Fixed::max (const Fixed& n1, const Fixed& n2) {return ((n1.getRawBits() > n2.getRawBits()) ? n1 : n2);}

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

