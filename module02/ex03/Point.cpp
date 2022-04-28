/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:52:00 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/28 18:56:47 by mamaurai         ###   ########.fr       */
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
	Fixed tmp1(this->_x);
	Fixed tmp2(this->_y);

	if (&cpy == this) { return *this;}
	this->_x = tmp1;
	this->_y = tmp2;
	
	
}

float	Point::getXFloat (void) {return (this->_x.toFloat());}
float	Point::getYFloat (void) {return (this->_y.toFloat());}