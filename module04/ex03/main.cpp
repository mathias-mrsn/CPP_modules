/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:02:00 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/11 14:06:41 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	ICharacter* ennemi = new Character("ennemi");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(0, *ennemi);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(1, *ennemi);
	tmp = src->createMateria("unknown materia");
	me->equip(tmp);
	me->use(2, *ennemi);
	
	me->unequip(1);
	me->use(1, *ennemi);
	
	IMateriaSource* src2 = new MateriaSource();

	src2->learnMateria(new Cure());
	src2->learnMateria(new Ice());

	me->equip(src2->createMateria("cure"));
	me->equip(src2->createMateria("ice"));

	std::cout << std::endl;

	for (int i = 0; i < NBR_MATERIA; i++)
		me->use(i, *ennemi);
	
	delete src2;
	delete me;
	delete src;
	delete ennemi;

	AMateria::clean();
	return 0;
}