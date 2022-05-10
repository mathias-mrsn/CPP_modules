/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:29:23 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/10 15:00:48 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP


template<typename T>
void		swap (T & a, T & b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T const &	min (const T & a, const T & b)
{
	return ((a < b) ? a : b);
}

template<typename T>
T const &	max (const T & a, const T & b)
{
	return ((a > b) ? a : b);
}

#endif