/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:12:57 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/01 09:18:49 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {

	private:
		int					_value;
		const static int	_rawBits;

	public:
		Fixed (void);
		Fixed (const Fixed &);
		Fixed (const int);
		Fixed (const float);
		~Fixed (void);

		Fixed&			operator=(const Fixed &);

		int			getRawBits (void) const;
		void		setRawBits (int const raw);
		float		toFloat (void) const;
		int			toInt (void) const;
};

std::ostream&	operator<<(std::ostream&, const Fixed&);

#endif