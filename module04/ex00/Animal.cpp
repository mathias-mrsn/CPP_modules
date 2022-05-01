/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:18:51 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 10:36:13 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* CONSTRUCTORS - DESTRUCTORS */

Animal::Animal (void) : _type("UNKNOWN")
{
	if (CPP_DEBUG) {std::cout << "Animal default constructor called" << std::endl;}
	return;
}

Animal::Animal (std::string type) : _type(type)
{
	if (CPP_DEBUG) {std::cout << "Animal string constructor called" << std::endl;}
	return;
}

Animal::Animal (const Animal& ref)
{
	if (CPP_DEBUG) {std::cout << "Animal copy constructor called" << std::endl;}
	*this = ref;
}

Animal::~Animal (void)
{
	if (CPP_DEBUG) {std::cout << "Animal default destructor called" << std::endl;}
	return;
}

/* OPERATORS OVERLOAD */

Animal&
Animal::operator=
(const Animal& ref)
{
	if (this == &ref) {return *this;}
	
	this->_type = ref._type;
	return (*this);
}

/* MEMBER FUNCTIONS */

void
Animal::makeSound
(void) const
{
	std::cout << "Animal make sound" << std::endl;
}

std::string
Animal::getType
(void) const
{
	return (this->_type);
}

void
Animal::setType
(std::string type)
{
	this->_type = type;
}

