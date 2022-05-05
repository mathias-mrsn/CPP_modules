/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:26:40 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/05 09:44:26 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int	main(void) {
	
	Point a(0, 0);
	Point b(0, 15);
	Point c(18, 7);

	Point* tests = new Point[8];

	tests[0] = Point(0, 0);
	tests[1] = Point(10, 6);
	tests[2] = Point(4, 18);
	tests[3] = Point(9, 11);
	tests[4] = Point(0, 1);
	tests[5] = Point(0.001, 1);
	tests[6] = Point(2, 5);
	tests[7] = Point(18, 7);
	
	for (int i = 0; i < 8; i++)
	{
		std::cout << "Point x = " << tests[i].getXFloat() << ", y = " << tests[i].getYFloat() << " "; 
		if (true == bsp(a, b, c, tests[i]))
			std::cout << "is in" << std::endl;
		else
			std::cout << "is out" << std::endl;		
	}
	
	delete [] tests;

	return 0;
}
