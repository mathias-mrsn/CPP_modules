#include "PhoneBook.class.hpp"

Phonebook::Phonebook (void) {
	return;
}

Phonebook::~Phonebook (void) {
	return;
}

int Phonebook::search (void) {

	std::string buffer;
	long		buffer_i;


	while (true)
	{
		std::getline(std::cin, buffer);
		buffer_i = std::strtol(buffer.data(), NULL, 10);
		
		if (buffer_i < 0 || buffer_i >= NBR_CONTACT_MAX)
			std::cout << "Erreur valeur incorrect" << std::endl
		
		std::cout << this->_phonebook[buffer_i].getFirstName << std::endl;
		std::cout << this->_phonebook[buffer_i].getFirstName << std::endl;
		std::cout << this->_phonebook[buffer_i].getFirstName << std::endl;
		std::cout << this->_phonebook[buffer_i].getFirstName << std::endl;


	}
}

int	Phonebook::add (void) {

	std::string	buffer;
	const int	index = this->_index;

	std::cout << "First name :" << std::endl;
	std::getline(std::cin, buffer);
	this->_phonebook[index].setFirstName(buffer);
	std::cout << "Last name :" << std::endl;
	std::getline(std::cin, buffer);
	this->_phonebook[index].setLastName(buffer);
	std::cout << "Nickname :" << std::endl;
	std::getline(std::cin, buffer);
	this->_phonebook[index].setNickname(buffer);
	std::cout << "Phone Number :" << std::endl;
	std::getline(std::cin, buffer);
	this->_phonebook[index].setPhoneNumber(buffer);
	std::cout << "Darkest Secret :" << std::endl;
	std::getline(std::cin, buffer);
	this->_phonebook[index].setDarkestSecret(buffer);
	if (index + 1 >= NBR_CONTACT_MAX)
		this->_index = 0;
	else
		this->_index += 1;
	std::cout << "New contact added" << std::endl;
	return (0);
}
