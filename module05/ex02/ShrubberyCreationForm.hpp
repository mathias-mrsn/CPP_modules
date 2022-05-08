/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:52:52 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/08 13:48:11 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm (void);
		ShrubberyCreationForm (const std::string);
		ShrubberyCreationForm (const ShrubberyCreationForm&);
		~ShrubberyCreationForm (void);

		ShrubberyCreationForm& 	operator=(const ShrubberyCreationForm&);

		void	execute(Bureaucrat const & executor) const;
};

#endif