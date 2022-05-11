/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:50:53 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/11 11:09:12 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource (void)
{
	for (int i = 0; i < NBR_MATERIA; i++)
		this->_tab[i] = NULL;
}

MateriaSource::MateriaSource (const MateriaSource& ref) {*this = ref;}
MateriaSource::~MateriaSource (void) {}

MateriaSource&
MateriaSource::operator=(const MateriaSource& ref)
{
	if (this == &ref) {return *this;}

	for (int i = 0; i < NBR_MATERIA; i++)
		this->_tab[i] = ref._tab[i];
	return (*this);
}

void
MateriaSource::learnMateria (AMateria* m)
{
	for (int i = 0; i < NBR_MATERIA; i++)
	{
		if (this->_tab[i] == NULL)
		{
			this->_tab[i] = m;
			break;
		}
	}
}

AMateria*
MateriaSource::createMateria (std::string const& type)
{
	for (int i = 0; i < NBR_MATERIA; i++)
	{
		if (this->_tab[i]->getType() == type)
			return (this->_tab[i]->clone());
	}
	return (0);
}