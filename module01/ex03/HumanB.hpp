/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:26:29 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 15:44:58 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string 		_name;
		Weapon				*_weapon;
	public:
		HumanB (std::string);
		~HumanB (void);
		void				attack(void) const ;
		void				setWeapon(Weapon &);
		
};

#endif