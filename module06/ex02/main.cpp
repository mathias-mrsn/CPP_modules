/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:01:44 by mamaurai          #+#    #+#             */
/*   Updated: 2022/05/09 13:38:15 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bases.hpp"

int
main (int ac, char** av)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Try number " << i << std::endl;
		
		{
			Base* base = generate();
			identify (base);
			delete base;
		}
		{
			Base& base = *(generate());
			identify(base);
			delete &base;
		}
	}
}