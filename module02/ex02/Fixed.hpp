/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:12:57 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/01 11:31:20 by mamaurai         ###   ########.fr       */
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

		Fixed&			operator=(const Fixed&);
		int				operator<(const Fixed&);
		int				operator>(const Fixed&);
		int				operator<=(const Fixed&);
		int				operator>=(const Fixed&);
		int				operator==(const Fixed&);
		int				operator!=(const Fixed&);
		Fixed				operator+(const Fixed&);
		Fixed				operator-(const Fixed&);
		Fixed				operator*(const Fixed&);
		Fixed				operator/(const Fixed&);

		Fixed			operator++(void);
		Fixed			operator++(int);
		Fixed			operator--(void);
		Fixed			operator--(int);

		int					getRawBits (void) const;
		void				setRawBits (int const raw);
		float				toFloat (void) const;
		int					toInt (void) const;
		static Fixed&		min(Fixed&, Fixed&);
		static const Fixed&	min(const Fixed&, const Fixed&);
		static Fixed&		max(Fixed&, Fixed&);
		static const Fixed&	max(const Fixed&, const Fixed&);
};

std::ostream&	operator<<(std::ostream&, const Fixed&);

#endif