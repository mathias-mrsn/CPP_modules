/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:48:05 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/15 19:15:29 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int
	main(int argc, char **argv)
{
	std::string	str;
	Phonebook	phonebook;

	std::cout << "Welcome on your own phonebook" << std::endl;
	while (true) {
		std::cout << "Phonebook > ";
		std::getline(std::cin, str);

		if (std::cin.eof() || str == "EXIT")
			phonebook.exit();
		std::cout << std::endl;
		if (str == "ADD")
			phonebook.add();
		else if (str == "SEARCH")
			phonebook.search();
		else
			std::cout << "Unrecognized command <ADD - SEARCH - EXIT>" << std::endl;
	}
	return (EXIT_SUCCESS);
}