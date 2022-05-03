/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:24:58 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/03 11:25:52 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice (void);
		Ice (const Ice&);
		~Ice (void);

		Ice&	 operator=(const Ice&);

		virtual AMateria* clone() const;
		virtual void use(ICharacter&);
};

#endif