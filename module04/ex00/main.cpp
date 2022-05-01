/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:50:22 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 11:37:10 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"

int main()
{

	std::cout << "CAT - DOG - ANIMAL TESTS" << std::endl << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;	
	std::cout << meta->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "WRONGCAT - WRONGANIMAL TESTS" << std::endl << std::endl;
	
	const WrongAnimal* meta_bis = new WrongAnimal();
	const WrongAnimal* i_bis = new WrongCat();

	std::cout << i_bis->getType() << " " << std::endl;
	std::cout << meta_bis->getType() << " " << std::endl;

	i_bis->makeSound();
	meta_bis->makeSound();

	delete i_bis;
	delete meta_bis;

	return 0;
}