/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:29:29 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/11/18 12:13:40 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook() : index(0)
{}

void	PhoneBook::addContact()
{
	arr[index % 8].set_firstname();
	arr[index % 8].set_lastname();
	arr[index % 8].set_nickname();
	arr[index % 8].set_phonenumber();
	arr[index % 8].set_darkestsecret();
	index++;
}

void	PhoneBook::displayContact()
{
	std::cout << "first name : " << arr[contact - 1].get_firstname() << std::endl;
	std::cout << "last name : " << arr[contact - 1].get_lastname() << std::endl;
	std::cout << "nickname : " << arr[contact - 1].get_nickname() << std::endl;
	std::cout << "phone number : " << arr[contact - 1].get_phonenumber() << std::endl;
	std::cout << "darkest secret : " << arr[contact - 1].get_darkestsecret() << std::endl;
}

void	PhoneBook::searchContact()
{
	t_strings	strings;
	std::string	ask;
	int			idx = -1;

	std::cout << "     index" << "|" << "first name" << "|" << " last name" << "|" << "  nickname\n";
	while (++idx < index && idx <= 7)
	{
		strings.firstname = arr[idx].get_firstname();
		strings.lastname = arr[idx].get_lastname();
		strings.nickname = arr[idx].get_nickname();
		strings.phonenumber = arr[idx].get_phonenumber();
		strings.darkestsecret = arr[idx].get_darkestsecret();
		printer_index_c(strings, idx, arr[idx].get_firstname().length(), \
		arr[idx].get_lastname().length(), arr[idx].get_nickname().length());
	}
	std::cout << "Please enter the index of the contact to display: ";
	while (1)
	{
		if (!std::getline(std::cin, ask)) exit (0);
		contact = _y_index(ask.c_str(), index);
		if (contact == -1)
			continue ;
		break ;
	}
}
