/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:51:18 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/11/18 11:59:11 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


void	Account::_displayTimestamp(void)
{
	std::time_t	now_time = std::time(NULL);
	std::tm		*ltm = std::localtime(&now_time);

	std::cout	<< "["
				<< (ltm->tm_year + 1900)
				<< std::setw(2) << std::setfill('0') << (ltm->tm_mon + 1)
				<< std::setw(2) << std::setfill('0') << ltm->tm_mday
				<< "_"
				<< std::setw(2) << std::setfill('0') << ltm->tm_hour
				<< std::setw(2) << std::setfill('0') << ltm->tm_min
				<< std::setw(2) << std::setfill('0') << ltm->tm_sec
				<< "] ";
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< "index:"
				<< _accountIndex
				<< ";amount:"
				<< _amount
				<< ";created"
				<< std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout	<< "index:"
				<< _accountIndex
				<< ";amount:"
				<< _amount
				<< ";closed"
				<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout	<< "index:"
				<< _accountIndex
				<< ";p_amount:"
				<< (_amount - deposit)
				<< ";deposit:"
				<< deposit
				<< ";amount:"
				<< _amount
				<< ";nb_deposits:"
				<< _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int		tmp_amount = _amount;
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
	}
	_displayTimestamp();
	std::cout	<< "index:"
				<< _accountIndex
				<< ";p_amount:"
				<< tmp_amount;
	if (withdrawal > tmp_amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout	<< ";withdrawal:"
				<< withdrawal
				<< ";amount:"
				<< _amount
				<< ";nb_withdrawals:"
				<< _nbWithdrawals
				<< std::endl;
	return (true);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<< "index:"
				<< _accountIndex
				<< ";amount:"
				<< _amount
				<< ";deposits:"
				<< _nbDeposits
				<< ";withdrawals:"
				<< _nbWithdrawals
				<< std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout	<< "accounts:"
				<< _nbAccounts
				<< ";total:"
				<< _totalAmount
				<< ";deposits:"
				<< _totalNbDeposits
				<< ";withdrawals:"
				<< _totalNbWithdrawals
				<< std::endl;
}
