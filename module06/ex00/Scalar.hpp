/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:49:59 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/20 12:12:11 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <limits.h>
# include <limits>
# include <float.h>
# include <errno.h>
# include <sstream>


class Conversion
{
	public :
		Conversion();
		Conversion(Conversion const & src);
		Conversion&		operator=(Conversion const & rhs);
		Conversion(std::string & s_rep);
		virtual ~Conversion();

		void			convert_char(std::string & s_rep);
		void			convert_int(std::string & s_rep);
		void			convert_float(std::string & s_rep);
		void			convert_double(std::string & s_rep);
		
		void			check_overflow(std::string & s_rep);
		
		void			print(void) const;
		void			print_char (void) const;
		void			print_int (void) const;
		void			print_float (void) const;
		void			print_double (void) const;

	private :
		char		_char;
		int			_int;
		float		_float;
		double		_double;
		bool		_nan;
		bool		_minus_inf;
		bool		_plus_inf;
		bool		_inf;
		bool		_error;
		bool		_char_overflow;
		bool		_int_overflow;
		bool		_float_overflow;
};


#endif