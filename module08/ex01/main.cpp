/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:03:32 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/19 13:48:53 by mamaurai         ###   ########.fr       */
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

		std::cout << std::endl << "Span : " << std::endl << std::endl;

		sp.putSpan();

		std::cout << "shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "longuest : " << sp.longestSpan() << std::endl;

		std::vector<int> tab;
		tab.push_back(1);
		tab.push_back(3);
		tab.push_back(5);
		tab.push_back(7);
		tab.push_back(9);

		sp.addRange(tab.begin(), tab.end());

		std::cout << std::endl << "Span : " << std::endl << std::endl;

		sp.putSpan();

		std::cout << "shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "longuest : " << sp.longestSpan() << std::endl;

		tab.push_back(13);
		tab.push_back(354);
		tab.push_back(35);
		tab.push_back(136);
		tab.push_back(185);

		sp.addRange(tab.begin() + 5, tab.end());


		std::cout << std::endl << "Span : " << std::endl << std::endl;

		sp.putSpan();
			
		std::cout << "shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "longuest : " << sp.longestSpan() << std::endl;
		
	} catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}