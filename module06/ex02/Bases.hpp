/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bases.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:38:33 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/09 13:39:50 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASES_HPP
# define BASES_HPP

#include <iostream>

class Base
{
	public:
		virtual ~Base (void) {};
};

class A : public Base
{
	public:
		A (void) {std::cout << "A default constructor called" << std::endl;};
};

class B : public Base 
{
	public:
		B (void) {std::cout << "B default constructor called" << std::endl;};
};

class C : public Base
{
	public:
		C (void) {std::cout << "C default constructor called" << std::endl;};
};

Base* 	generate (void);
void 	identify (Base* p);
void	identify (Base& p);

#endif