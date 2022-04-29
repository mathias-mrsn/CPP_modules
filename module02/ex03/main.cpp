/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:26:40 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/29 10:09:54 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int	main(void) {
	
	Point a(0, 0);
	Point b(5, 15);
	Point c(18, 7);

	Point* tests = new Point[5];

	tests[0] = Point(3, 5);
	tests[1] = Point(10, 6);
	tests[2] = Point(4, 18);
	tests[3] = Point(9, 11);
	tests[4] = Point(0, 1);
	
	for (int i = 0; i < 5; i++)
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

/*

xxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxx2xxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxbxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxxxxx3xxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxxxxxx1xxxxxxxxx
xxx0xxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
xxxxxxxxxxxxxxxxxxxx
x4xxxxxxxxxxxxxxxxxx
axxxxxxxxxxxxxxxxxcx

*/