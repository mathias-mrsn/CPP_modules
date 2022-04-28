/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:52:00 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/28 19:22:21 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point (const float f1, const float f2) : _x(Fixed(f1)), _y(Fixed(f2)) {}
Point::Point (void) : _x(Fixed(0)), _y(Fixed(0)) {}
Point::~Point (void) {}
Point::Point (const Point& cpy) {*this = cpy;}

Point& Point::operator=(const Point& cpy)
{
	Fixed* x = (Fixed*)&this->_x;
	Fixed* y = (Fixed*)&this->_y;

	if (&cpy == this) { return *this;}
	*x = cpy._x;
	*y = cpy._y;
	
	return (*this);
}

float	Point::getXFloat (void) {return (this->_x.toFloat());}
float	Point::getYFloat (void) {return (this->_y.toFloat());}