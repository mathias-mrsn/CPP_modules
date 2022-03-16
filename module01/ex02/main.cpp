/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:05:18 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 13:10:53 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int
	main(int argc, char **argv)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "adresse de la string : " << &str << std::endl;
	std::cout << "adresse stocke dans stringPTR : " << stringPTR << std::endl;
	std::cout << "address stocke dans stringREF : " << &stringREF << std::endl;
	
	std::cout << "valeur de la string : " << str << std::endl;
	std::cout << "valeur pointe par stringPTR : " << *stringPTR << std::endl;
	std::cout << "valeur pointe par stringREF : " << stringREF << std::endl;
}