/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:29:22 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/27 14:31:24 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		int		operator>(const Fixed&);
		int		operator<(const Fixed&);
		int		operator>=(const Fixed&);
		int		operator<=(const Fixed&);
		int		operator==(const Fixed&);
		int		operator!=(const Fixed&);
		Fixed	operator+(const Fixed&);
		Fixed	operator-(const Fixed&);
		Fixed	operator*(const Fixed&);
		Fixed	operator/(const Fixed&);
		
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	operator++(void);
		Fixed	operator--(void);


		int		getRawBits(void) const;
		void	setRawBits(const int);
		float	toFloat(void) const;
		int		toInt(void) const;	
		Fixed&	min(const Fixed&, const Fixed&);
};

std::ostream&	operator<<(std::ostream&, const Fixed&);