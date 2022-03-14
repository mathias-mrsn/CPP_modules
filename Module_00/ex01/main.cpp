/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:48:05 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/14 14:10:32 by mamaurai         ###   ########.fr       */
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

	while (true) {
		std::getline(std::cin, str);

		if (str == "ADD")
			phonebook.add();
		else if (str == "SEARCH")
			phonebook.search();
		else
			exit(0);
	}
	return (0);
}