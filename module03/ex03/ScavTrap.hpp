/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 14:44:42 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/30 16:53:26 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public: 
		ScavTrap (void);
		ScavTrap (const ScavTrap&);
		ScavTrap (const std::string&);
		~ScavTrap (void);

		ScavTrap& 	operator=(const ScavTrap&);

		void		guardGate (void);
		void		attack (const std::string&);
};

#endif