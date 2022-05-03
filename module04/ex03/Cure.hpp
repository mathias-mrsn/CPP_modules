/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:22:07 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/03 11:33:56 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure (void);
		Cure (const Cure&);
		~Cure (void);

		Cure&	 operator=(const Cure&);

		virtual AMateria* clone() const;
		virtual void use(ICharacter&);
};

#endif
