/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:49:59 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/10 11:56:47 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <limits.h>
#include <math.h>

class Scalar
{
	private:
		double _d;
		uint64_t _type;
	public:
		Scalar (void);
		Scalar (const Scalar&);
		Scalar (const std::string);
		~Scalar (void);

		Scalar& 	operator=(const Scalar&);

		void		print (void);

		void		printChar (void);
		void		printInt (void);
		
};


typedef struct s_type
{
	std::string type;
	uint64_t value;
}				t_type;

#endif