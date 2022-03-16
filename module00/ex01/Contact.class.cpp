/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:44:07 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/14 14:17:19 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact (void) {
	return;
}

Contact::~Contact (void) {
	return;
}

std::string	Contact::getFirstName(void) const {
	return (this->_firstName);	
}

std::string	Contact::getLastName(void) const {
	return (this->_lastName);	
}

std::string	Contact::getNickname(void) const {
	return (this->_nickname);	
}

std::string	Contact::getPhoneNumber(void) const {
	return (this->_phoneNumber);	
}

std::string	Contact::getDarkestSecret(void) const {
	return (this->_darkestSecret);	
}

void		Contact::setFirstName(std::string &str) {
	this->_firstName = str;
}

void		Contact::setLastName(std::string &str) {
	this->_lastName = str;
}

void		Contact::setNickname(std::string &str) {
	this->_nickname = str;
}

void		Contact::setPhoneNumber(std::string &str) {
	this->_phoneNumber = str;
}

void		Contact::setDarkestSecret(std::string &str) {
	this->_darkestSecret = str;
}
