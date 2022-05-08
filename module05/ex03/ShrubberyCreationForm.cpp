/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:10:17 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/08 15:27:44 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm (void) :
	AForm("unamed", 145, 137)
{
	if (CPP_DEBUG) {std::cout << "ShrubberyCreationForm default constructor called" << std::endl;}
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm (const std::string name) :
	AForm(name, 145, 137)
{
	if (CPP_DEBUG) {std::cout << "ShrubberyCreationForm string constructor called" << std::endl;}
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm& ref)
{
	if (CPP_DEBUG) {std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;}
	*this = ref;
}

ShrubberyCreationForm::~ShrubberyCreationForm (void)
{
	if (CPP_DEBUG) {std::cout << "ShrubberyCreationForm default destructor called" << std::endl;}
	return;
}

void
ShrubberyCreationForm::execute (Bureaucrat const & executor) const
{
	if (executor.getRank() > this->getRankToExec())
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream ofs;

		ofs.open(executor.getName() + "_shrubbery");
		if (ofs.fail())
		{
			std::cerr << "cannot create " << (executor.getName() + "_shrubbery") << " file" << std::endl;
			return;
		}
		ofs << "	       _-_" << std::endl
		 			<<"   /~~   ~~\\" << std::endl
					<< "/~~         ~~\\" << std::endl
					<< "{               }" << std::endl
					<<" \\  _-     -_  /" << std::endl
					<<"   ~  \\ //   ~" << std::endl
					<<"_- -   | | _- _" << std::endl
					<<"  _ -  | |   -_" << std::endl
					<<"      // \\\\"
					<< std::endl;
		ofs.close();
	}
}

ShrubberyCreationForm&
ShrubberyCreationForm::operator= (const ShrubberyCreationForm& ref)
{
	if (this == &ref) {return (*this);}
	
	this->AForm::operator=(ref);
	return (*this);
}
