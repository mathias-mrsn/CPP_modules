/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:41:21 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 12:19:07 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat (void) : Animal("Cat")
{
	if (CPP_DEBUG) {std::cout << "Cat default constructor called" << std::endl;}
	this->_brain = new Brain();
	return;
}

Cat::Cat (const Cat& ref)
{
	if (CPP_DEBUG) {std::cout << "Cat copy constructor called" << std::endl;}
	this->_brain = new Brain();
	*this = ref;
}

Cat::~Cat (void)
{
	if (CPP_DEBUG) {std::cout << "Cat default destructor called" << std::endl;}
	delete (this->_brain);
	return;
}

Cat&
Cat::operator=
(const Cat& ref)
{
	if (this == &ref) {return *this;}
	
	this->_type = ref._type;
	return (*this);
}

void
Cat::makeSound
(void) const
{
	std::cout << "Miaouuuuu !" << std::endl;
}

std::string
Cat::getIdea
(uint32_t id) const
{
	return (this->_brain->getIdea(id));
}

void
Cat::setIdea
(uint32_t id, std::string idea)
{
	this->_brain->setIdea(id, idea);
}