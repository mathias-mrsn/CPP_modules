#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

# define NBR_CONTACT_MAX	8
# define PADDING			10

class	Phonebook {

	public:
		Phonebook(void);
		~Phonebook(void);

		int			add (void);
		int			search (void);
		int			exit (void);

	private:
		Contact		_phonebook[NBR_CONTACT_MAX];
		int			_index;
		int			_nbr_contact_added;

		void		_print_line(std::string, std::string, std::string, std::string);
		void		_print_elem(std::string);
};

#endif