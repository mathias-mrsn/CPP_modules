/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:52:52 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 13:44:31 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain (void)
{
	if (CPP_DEBUG) {std::cout << "Brain default constructor called" << std::endl;}
	return;
}

Brain::Brain (const Brain& ref)
{
	if (CPP_DEBUG) {std::cout << "Brain copy constructor called" << std::endl;}
	*this = ref;
}

Brain::~Brain (void)
{
	if (CPP_DEBUG) {std::cout << "Brain default destructor called" << std::endl;}
	return;
}

Brain&
Brain::operator=
(const Brain& ref)
{
	if (this == &ref) {return *this;}

	for (int i = 0; i < IDEAS_MAX; i++)
		this->_ideas[i] = ref._ideas[i];
	return (*this);
}

std::string
Brain::getIdea
(uint32_t id) const
{
	if (id >= IDEAS_MAX)
		return ("out of the range");
	else
		return (this->_ideas[id]);
}

void
Brain::setIdea
(uint32_t id, std::string idea)
{
	if (id >= IDEAS_MAX) {return;}
	this->_ideas[id] = idea;
}