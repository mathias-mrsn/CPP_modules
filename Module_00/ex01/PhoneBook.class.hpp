#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

# define NBR_CONTACT_MAX	8

class	Phonebook {

	public:
		Phonebook(void);
		~Phonebook(void);

		int			add (void);
		int			search (void);

	private:
		Contact		_phonebook[NBR_CONTACT_MAX];
		int			_index;
};

#endif