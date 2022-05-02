/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:47:37 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/01 12:01:37 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

# define IDEAS_MAX 100

class Brain
{
	private:
		std::string _ideas[IDEAS_MAX];
	public:
		Brain (void);
		Brain (const Brain&);
		~Brain (void);

		Brain& operator=(const Brain&);

		std::string	getIdea(uint32_t) const;
		void		setIdea(uint32_t, const std::string);
};

#endif
