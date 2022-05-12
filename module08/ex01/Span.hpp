/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:03:40 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/12 14:58:54 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <list>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <stdint.h>

class Span
{
	private:
		std::list<int>	_lst;
		uint32_t 		_size;
	public:
		Span (void);
		Span (const Span&);
		Span (uint32_t);
		~Span (void);

		Span& 	operator=(const Span&);

		void	addNumber (int);
		int		shortestSpan (void);
		int		longestSpan (void);

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
};

#endif