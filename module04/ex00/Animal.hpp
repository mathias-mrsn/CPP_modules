/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:04:44 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 10:40:43 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# if !defined(CPP_DEBUG)
# define CPP_DEBUG 1
# endif

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal (void);
		Animal (const std::string type);
		Animal (const Animal&);
		virtual ~Animal (void);

		Animal&	operator= (const Animal&);
		
		virtual void	makeSound (void) const;
		std::string		getType (void) const;
		void			setType (const std::string type);
};

#endif