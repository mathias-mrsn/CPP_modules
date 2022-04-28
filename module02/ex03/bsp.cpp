/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:31:10 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/28 19:32:13 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

// Source : https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle

float
sign (Point a, Point b, Point c)
{
	return ((a.getXFloat() - c.getXFloat()) * (b.getYFloat() - c.getYFloat()) - (b.getXFloat() - c.getXFloat()) * (a.getYFloat() - c.getYFloat()));
}

bool
bsp(Point const a, Point const b, Point const c, Point const point)
{
	float d1, d2, d3;
	bool neg, pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(neg && pos);
}
