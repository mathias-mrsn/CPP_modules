/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:16:22 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/12 14:58:00 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span (void) : _lst(0), _size(0)
{
	
}

Span::Span (const Span& ref)
{
	*this = ref;
}

Span::Span (uint32_t size) : _size(size)
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
	this->_lst = std::list<int>(ref._lst);

	return (*this);
}

void
Span::addNumber (int n)
{
	if (_lst.size() >= _size)
		throw Span::CannotAddNumberInSpan();
	_lst.push_back(n);
}

int
Span::shortestSpan (void)
{
	std::list<int>::iterator	it = _lst.begin();
	std::list<int>::iterator	ite = _lst.end();
	int							res = INT_MAX;

	for (; it != ite; it++)
	{
		if (*it < res)
			res = *it;
	}
	return (res);
}

int
Span::longestSpan (void)
{
	std::list<int>::iterator	it = _lst.begin();
	std::list<int>::iterator	ite = _lst.end();
	int							res = INT_MIN;

	for (; it != ite; it++)
	{
		if (*it > res)
			res = *it;
	}
	return (res);
}

