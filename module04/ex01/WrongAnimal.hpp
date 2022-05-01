#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# if !defined(CPP_DEBUG)
# define CPP_DEBUG 1
# endif

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal (void);
		WrongAnimal (const std::string type);
		WrongAnimal (const WrongAnimal&);
		virtual ~WrongAnimal (void);

		WrongAnimal&	operator= (const WrongAnimal&);
		
		void	makeSound (void) const;
		std::string		getType (void) const;
		void			setType (const std::string type);
};

#endif