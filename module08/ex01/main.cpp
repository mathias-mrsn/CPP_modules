/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:03:32 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/17 13:39:19 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(50);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::vector<int> tab;
		tab.assign(5, -1);

		sp.addRange(tab.begin(), tab.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		tab.assign(5, 155);

		sp.addRange(tab.begin(), tab.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// try
	// {
	// 	Span sp = Span(6, 13);
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// } catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// try
	// {
	// 	Span sp = Span(25, 11);
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// } catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	
	return 0;
}