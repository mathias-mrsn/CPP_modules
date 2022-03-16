/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:09:07 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 13:25:54 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	
	private:
		std::string	_name;
		
	public:
		Zombie	(void);
		Zombie	(std::string);
		~Zombie	(void);

		void			setName (std::string);
		std::string		getName (void) const;
		
		void			annonce (void) const;
		
};

Zombie*		zombieHorde(int, std::string name);

#endif