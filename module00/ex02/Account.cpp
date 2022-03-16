/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurai <mamaurai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:21:18 by mamaurai          #+#    #+#             */
/*   Updated: 2022/03/16 10:39:20 by mamaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount= 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account (int initial_deposit) : _amount(initial_deposit)
		, _accountIndex(Account::_nbAccounts)
		, _nbDeposits(0)
		, _nbWithdrawals(0) {
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< "index:"
				<< this->_accountIndex
				<< ";amount:"
				<< this->_amount
				<< ";created" << std::endl;
	return ;
}

Account::~Account (void) {	//voir ordre d'affichage
	_displayTimestamp();
	std::cout	<< "index:"
				<< this->_accountIndex
				<< ";amount:"
				<< this->_amount
				<< ";closed" << std::endl;
	return ;
}

int
	Account::getNbAccounts (void) {

	return (Account::_nbAccounts);
}

int Account::getTotalAmount (void) {

	return (Account::_totalAmount); 
}

int
	Account::getNbDeposits (void) {
	
	return (Account::_totalNbDeposits);
}

int
	Account::getNbWithdrawals (void) {
		
	return (Account::_totalNbWithdrawals);
}

void
	Account::_displayTimestamp (void) {

	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout 	<< "[" << (now->tm_year + 1900);
	std::cout	<< std::setfill ('0') << std::setw (2) << (now->tm_mon + 1);
	std::cout	<< std::setfill ('0') << std::setw (2) << (now->tm_mday);
	std::cout	<< "_";
	std::cout	<< std::setfill ('0') << std::setw (2) << (now->tm_hour);
	std::cout	<< std::setfill ('0') << std::setw (2) << (now->tm_min);
	std::cout	<< std::setfill ('0') << std::setw (2) << (now->tm_sec);
	std::cout	<< "] ";		
}

void
	Account::displayAccountsInfos (void) {

	_displayTimestamp();
	std::cout 	<< "accounts:"
				<< getNbAccounts()
				<< ";total:"
				<< getTotalAmount()
				<< ";deposit:"
				<< getNbDeposits()
				<< ";withdrawals:"
				<< getNbWithdrawals()
				<< std::endl;
}

int
	Account::checkAmount (void) const {
	
	return (this->_amount);		
} 

void
	Account::displayStatus (void) const {
		
	_displayTimestamp();
	std::cout	<< "index:"
				<< this->_accountIndex
				<< ";amount:"
				<< this->_amount
				<< ";deposits:" 
				<< this->_nbDeposits
				<< ";withdrawals:"
				<< this->_nbWithdrawals << std::endl;
}

void
	Account::makeDeposit (int deposit) {

	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

bool
	Account::makeWithdrawal (int withdrawal) {

	_displayTimestamp();
	std::cout	<< "index:"
				<< this->_accountIndex
				<< ";p_amount:"
				<< this->_amount
				<< ";withdrawals:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	std::cout	<< withdrawal
				<< ";amount:"
				<< this->_amount
				<< ";nb_withdrawals:"
				<< this->_nbWithdrawals << std::endl;
	return (true);
}



