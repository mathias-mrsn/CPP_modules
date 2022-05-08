/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:34:08 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/08 16:28:25 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

# define NBR_FORMS 3

Intern::Intern (void)
{
	if (CPP_DEBUG) {std::cout << "Intern default constructor called" << std::endl;}
	return;
}

Intern::Intern (const Intern& ref)
{
	if (CPP_DEBUG) {std::cout << "Intern copy constructor called" << std::endl;}
	*this = ref;
}

Intern::~Intern (void)
{
	if (CPP_DEBUG) {std::cout << "default destructor called" << std::endl;}
	return;
}

Intern&
Intern::operator=(__attribute__((unused)) const Intern& ref)
{
	return *this;
}

AForm*
Intern::makeForm (std::string const type, std::string const name)
{
	AForm* 		forms[NBR_FORMS] = {new PresidentialPardonForm(name), new RobotomyRequestForm(name), new ShrubberyCreationForm(name)};
	std::string names[NBR_FORMS] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i = 0;

	for(; i < NBR_FORMS; ++i)
		if (names[i] == type)
			break;
	for(int j = 0; j < NBR_FORMS; ++j)
		if (i != j)
			delete forms[j];
	if (i == NBR_FORMS)
	{
		std::cerr << "Intern didn't find form " << type << std::endl;
		return (NULL);
	}
	else
	{
		std::cout << "Intern has created form " << type << std::endl;
		return (forms[i]);
	}
}
