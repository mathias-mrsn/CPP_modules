/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:07:28 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/20 12:12:26 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Conversion::Conversion() : _char('0'), _int(0), _float(0),
			_double(0), _nan(false), _minus_inf(false), _plus_inf(false), 
			_inf(false), _error(false), _char_overflow(false),
			_int_overflow(false), _float_overflow(false)
{
	
}

Conversion::~Conversion()
{

}

Conversion::Conversion(Conversion const & src)
{
	*this = src;
}

Conversion&		Conversion::operator=(Conversion const & rhs)
{
	this->_char = rhs._char;
	this->_int = rhs._int;
	this->_float = rhs._float;
	this->_double = rhs._double;
	this->_nan = rhs._nan;
	this->_minus_inf = rhs._minus_inf;
	this->_plus_inf = rhs._plus_inf;
	this->_error = rhs._error;
	return (*this);
}

static bool		is_int(std::string & str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (i == 0 && !(str[i] <= '9' && str[i] >= '0') && str[i] != '-')
			return (false);
		if ((i != 0 && !(str[i] <= '9' && str[i] >= '0')))
			return (false);
	}
	return (true);
}

static bool		is_float(std::string & str)
{
	std::string::const_iterator it = str.begin();
    bool decimalPoint = false;
    int minSize = 0;
    if (str.size() > 0 && (str[0] == '-' || str[0] == '+')){
    	it++;
    	minSize++;
    }
    while (it != str.end()){
    	if (*it == '.'){
    		if (!decimalPoint)
				decimalPoint = true;
    		else
				break;
    	}
		else if (!std::isdigit(*it) && ((*it != 'f') || it+1 != str.end() || !decimalPoint)){
        	break;
    	}
    	++it;
    }
    return (str.size() > minSize && it == str.end());	
}

static bool		is_double(std::string & str)
{
	std::string::const_iterator it = str.begin();
    bool decimalPoint = false;
    int minSize = 0;
    if (str.size() > 0 && (str[0] == '-' || str[0] == '+')){
    	it++;
    	minSize++;
    }
    while (it != str.end()){
    	if (*it == '.'){
    		if (!decimalPoint)
				decimalPoint = true;
    		else
				break;
    	}
		else if (!std::isdigit(*it)){
        	break;
    	}
    	++it;
    }
    return (str.size() > minSize && it == str.end());	
}

static bool		is_char(std::string & str)
{
	if (str.length() == 1 && std::isprint(str[0]))
		return (true);
	return (false);
}

Conversion::Conversion(std::string & str) : _nan(false),
			_minus_inf(false), _plus_inf(false), _inf(false), _error(false),
			_char_overflow(false), _int_overflow(false),
			_float_overflow(false)
{
	if (str.compare("-inff") == 0 || str.compare("-inf") == 0)
		this->_minus_inf = true;
	else if (str.compare("+inff") == 0 || str.compare("+inf") == 0)
		this->_plus_inf = true;
	else if (str.compare("inff") == 0 || str.compare("inf") == 0)
		this->_inf = true;
	else if (str.compare("nanf") == 0 || str.compare("nan") == 0)
		this->_nan = true;
	else if (is_int(str))
		this->convert_int(str);
	else if (is_char(str))
		this->convert_char(str);
	else if (is_float(str))
		this->convert_float(str);
	else if (is_double(str))
		this->convert_double(str);
	else
		this->_error = true;
}

void			Conversion::check_overflow(std::string & str)
{
	double		nb;

	nb = strtod(str.c_str(), NULL);
	if (errno == 0)
	{
		if (nb < INT_MIN || nb > INT_MAX)
			this->_int_overflow = true;
		if (nb < CHAR_MIN || nb > CHAR_MAX)
			this->_char_overflow = true;
		if (nb <= std::numeric_limits<float>::max() * -1  || nb > std::numeric_limits<float>::max())
			this->_float_overflow = true;
	}
}

void			Conversion::convert_char(std::string & str)
{
	this->check_overflow(str);
	this->_char = str[0];
	this->_int = static_cast<int>(this->_char);
	this->_double = static_cast<double>(this->_char);
	this->_float = static_cast<float>(this->_char);
}

void			Conversion::convert_int(std::string & str)
{
	long int		nb;

	this->check_overflow(str);
	nb = atol(str.c_str());
	if (nb < INT_MIN || nb > INT_MAX)
		this->_error = true;
	else
	{
		this->_int = atoi(str.c_str());
		this->_double = static_cast<double>(this->_int);
		this->_float = static_cast<float>(this->_int);
		this->_char = static_cast<char>(this->_int);
	}
}

void			Conversion::convert_float(std::string & str)
{
	this->check_overflow(str);
	this->_float = strtof(str.c_str(), NULL);
	if (errno != 0)
		this->_error = true;
	else
	{
		this->_char = static_cast<char>(this->_float);
		this->_int = static_cast<int>(this->_float);
		this->_double = static_cast<double>(this->_float);
	}
}

void			Conversion::convert_double(std::string & str)
{
	this->check_overflow(str);
	this->_double = strtod(str.c_str(), NULL);
	if (errno != 0)
		this->_error = true;
	else
	{
		this->_float = static_cast<float>(this->_double);
		this->_int = static_cast<int>(this->_double);
		this->_char = static_cast<char>(this->_double);
	}
}

void			Conversion::print_double() const
{
	if (this->_error)
		std::cout << "impossible" << std::endl;
	else if (this->_minus_inf)
		std::cout << "-inf" << std::endl;
	else if (this->_plus_inf)
		std::cout << "+inf" << std::endl;
	else if (this->_inf)
		std::cout << "inf" << std::endl;
	else if (this->_nan)
		std::cout << "nan" << std::endl;
	else
   		std::cout << std::setiosflags(std::ios::fixed) << this->_double << std::endl;
}

void			Conversion::print_float() const
{
	if (this->_error || this->_float_overflow)
		std::cout << "impossible" << std::endl;
	else if (this->_minus_inf)
		std::cout << "-inff" << std::endl;
	else if (this->_plus_inf)
		std::cout << "+inff" << std::endl;
	else if (this->_inf)
		std::cout << "inff" << std::endl;
	else if (this->_nan)
		std::cout << "nanf" << std::endl;
	else
   		std::cout << std::setiosflags(std::ios::fixed) << this->_float << "f" << std::endl;
}

void
Conversion::print_char (void) const
{
	if (this->_minus_inf || this->_plus_inf || this->_inf || this->_nan
			|| this->_error || this->_char_overflow)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<int>(this->_char)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << this->_char << std::endl;
}

void
Conversion::print_int (void) const
{
	if (this->_minus_inf || this->_plus_inf || this->_inf || this->_nan
			|| this->_error || this->_int_overflow)
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->_int << std::endl;
}

void
Conversion::print (void) const
{
	std::cout << "char: ";
	this->print_char();
	std::cout << "int: ";
	this->print_int();
	std::cout << "float: ";
	this->print_float();
	std::cout << "double: ";
	this->print_double();
}