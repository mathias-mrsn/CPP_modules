/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 16:19:32 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/30 16:20:13 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public: 
		FragTrap (void);
		FragTrap (const FragTrap&);
		FragTrap (const std::string&);
		~FragTrap (void);

		FragTrap& 	operator=(const FragTrap&);

		void		highFivesGuys (void);
};

#endif