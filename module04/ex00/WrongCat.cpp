/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:27:40 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 11:28:01 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat (void) : WrongAnimal("WrongCat")
{
	if (CPP_DEBUG) {std::cout << "WrongCat default constructor called" << std::endl;}
	return;
}

WrongCat::WrongCat (const WrongCat& ref)
{
	if (CPP_DEBUG) {std::cout << "WrongCat copy constructor called" << std::endl;}
	*this = ref;
}

WrongCat::~WrongCat (void)
{
	if (CPP_DEBUG) {std::cout << "WrongCat default destructor called" << std::endl;}
	return;
}

WrongCat&
WrongCat::operator=
(const WrongCat& ref)
{
	if (this == &ref) {return *this;}
	
	this->_type = ref._type;
	return (*this);
}

void
WrongCat::makeSound
(void) const
{
	std::cout << "Miaouuuuu !" << std::endl;
}