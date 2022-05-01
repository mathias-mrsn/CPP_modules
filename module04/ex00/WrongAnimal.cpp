/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:25:43 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 11:25:46 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* CONSTRUCTORS - DESTRUCTORS */

WrongAnimal::WrongAnimal (void) : _type("UNKNOWN")
{
	if (CPP_DEBUG) {std::cout << "WrongAnimal default constructor called" << std::endl;}
	return;
}

WrongAnimal::WrongAnimal (std::string type) : _type(type)
{
	if (CPP_DEBUG) {std::cout << "WrongAnimal string constructor called" << std::endl;}
	return;
}

WrongAnimal::WrongAnimal (const WrongAnimal& ref)
{
	if (CPP_DEBUG) {std::cout << "WrongAnimal copy constructor called" << std::endl;}
	*this = ref;
}

WrongAnimal::~WrongAnimal (void)
{
	if (CPP_DEBUG) {std::cout << "WrongAnimal default destructor called" << std::endl;}
	return;
}

/* OPERATORS OVERLOAD */

WrongAnimal&
WrongAnimal::operator=
(const WrongAnimal& ref)
{
	if (this == &ref) {return *this;}
	
	this->_type = ref._type;
	return (*this);
}

/* MEMBER FUNCTIONS */

void
WrongAnimal::makeSound
(void) const
{
	std::cout << "WrongAnimal make sound" << std::endl;
}

std::string
WrongAnimal::getType
(void) const
{
	return (this->_type);
}

void
WrongAnimal::setType
(std::string type)
{
	this->_type = type;
}