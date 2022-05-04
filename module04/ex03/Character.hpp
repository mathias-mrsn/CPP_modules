/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:09:58 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/04 11:43:08 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

# define NBR_MATERIA 4

class Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria*		_tab[NBR_MATERIA]; 
	public:
		Character (void);
		Character (const Character&);
		Character (const std::string);
		virtual ~Character(void);

		Character&	 operator=(const Character&);
		
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif