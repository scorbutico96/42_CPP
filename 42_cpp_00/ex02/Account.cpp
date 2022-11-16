/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrisari <mcrisari@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:20:11 by mcrisari          #+#    #+#             */
/*   Updated: 2021/12/02 15:20:11 by mcrisari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

/*
*	PUBLIC
*/

Account::Account(int initial_deposit)
: _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	this->_accountIndex = Account::_nbAccounts;

	t::_nbAccounts += 1;
	t::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "created";
	std::cout << std::endl;

	return;
}

Account::~Account(void) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "closed";
	std::cout << std::endl;

	return;
}

int		// NON_MEMBER
Account::getNbAccounts( void ) { return t::_nbAccounts; }

int		// NON_MEMBER
Account::getTotalAmount( void ) { return t::_totalAmount; }

int		// NON_MEMBER
Account::getNbDeposits( void ) { return t::_totalNbDeposits; }

int		// NON_MEMBER
Account::getNbWithdrawals( void ) { return t::_totalNbWithdrawals; }

void	// NON_MEMBER
Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << t::_nbAccounts << ";";
	std::cout << "total:" << t::_totalAmount << ";";
	std::cout << "deposits:" << t::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << t::_totalNbWithdrawals;
	std::cout << std::endl;

	return;
}


void
Account::makeDeposit( int deposit ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";

	this->_amount += deposit;
	this->_nbDeposits++;

	t::_totalNbDeposits++;
	t::_totalAmount += deposit;

	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;

	return;
}

bool
Account::makeWithdrawal( int withdrawal ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";

	if (withdrawal > this->_amount) {

		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	t::_totalNbWithdrawals++;
	t::_totalAmount -= withdrawal;

	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;

	return true;
}

int
Account::checkAmount( void ) const {

	return this->_amount;
}

void
Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;

	return;
}

/*
*	PRIVATE
*/

Account::Account(void) {}

void	// NON_MEMBER
Account::_displayTimestamp( void ) {

	time_t		rawtime;
	struct tm	*timeinfo;
	char 		buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);

	std::cout << buffer;

	return;
}

int	Account::_nbAccounts = 0;			// NON_MEMBER
int	Account::_totalAmount = 0;			// NON_MEMBER
int	Account::_totalNbDeposits = 0;		// NON_MEMBER
int	Account::_totalNbWithdrawals = 0;	// NON_MEMBER
