/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:24:28 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/05 18:08:13 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int
main (int ac, char **av)
{
	try
	{
		Bureaucrat		paul = Bureaucrat("Paul", 1);
		std::cout << paul << std::endl;
		paul.lowerRank(10);
		std::cout << paul << std::endl;
		paul.upperRank(10);
		std::cout << paul << std::endl;
		paul.upperRank(10);
		std::cout << paul << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	
	// try
	// {
	// 	Bureaucrat		paul = Bureaucrat("Paul", 150);
	// 	std::cout << paul << std::endl;
	// 	paul.upperRank(10);
	// 	std::cout << paul << std::endl;
	// 	paul.lowerRank(10);
	// 	std::cout << paul << std::endl;
	// 	paul.lowerRank(10);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << std::endl;
	
	
	// try
	// {
	// 	Bureaucrat		paul = Bureaucrat("Paul", 0);
	// 	std::cout << paul << std::endl;
	// 	paul.lowerRank(10);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << std::endl;
	
	
	// try
	// {
	// 	Bureaucrat		paul = Bureaucrat("Paul", 151);
	// 	std::cout << paul << std::endl;
	// 	paul.upperRank(10);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	
}