/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:07:28 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/09 17:55:06 by mamaurai         ###   ########.fr       */
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
		this->_type = foundRightType(value);
		this->_d = std::stod(value);
	} catch (std::exception& e)
	{
		std::cerr << "Invalid argument" << std::endl;
	}
}

Scalar&
Scalar::operator=(const Scalar& ref)
{
	this->_d = ref._d;
	this->_type = ref._type;
	return (*this);
}




bool
isInteger (const std::string value)
{
	return (value.find_first_not_of("0123456789") == std::string::npos);
}

bool
isDouble (const std::string value)
{
	return (1);
}

bool
isChar (const std::string value)
{
	return (1);
}

bool
isDouble (const std::string value)
{
	return (1);
}




void
Scalar::print (void)
{
	std::cout << this->_d << std::endl;
}

uint64_t
Scalar::foundRightType (std::string type) const
{
	const t_type tab[6] = {{"-inff", MINUS_INFF}, {"inff", INFF}, {"-inf", MINUS_INF}, {"inf", INF}, {"nanf", NANF}, {"nan", NAN}};

	for (uint64_t i = 0; i < 6; i++)
	{
		if (tab[i].type == type)
		{
			this->_type |= tab[i].value;
			return;
		}
	}
	
	
}