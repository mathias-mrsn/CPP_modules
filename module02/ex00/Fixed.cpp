/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:34:08 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/27 10:59:36 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void) : _fixed(0) {std::cout << "Default constructor called" << std::endl;}
Fixed::~Fixed (void) 			{std::cout << "Destructor called" << std::endl;}
Fixed::Fixed (const Fixed& cpy)	{std::cout << "Copy constructor called" << std::endl;*this = cpy;}

Fixed& 	Fixed::operator=(const Fixed& cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed = cpy.getRawBits();	
	return (*this);
}

int
Fixed::getRawBits(void) const {std::cout << "getRawBits member function called" << std::endl;return (this->_fixed);}

void
Fixed::setRawBits(const int raw) {std::cout << "setRawBits member function called" << std::endl;this->_fixed = raw;}