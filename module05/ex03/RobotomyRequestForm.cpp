/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:10:05 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/08 13:56:21 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm (void) :
	AForm("unamed", 72, 45)
{
	if (CPP_DEBUG) {std::cout << "RobotomyRequestForm default constructor called" << std::endl;}
	return;
}

RobotomyRequestForm::RobotomyRequestForm (const std::string name) :
	AForm(name, 72, 45)
{
	if (CPP_DEBUG) {std::cout << "RobotomyRequestForm string constructor called" << std::endl;}
	return;
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm& ref)
{
	if (CPP_DEBUG) {std::cout << "RobotomyRequestForm copy constructor called" << std::endl;}
	*this = ref;
}

RobotomyRequestForm::~RobotomyRequestForm (void)
{
	if (CPP_DEBUG) {std::cout << "RobotomyRequestForm default destructor called" << std::endl;}
	return;
}

void
RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
	if (executor.getRank() > this->getRankToExec())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << "Grgrgrgrgr ! (drills noises)" << std::endl;

		if (std::rand() % 2 == 0)
		{
			std::cout << executor.getName() << "has been robotomized with 50\% of success !" << std::endl;
		}
		else
		{
			std::cout << "the robotization of " << executor.getName() << "has failed !" << std::endl;
		}
	}
}

RobotomyRequestForm&
RobotomyRequestForm::operator= (const RobotomyRequestForm& ref)
{
	if (this == &ref) {return (*this);}
	
	this->AForm::operator=(ref);
	return (*this);
}