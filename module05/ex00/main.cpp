/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:24:28 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/06 09:42:37 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int
main (int ac, char **av)
{
	try
	{
		Bureaucrat		test = Bureaucrat("Paul", 1);
		std::cout << test << std::endl;
		test.lowerRank(10);
		std::cout << test << std::endl;
		test.upperRank(10);
		std::cout << test << std::endl;
		test.upperRank(10);
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat		test = Bureaucrat("Paul", 1);
		std::cout << test << std::endl;
		test.lowerRank(100);
		std::cout << test << std::endl;
		test.upperRank(10);
		std::cout << test << std::endl;
		test.lowerRank(100);
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat		test = Bureaucrat("Paul", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat		test = Bureaucrat("Paul", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	
}