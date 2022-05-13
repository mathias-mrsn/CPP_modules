/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:56:46 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/13 11:11:45 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form (void) :
	_name((std::string)"unamed"),
	_isSigned(false),
	_rankToExec(1),
	_rankToSign(1)
{
	if (CPP_DEBUG) {std::cout << "Form default constructor called" << std::endl;}
	return;	
}

Form::Form (std::string const name, int const rankToSign, int const rankToExec) :
	_name(name),
	_isSigned(false),
	_rankToExec(rankToExec),
	_rankToSign(rankToSign)
{
	if (_rankToExec > 150 || _rankToSign > 150)
		throw Form::GradeTooLowException();
	else if (_rankToExec < 1 || _rankToSign < 1)
		throw Form::GradeTooHighException();

	if (CPP_DEBUG) {std::cout << "Form complete constructor called" << std::endl;}
	return;		
}

Form::Form (const Form& ref) : _rankToExec(1), _rankToSign(1)
{
	*this = ref;
}

Form::~Form (void)
{
	if (CPP_DEBUG) {std::cout << "Form default destructor called" << std::endl;}
	return;	
}

Form&
Form::operator=(const Form& ref)
{
	if (this == &ref) {return (*this);}
	
	std::string* stringPTR = (std::string*)&this->_name;
	int* execPTR = (int*)&this->_rankToExec;
	int* signPTR = (int*)&this->_rankToSign;

	*stringPTR = ref._name;
	*execPTR = ref._rankToExec;
	*signPTR = ref._rankToSign;

	return (*this);
}

std::string
Form::getName (void) const	{return (this->_name);}
bool
Form::getIsSigned (void) const {return (this->_isSigned);}
int const
Form::getRankToExec (void) const {return (this->_rankToExec);}
int const
Form::getRankToSign (void) const {return (this->_rankToSign);}

void
Form::beSigned (const Bureaucrat& b)
{
	if (b.getRank() > this->_rankToSign)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

const char*
Form::GradeTooHighException::what (void) const throw()
{
	return ("Grade to high!");
}

const char*
Form::GradeTooLowException::what (void) const throw()
{
	return ("Grade to low!");
}

std::ostream&
operator<< (std::ostream& o, const Form& form)
{
	o 	<< "Form name : "
		<< form.getName()
		<< ", is signed : "
		<< form.getIsSigned()
		<< ", rank to sign : "
		<< form.getRankToSign()
		<< ", rank to exec : "
		<< form.getRankToExec();
	return (o);
}