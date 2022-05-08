/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:45:21 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/08 12:51:26 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_FORM_HPP
# define PRESIDENTIALPARDON_FORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm (void);
		PresidentialPardonForm (const std::string);
		PresidentialPardonForm (const PresidentialPardonForm&);
		~PresidentialPardonForm (void);

		PresidentialPardonForm& 	operator=(const PresidentialPardonForm&);

		void	execute(Bureaucrat const & executor) const;
};

#endif