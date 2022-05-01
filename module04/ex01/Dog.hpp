/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:48:44 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 12:15:58 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		Dog (void);
		Dog (const Dog&);
		virtual ~Dog (void);

		Dog& operator= (const Dog&);

		void	makeSound (void) const;
		std::string	getIdea(uint32_t) const;
		void		setIdea(uint32_t, const std::string);
};

#endif