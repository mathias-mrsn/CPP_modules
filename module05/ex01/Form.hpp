/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:45:29 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/06 17:15:30 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_isSigned;
		int	const			_rankToSign;
		int const			_rankToExec;
	public:
		Form (void);
		Form (std::string const, int const, int const);
		Form (const Form&);
		~Form (void);

		Form& 	operator=(const Form&);

		std::string	getName (void) const;
		bool		getIsSigned (void) const;
		int const	getRankToSign (void) const;
		int const	getRankToExec (void) const;

		void		beSigned (const Bureaucrat&);
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what (void) const throw(); 
		};		
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what (void) const throw(); 
		};
};

std::ostream&	operator<<(std::ostream&, const Form&);

#endif