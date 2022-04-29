/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:55:51 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/29 15:10:14 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string			_name;	
		int					_hit_point;
		int					_energy_point;
		int					_attack_damage;

		static const int	_default_hit_point;
		static const int	_default_energy_point;
		static const int	_default_attack_damage;

	public:
		ClapTrap (void);
		ClapTrap (const std::string &);
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