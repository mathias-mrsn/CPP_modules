/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:29:22 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/28 19:36:11 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int 				_fixed;
		int const static	_bits;
	public:
		Fixed (void);
		~Fixed (void);
		Fixed (const Fixed&);
		Fixed (int const);
		Fixed (float const);

		Fixed& 	operator=(const Fixed&);

		int		getRawBits(void) const;
		void	setRawBits(const int);
		float	toFloat(void) const;
		int		toInt(void) const;	
};

std::ostream&	operator<<(std::ostream&, const Fixed&);

#endif