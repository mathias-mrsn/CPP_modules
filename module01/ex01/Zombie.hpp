/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:09:07 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 12:57:03 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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