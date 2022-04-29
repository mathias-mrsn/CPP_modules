/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:34:08 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/29 11:45:25 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_bits = 8;

Fixed::Fixed (void) : _fixed(0) {}
Fixed::Fixed (int const i) : _fixed(i * (1 << Fixed::_bits)) {};
Fixed::Fixed (float const f) : _fixed((int)roundf(f * (1 << Fixed::_bits))) {};
Fixed::~Fixed (void) {}
Fixed::Fixed (const Fixed& cpy)	{*this = cpy;}

/*
	OPERATORS OVERLOAD
*/

int		Fixed::operator>(const Fixed& n) {return (this->getRawBits() > n.getRawBits());}
int		Fixed::operator<(const Fixed& n) {return (this->getRawBits() < n.getRawBits());}
int		Fixed::operator>=(const Fixed& n) {return (this->getRawBits() >= n.getRawBits());}
int		Fixed::operator<=(const Fixed& n) {return (this->getRawBits() <= n.getRawBits());}
int		Fixed::operator==(const Fixed& n) {return (this->getRawBits() == n.getRawBits());}
int		Fixed::operator!=(const Fixed& n) {return (this->getRawBits() != n.getRawBits());}

Fixed	Fixed::operator+(const Fixed& cpy) {return (Fixed(this->toFloat() + cpy.toFloat()));}
Fixed	Fixed::operator-(const Fixed& cpy) {return (Fixed(this->toFloat() - cpy.toFloat()));}
Fixed	Fixed::operator*(const Fixed& cpy) {return (Fixed(this->toFloat() * cpy.toFloat()));}
Fixed	Fixed::operator/(const Fixed& cpy) {return (Fixed(this->toFloat() / cpy.toFloat()));}

Fixed	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(__attribute__((unused)) int unused)
{
	Fixed a(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (a);
	
}

Fixed	Fixed::operator--(__attribute__((unused)) int unused)
{
	Fixed a(*this);

	this->setRawBits(this->getRawBits() - 1);
	return (a);
	
}

Fixed& 	Fixed::operator=(const Fixed& cpy)
{
	this->_fixed = cpy.getRawBits();	
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Fixed& src)
{
	o << src.toFloat();
	return (o);
}

/*
	MEMBER FUNCTIONS
*/

int
Fixed::getRawBits(void) const {return (this->_fixed);}

void
Fixed::setRawBits(const int raw) {this->_fixed = raw;}

int
Fixed::toInt(void) const {return ((int)(this->_fixed / (1 << Fixed::_bits)));}

float
Fixed::toFloat(void) const {return ((float)this->_fixed / (1 << Fixed::_bits));}

Fixed&
Fixed::min(Fixed& n1, Fixed& n2) {return ((n1 < n2) ? n1 : n2);}

Fixed&
Fixed::max(Fixed& n1, Fixed& n2) {return ((n1 > n2) ? n1 : n2);}

const Fixed&
Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if (n1.getRawBits() < n2.getRawBits())
		return (n1);
	else
		return (n2);
}

const Fixed&
Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if (n1.getRawBits() > n2.getRawBits())
		return (n1);
	else
		return (n2);
}