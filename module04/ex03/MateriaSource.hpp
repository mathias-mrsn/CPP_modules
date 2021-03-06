/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:07:13 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/11 11:08:27 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

# define NBR_MATERIA 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_tab[NBR_MATERIA];
		// AMateria* 	_stock[1024];
		
	public:
		MateriaSource (void);
		MateriaSource (const MateriaSource&);
		virtual ~MateriaSource (void);

		MateriaSource& operator=(const MateriaSource&);

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif