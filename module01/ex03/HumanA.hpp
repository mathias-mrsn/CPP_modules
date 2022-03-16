/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:26:44 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 15:42:35 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string 		_name;
		Weapon&				_weapon;
	public:
		HumanA (std::string, Weapon&);
		~HumanA (void);
		void				attack(void) const ;
		void				setWeapon(Weapon &);
		
};

#endif