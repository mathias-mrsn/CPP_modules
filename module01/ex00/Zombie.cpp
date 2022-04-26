/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:26:01 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/26 13:53:34 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void) {
	return;
}

Zombie::Zombie (std::string name) : _name(name) {
	return ;
}

Zombie::~Zombie (void) {
	return;
}

void
	Zombie::setName (std::string name) {
		
	this->_name = name;
	return ;
}

std::string
	Zombie::getName (void) const {
	
	return (this->_name);
}

void
	Zombie::annonce (void) const {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." <<  std::endl;
}