/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:54:29 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/31 15:55:13 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl (void) {
	return;
}

Harl::~Harl (void) {
	return ;
}

void
	Harl::complain (std::string level) {

	t_level	lvl_func[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string				lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*f)	();

	for (int i = 0; i < 4; i++)
	{
		if (level == lvl[i])
		{
			(this->*(lvl_func[i].f))();
			return;
		}
	}
	std::cout << "INVALID LEVEL" << std::endl;
}

void
	Harl::_debug (void) {

	std::cout << "[DEBUG]";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
	return;		
}

void
	Harl::_info (void) {

	std::cout << "[INFO]";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return;		
}

void
	Harl::_warning (void) {

	std::cout << "[WARNING]";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;		
}

void
	Harl::_error (void) {

	std::cout << "[ERROR]";
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return;		
}

