/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:55:51 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/03 19:20:23 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		const std::string&	_name;	
		int					_hit_point;
		int					_energy_point;
		int					_attack_damage;	
	public:
		ClapTrap (void);
		ClapTrap (const std::string &);
		ClapTrap (const ClapTrap&);
		~ClapTrap (void);

		ClapTrap&	operator=(const ClapTrap&);

		void attack(const std::string&);
		// void takeDamage(unsigned int);
		// void beRepaired(unsigned int);
};

#endif