#include "PhoneBook.class.hpp"

Phonebook::Phonebook (void) : _nbr_contact_added(0), _index(0){
	return;
}

Phonebook::~Phonebook (void) {
	return;
}

void
	Phonebook::_print_elem(std::string str) {
	
	if (str.size() > PADDING)
		std::cout << str.substr(0, PADDING - 1) << ".";
	else
		std::cout << std::setw(PADDING) << str;
}

void
	Phonebook::_print_line(std::string index, std::string fn, std::string ln, std::string nn) {

	std::cout << "|";
	_print_elem(index);
	std::cout << "|";
	_print_elem(fn);
	std::cout << "|";
	_print_elem(ln);
	std::cout << "|";
	_print_elem(nn);
	std::cout << "|";
	std::cout << std::endl;
}

int
	Phonebook::search (void) {

	std::string buffer;
	long		buffer_i;
	const int	nbr_contact = ((this->_nbr_contact_added > NBR_CONTACT_MAX) ? NBR_CONTACT_MAX : this->_nbr_contact_added);

	std::cout << "Searching mode" << std::endl;
	_print_line("index", "first name", "last name", "nickname");
	for (int i = 0; i < nbr_contact; i++)
	{
		_print_line(std::to_string(i), this->_phonebook[i].getFirstName(), this->_phonebook[i].getLastName(), this->_phonebook[i].getNickname());
	}
	std::cout << "Enter a number (index of your contact) (tap \"exit\" is you want leave the search mode)" << std::endl;
	while (true)
	{
		std::cout << "Index : ";
		std::getline(std::cin, buffer);
		if (std::cin.eof() || buffer == "exit")
			break;
		buffer_i = std::strtol(buffer.data(), NULL, 10);
		if (buffer_i < 0 || buffer_i >= NBR_CONTACT_MAX)
			std::cout << "Invalid value <0-7>" << std::endl;
		else if (buffer_i < std::min(nbr_contact, NBR_CONTACT_MAX))
		{
			std::cout << "First name : " << this->_phonebook[buffer_i].getFirstName() << std::endl;
			std::cout << "Last name : " << this->_phonebook[buffer_i].getLastName() << std::endl;
			std::cout << "Nickname : " << this->_phonebook[buffer_i].getFirstName() << std::endl;
			std::cout << "Phone Number : " << this->_phonebook[buffer_i].getFirstName() << std::endl;
			std::cout << "Darkest Secret : " << this->_phonebook[buffer_i].getDarkestSecret() << std::endl;
		}
		else
			std::cout << "Sorry but we didn't found your contact" << std::endl;

	}
	return (0);
}

int
	Phonebook::add (void) {

	std::string	buffer;
	const int	index = this->_index;

	std::cout << "You're creating a new contact" << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, buffer);
	if (std::cin.eof()) this->exit();
	this->_phonebook[index].setFirstName(buffer);
	std::cout << "Last name : ";
	std::getline(std::cin, buffer);
	if (std::cin.eof()) this->exit();
	this->_phonebook[index].setLastName(buffer);
	std::cout << "Nickname : ";
	std::getline(std::cin, buffer);
	if (std::cin.eof()) this->exit();
	this->_phonebook[index].setNickname(buffer);
	std::cout << "Phone Number : ";
	std::getline(std::cin, buffer);
	if (std::cin.eof()) this->exit();
	this->_phonebook[index].setPhoneNumber(buffer);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, buffer);
	if (std::cin.eof()) this->exit();
	this->_phonebook[index].setDarkestSecret(buffer);
	if (index + 1 >= NBR_CONTACT_MAX)
		this->_index = 0;
	else
		this->_index += 1;
	this->_nbr_contact_added += 1;
	std::cout << "New contact added !" << std::endl;
	return (0);
}

int
	Phonebook::exit (void) {

	std::cout << std::endl << "You're exiting the phonebook. See you soon !" << std::endl;
	std::exit(EXIT_SUCCESS);
}