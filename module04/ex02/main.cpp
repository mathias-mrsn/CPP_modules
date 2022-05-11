/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:50:22 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/09 15:54:53 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include "Cat.hpp"

# define NBR_ANIMAL 10

int	main(void)
{
	Animal* cat = new Cat();
	std::string s1 = "miouaaa";
	std::string s2 = "grrrrrr";

	cat->setIdea(2, s2);
	cat->setIdea(67, s1);
	cat->setIdea(33, s2);

	std::cout << "Idea n.2 is " << cat->getIdea(2) << std::endl;
	std::cout << "Idea n.67 is " << cat->getIdea(67) << std::endl;
	std::cout << "Idea n.33 is " << cat->getIdea(33) << std::endl;
	std::cout << "Idea n.1 is " << cat->getIdea(1) << std::endl;

	delete (cat);

	std::cout << std::endl;

	return (0);
}