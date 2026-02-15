/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:30:58 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/11/14 17:06:51 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	Contact::set_firstname()
{
	std::string		input;

	while (1)
	{
		std::cout << "Enter first name: ";
		if (!std::getline(std::cin, input)) exit (0);
		if (_y_input(input)) continue ;
		break ;
	}
	first_name = input;
}

void	Contact::set_lastname()
{
	std::string		input;

	while (1)
	{
		std::cout << "Enter last name: ";
		if (!std::getline(std::cin, input)) exit (0);
		if (_y_input(input)) continue ;
		break ;
	}
	last_name = input;
}

void	Contact::set_nickname()
{
	std::string		input;

	while (1)
	{
		std::cout << "Enter nickname: ";
		if (!std::getline(std::cin, input)) exit (0);
		if (_y_input(input)) continue ;
		break ;
	}
	nickname = input;
}

void	Contact::set_phonenumber()
{
	std::string		input;

	while (1)
	{
		std::cout << "Enter phone number: ";
		if (!std::getline(std::cin, input)) exit (0);
		if (_y_input(input)) continue ;
		break ;
	}
	phone_number = input;
}

void	Contact::set_darkestsecret()
{
	std::string		input;

	while (1)
	{
		std::cout << "Enter darkest secret: ";
		if (!std::getline(std::cin, input)) exit (0);
		if (_y_input(input)) continue ;
		break ;
	}
	darkest_secret = input;
}


std::string	Contact::get_firstname()
{
	return (first_name);
}

std::string	Contact::get_lastname()
{
	return (last_name);
}

std::string	Contact::get_nickname()
{
	return (nickname);
}

std::string	Contact::get_phonenumber()
{
	return (phone_number);
}

std::string	Contact::get_darkestsecret()
{
	return (darkest_secret);
}
