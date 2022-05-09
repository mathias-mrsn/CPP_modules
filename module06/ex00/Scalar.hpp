/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:49:59 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/09 17:47:50 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>

enum
{
	CHAR = (1ULL << 0),
	INT = (1ULL << 1),
	DOUBLE = (1ULL << 2),
	FLOAT = (1ULL << 3),
	
	MINUS_INFF = (1ULL << 4),
	INFF = (1ULL << 5),
	NANF = (1ULL << 6),
	MINUS_INF = (1ULL << 7),
	INF = (1ULL << 8),
	NAN = (1ULL << 9),
}

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
		uint64_t 	foundRightType (std::string type) const;
		
};


typedef struct s_type
{
	char *type;
	uint64_t value;
}				t_type;

#endif