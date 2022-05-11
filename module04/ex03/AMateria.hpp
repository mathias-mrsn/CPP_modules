/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 09:56:28 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/11 11:42:36 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

# define MAX_SIZE 2048

class AMateria
{
	protected:
		std::string		_type;
		static AMateria*		_save[MAX_SIZE];
		static int 			_index;
	public:
		AMateria(std::string const & type);
		AMateria (void);
		AMateria (const AMateria&);
		virtual ~AMateria (void);

		AMateria&	 operator=(const AMateria&);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		static 	void clean ( void );
};

#endif