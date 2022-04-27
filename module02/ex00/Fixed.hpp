/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 10:29:22 by mamaurai          #+#    #+#             */
/*   Updated: 2022/04/27 10:54:55 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {
	private:
		int 				_fixed;
		int const static	_bits;
	public:
		Fixed (void);
		~Fixed (void);
		Fixed (const Fixed&);

		Fixed& 	operator=(const Fixed&);

		int		getRawBits(void) const;
		void	setRawBits(const int);
		
};