/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 13:20:50 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/13 16:55:39 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK
# define MUTANT_STACK

#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>
{


	public:

		typedef typename std::stack<T>::container_type::iterator 	iterator;
		
		MutantStack<T> (void) {}
		MutantStack<T> (const MutantStack& ref) {*this = ref;}
		~MutantStack<T> (void) {}

		MutantStack& operator=(const MutantStack& ref)
		{
			if (*this == ref) {return *this;}
			
			this->c = ref.c;

			return (*this);
		}

		iterator	begin (void)
		{
			return (this->c.begin());
		}

		iterator	end (void)
		{
			return (this->c.end());
		}
};



#endif