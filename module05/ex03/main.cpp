/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:24:28 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/08 16:09:21 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern	someRandomIntern;
	AForm	*rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (rrf)
		rrf->execute(Bureaucrat("bob", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
		rrf->execute(Bureaucrat("phil", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	if (rrf)
		rrf->execute(Bureaucrat("lucas", 1));
	delete rrf;

	rrf = someRandomIntern.makeForm("not existing", "Bender");

	return 0;
}