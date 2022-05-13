/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:56:46 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/13 11:35:14 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm (void) :
	_name((std::string)"unamed"),
	_isSigned(false),
	_rankToExec(1),
	_rankToSign(1)
{		
	if (CPP_DEBUG) {std::cout << "AForm default constructor called" << std::endl;}
	return;	
}

AForm::AForm (std::string const name, int const rankToSign, int const rankToExec) :
	_name(name),
	_isSigned(false),
	_rankToExec(rankToExec),
	_rankToSign(rankToSign)
{
	if (_rankToExec > 150 || _rankToSign > 150)
		throw AForm::GradeTooLowException();
	else if (_rankToExec < 1 || _rankToSign < 1)
		throw AForm::GradeTooHighException();

	if (CPP_DEBUG) {std::cout << "AForm complete constructor called" << std::endl;}
	return;		
}

AForm::AForm (const AForm& ref) : _rankToExec(1), _rankToSign(1)
{
	*this = ref;
}

AForm::~AForm (void)
{
	if (CPP_DEBUG) {std::cout << "AForm default destructor called" << std::endl;}
	return;	
}

AForm&
AForm::operator=(const AForm& ref)
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
AForm::getName (void) const	{return (this->_name);}
bool
AForm::getIsSigned (void) const {return (this->_isSigned);}
int const
AForm::getRankToExec (void) const {return (this->_rankToExec);}
int const
AForm::getRankToSign (void) const {return (this->_rankToSign);}

void
AForm::beSigned (const Bureaucrat& b)
{
	if (b.getRank() > this->_rankToSign)
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = true;
}

const char*
AForm::GradeTooHighException::what (void) const throw()
{
	return ("Grade to high!");
}

const char*
AForm::GradeTooLowException::what (void) const throw()
{
	return ("Grade to low!");
}

std::ostream&
operator<< (std::ostream& o, const AForm& form)
{
	o 	<< "AForm name : "
		<< form.getName()
		<< ", is signed : "
		<< form.getIsSigned()
		<< ", rank to sign : "
		<< form.getRankToSign()
		<< ", rank to exec : "
		<< form.getRankToExec()
		<< std::endl;
	return (o);
}