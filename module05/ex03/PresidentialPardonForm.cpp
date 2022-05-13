/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 12:55:43 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/13 11:19:31 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm (void) :
	AForm("unamed", 25, 5)
{
	if (CPP_DEBUG) {std::cout << "PresidentialPardonForm default constructor called" << std::endl;}
	return;
}

PresidentialPardonForm::PresidentialPardonForm (const std::string name) :
	AForm(name, 25, 5)
{
	if (CPP_DEBUG) {std::cout << "PresidentialPardonForm string constructor called" << std::endl;}
	return;
}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm& ref)
{
	if (CPP_DEBUG) {std::cout << "PresidentialPardonForm copy constructor called" << std::endl;}
	*this = ref;
}

PresidentialPardonForm::~PresidentialPardonForm (void)
{
	if (CPP_DEBUG) {std::cout << "PresidentialPardonForm default destructor called" << std::endl;}
	return;
}

void
PresidentialPardonForm::execute (Bureaucrat const & executor) const
{
	if (executor.getRank() > this->getRankToExec())
		throw AForm::GradeTooLowException();
	else
		std::cout << executor.getName() << " has been forgiven by President Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm&
PresidentialPardonForm::operator= (const PresidentialPardonForm& ref)
{
	if (this == &ref) {return (*this);}
	
	this->AForm::operator=(ref);
	return (*this);
}