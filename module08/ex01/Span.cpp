/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:16:22 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/17 13:39:04 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span (void) : _size(0), _vector()
{
	
} 

Span::Span (const Span& ref)
{
	*this = ref;
}

Span::Span (uint32_t size) : _size(size), _vector()
{
	
}

Span::~Span (void)
{
	
}

Span&
Span::operator= (const Span& ref)
{
	if (this == &ref) {return (*this);};
	
	this->_size = ref._size;
	this->_vector = std::vector<int>(ref._vector);

	return (*this);
}

void
Span::addRange (Iterator start, Iterator end)
{
	std::vector<int> tempo;

	if (std::distance (start, end) + _vector.size() >= _size)
		throw Span::CannotAddRange();
	tempo.assign (start, end);
	_vector.insert (_vector.end(), tempo.begin(), tempo.end());
}

void
Span::addNumber (int n)
{
	if (_vector.size() >= _size)
		throw Span::CannotAddNumberInSpan();
	_vector.push_back(n);
}

int
Span::shortestSpan (void)
{
	return (*min_element(_vector.begin(), _vector.end()));
}

int
Span::longestSpan (void)
{
	return (*max_element(_vector.begin(), _vector.end()));
}

