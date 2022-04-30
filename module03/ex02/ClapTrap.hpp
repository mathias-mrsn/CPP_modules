/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:55:51 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/30 15:06:17 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

# if !defined(CPP_DEBUG)
# define CPP_DEBUG 1
# endif

class ClapTrap
{
	protected:
		std::string			_name;	
		int					_hit_point;
		int					_energy_point;
		int					_attack_damage;

	public:
		ClapTrap (void);
		ClapTrap (const std::string &);
		ClapTrap (const std::string &, const int, const int, const int);
		ClapTrap (const ClapTrap&);
		~ClapTrap (void);

		ClapTrap&	operator=(const ClapTrap&);

		std::string 	getName (void);
		int				getAttackDamage (void);
		int				getHitPoint (void);
		int				getEnergyPoint (void);

		void attack(const std::string&);
		void takeDamage(uint32_t);
		void beRepaired(uint32_t);
};

#endif