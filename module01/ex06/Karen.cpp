/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:22:38 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 17:29:46 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen (void) {
	return;
}

Karen::~Karen (void) {
	return ;
}

void
	Karen::complain (std::string level) {

	t_level	lvl_func[4] = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	std::string				lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Karen::*f)	();

	for (int i = 0; i < 4; i++)
	{
		if (level == lvl[i])
		{
			switch(i) {
				case 0: this->_debug();
				case 1: this->_info();
				case 2: this->_warning();
				case 3: this->_error();
			}
			return;
			
		}
	}
	std::cout << "INVALID LEVEL" << std::endl;
}

void
	Karen::_debug (void) {

	std::cout << "[DEBUG]";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
	return;		
}

void
	Karen::_info (void) {

	std::cout << "[INFO]";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return;		
}

void
	Karen::_warning (void) {

	std::cout << "[WARNING]";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;		
}

void
	Karen::_error (void) {

	std::cout << "[ERROR]";
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return;		
}

