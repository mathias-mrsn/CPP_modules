/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:01:40 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/13 11:17:22 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat (void) : _name((std::string)"unamed"), _rank(150)
{
	if (CPP_DEBUG) {std::cout << "Bureaucrat default constructor called" << std::endl;}
	return;
}

Bureaucrat::Bureaucrat (const Bureaucrat& ref) : _name("default")
{
	if (CPP_DEBUG) {std::cout << "Bureaucrat copy constructor called" << std::endl;}
	*this = ref;
}

Bureaucrat::~Bureaucrat (void)
{
	if (CPP_DEBUG) {std::cout << "Bureaucrat default destructor called" << std::endl;}
	return;
}

Bureaucrat::Bureaucrat (const std::string& name, int rank) : _name(name), _rank(rank)
{
	if (CPP_DEBUG) {std::cout << "Bureaucrat complete constructor called" << std::endl;}
	
	if (rank < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (rank > 150)
		throw (Bureaucrat::GradeTooLowException());
	return;
}

Bureaucrat&
Bureaucrat::operator=(const Bureaucrat& ref)
{
	if (this == &ref) {return *this;}
	
	std::string* stringPTR = (std::string*)&this->_name;
	
	this->_rank = ref._rank;
	*stringPTR = ref._name;
	return (*this);
}

std::string
Bureaucrat::getName (void) const {return (this->_name);}

int
Bureaucrat::getRank (void) const {return (this->_rank);}

const char*
Bureaucrat::GradeTooHighException::what (void) const throw()
{
	return ("Grade too high !");
}

const char*
Bureaucrat::GradeTooLowException::what (void) const throw()
{
	return ("Grade too low !");
}

void
Bureaucrat::upperRank (int i)
{
	if (this->_rank - i < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_rank - i > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_rank -= i;
}

void
Bureaucrat::lowerRank (int i)
{
	if (this->_rank + i < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (this->_rank + i > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_rank += i;
}

void
Bureaucrat::signForm (AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout 	<< _name 
					<< " signed "
					<< form.getName()
					<< "."
					<< std::endl;	
	} 
	catch (std::exception &e)
	{
		std::cout 	<< _name 
					<< " couldn't sign "
					<< form.getName()
					<< " because "
					<< e.what()
					<< "."
					<< std::endl;
	}
}

void
Bureaucrat::executeForm (const AForm& form)
{
	try
	{
		form.execute(*this);
		std::cout 	<< _name
					<< " executed "
					<< form.getName()
					<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr 	<< _name
					<< " cannot executed "
					<< form.getName()
					<< " because "
					<< e.what()
					<< std::endl;
	}
	
}

std::ostream&
operator<<(std::ostream& o, const Bureaucrat& ref)
{
	o << "Bureaucrat " << ref.getName() << " is rank : " << ref.getRank() << std::endl;
	return (o);
}