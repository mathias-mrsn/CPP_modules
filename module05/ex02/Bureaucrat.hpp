/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:12:47 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/08 13:21:52 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#if !defined(CPP_DEBUG)
# define CPP_DEBUG 1
# endif

#include <iostream>

#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string  const	_name;
		int					_rank;
	public:
		Bureaucrat (void);
		Bureaucrat (const Bureaucrat&);
		~Bureaucrat (void);
		Bureaucrat (const std::string&, int rank);

		Bureaucrat& operator=(const Bureaucrat&);
		
		int				getRank(void) const;
		std::string		getName (void) const;

		void			upperRank (int);
		void			lowerRank (int);
		
		void			signForm (AForm&);
		void			executeForm (AForm const &);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what (void) const throw();	
		};
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what (void) const throw();	
		};
};

std::ostream&	operator<<(std::ostream&, const Bureaucrat&);

#endif