/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:18:24 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/17 18:39:35 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int _rawBits = 8;

Fixed::Fixed (void) : _value(0){
	
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed (const Fixed &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed (void) {

	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &		Fixed::operator=(const Fixed &src) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = src.getRawBits();

	return (*this);
}

int
	Fixed::getRawBits (void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void
	Fixed::setRawBits (int const value) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_value = value;		
}



