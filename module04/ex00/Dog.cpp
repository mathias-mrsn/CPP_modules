/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:49:14 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 10:49:44 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog (void) : Animal("Dog")
{
	if (CPP_DEBUG) {std::cout << "Dog default constructor called" << std::endl;}
	return;
}

Dog::Dog (const Dog& ref)
{
	if (CPP_DEBUG) {std::cout << "Dog copy constructor called" << std::endl;}
	*this = ref;
}

Dog::~Dog (void)
{
	if (CPP_DEBUG) {std::cout << "Dog default destructor called" << std::endl;}
	return;
}

Dog&
Dog::operator=
(const Dog& ref)
{
	if (this == &ref) {return *this;}
	
	this->_type = ref._type;
	return (*this);
}

void
Dog::makeSound
(void) const
{
	std::cout << "Ouaaaf !" << std::endl;
}