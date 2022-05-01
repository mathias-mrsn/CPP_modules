/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 10:38:03 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 12:16:08 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		Cat (void);
		Cat (const Cat&);
		virtual ~Cat (void);

		Cat& operator= (const Cat&);

		void		makeSound (void) const;
		std::string	getIdea(uint32_t) const;
		void		setIdea(uint32_t, const std::string);
};

#endif