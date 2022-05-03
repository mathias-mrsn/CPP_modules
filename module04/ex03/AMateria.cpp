/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:12:47 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/03 11:24:56 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria (void) : _type((std::string &)"none") {}
AMateria::AMateria (std::string const & type) : _type((std::string &)type) {}
AMateria::~AMateria (void) {}

std::string const &
AMateria::getType (void) const
{
	return (this->_type);
}

void
AMateria::use (ICharacter& target)
{}