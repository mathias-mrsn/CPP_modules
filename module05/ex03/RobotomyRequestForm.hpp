/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:51:37 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/08 12:52:41 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm (void);
		RobotomyRequestForm (const std::string);
		RobotomyRequestForm (const RobotomyRequestForm&);
		~RobotomyRequestForm (void);

		RobotomyRequestForm& 	operator=(const RobotomyRequestForm&);

		void	execute(Bureaucrat const & executor) const;
};

#endif