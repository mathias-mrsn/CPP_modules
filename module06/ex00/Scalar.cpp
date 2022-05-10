/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:07:28 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/10 14:17:31 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar (void) : _d(0), _type(0)
{
	
}

Scalar::Scalar (const Scalar& ref)
{
	*this = ref;
}

Scalar::Scalar (const std::string value)
{
	try
	{
		this->_d = std::stod(value);
		this->print();
	} catch (std::exception& e)
	{
		std::cerr << "Invalid argument" << std::endl;
	}
}

Scalar::~Scalar (void)
{
	
}

Scalar&
Scalar::operator=(const Scalar& ref)
{
	this->_d = ref._d;
	this->_type = ref._type;
	return (*this);
}

void
Scalar::printChar (void)
{
	char c = static_cast<char>(this->_d);
	
	if (!std::isfinite(this->_d) || _d > CHAR_MAX || _d < CHAR_MIN)
		std::cout << "char : impossible";
	else if (!std::isprint(c))
		std::cout << "char : non displayable";
	else
		std::cout << "char : " << c;
}

void
Scalar::printInt (void)
{
	int c = static_cast<int>(this->_d);
	
	if (!std::isfinite(this->_d) || _d > INT_MAX || _d < INT_MIN)
		std::cout << "int : impossible";
	else
		std::cout << "int : " << c;
}


void
Scalar::print (void)
{
	printChar();
	std::cout << std::endl;
	printInt();
	std::cout << std::endl;
	std::cout << "float : " << std::setiosflags(std::ios::fixed) << static_cast<float>(this->_d) << "f" << std::endl;
	std::cout << "double : " << this->_d << std::endl;
}