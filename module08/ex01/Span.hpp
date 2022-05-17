/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:03:40 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/17 13:38:44 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <stdint.h>

class Span
{
	private:
		uint32_t 			_size;
		std::vector<int>	_vector;
	public:

		typedef std::vector<int>::iterator Iterator;

		Span (void);
		Span (const Span&);
		Span (uint32_t);
		~Span (void);

		Span& 	operator=(const Span&);

		void	addNumber (int);
		int		shortestSpan (void);
		int		longestSpan (void);
		void	addRange (Iterator start, Iterator end);

		class SpanIsEmpty : public std::exception
		{
			public:
				virtual const char* what (void) const throw()
				{
					return "the current Span is empty";
				}
		};

		class CannotAddNumberInSpan : public std::exception
		{
			public:
				virtual const char* what (void) const throw()
				{
					return "cannot add number in Span";
				}
		};

		class CannotAddRange : public std::exception
		{
			public:
				virtual const char* what (void) const throw()
				{
					return "cannot add range in Span";
				}
		};
};

#endif