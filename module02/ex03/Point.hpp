/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:31:35 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/28 19:33:14 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point (void);
		Point (const Point&);
		Point (const float, const float);
		~Point (void);

		float	getXFloat(void);
		float	getYFloat(void);
		
		Point&	operator=(const Point&);

};

bool
bsp(Point const a, Point const b, Point const c, Point const point);

#endif