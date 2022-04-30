/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:30:10 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/30 17:19:13 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string 		name;
	public:
		DiamondTrap (void);
		DiamondTrap (const DiamondTrap&);
		DiamondTrap (const std::string&);
		~DiamondTrap (void);

		DiamondTrap& operator=(const DiamondTrap&);

		void whoAmI (void) const;
		void attack (const std::string&);
};


#endif