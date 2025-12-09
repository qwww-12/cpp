/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 21:12:03 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/11/18 12:16:48 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int		cpp_atoi(std::string str)
{
	int		idx = 0;
	int		val = 0;

	while (str[idx] == ' ' || str[idx] == '\t') idx++;
	if (str[idx] == '-') return (-1);
	while (str[idx] >= 48 && str[idx] <= 57)
	{
		val = (val * 10) + (str[idx] - 48);
		idx++;
	}
	while (str[idx])
	{
		if (str[idx] != ' ' && str[idx] != '\t') return (-2);
		idx++;
	}
	return (val);
}

bool	compare(std::string str, std::string cmp)
{
	int		idx = 0;
	int		r = 0;

	while (str[idx] == ' ' || str[idx] == '\t') idx++;
	while (cmp[r])
	{
		if (str[idx++] == cmp[r++]) continue ;
		return (0);
	}
	while (str[idx])
	{
		if (str[idx] != ' ' && str[idx] != '\t') return (0);
		idx++;
	}
	return (1);
}

bool	_y_input(std::string input)
{
	int		idx = -1;

	while (input[++idx])
		if (input[idx] != 32 && input[idx] != '\t' && input[idx] != '\n')
			return (0);
	if (!input[0])
		return (std::cout << "invalid input try again\n", 1);
	return (std::cout << "invalid input try again\n", 1);
}

int		_y_index(const char *c, int range)
{
	int		val = cpp_atoi(c);

	if (range > 8)
		range = 8;
	if (val == -1 || !val || val > range)
	{
		std::cout << "Index out of range! ";
		std::cout << "Please enter a number between 1 and " << range << ": ";
		return (-1);
	}
	if (val == -2)
	{
		std::cout << "Please enter a valid number: ";
		return (-1);
	}
	return (val);
}

void	printer_10(std::string str, int len)
{
	if (len > 10)
		std::cout << str.substr(0, 9) + "." << "|";
	else
		std::cout << str << "|";
}

void	changing_tab(t_strings &strings)
{
	int		idx = 0;
	while (strings.firstname[idx])
	{
		if (strings.firstname[idx] == '\t') strings.firstname[idx] = ' ';
		idx++;
	}
	idx = 0;
	while (strings.lastname[idx])
	{
		if (strings.lastname[idx] == '\t') strings.lastname[idx] = ' ';
		idx++;
	}
	idx = 0;
	while (strings.nickname[idx])
	{
		if (strings.nickname[idx] == '\t') strings.nickname[idx] = ' ';
		idx++;
	}
}

void	printer_index_c(t_strings strings, int idx, int l_fn, int l_ln, int l_nm)
{
	changing_tab(strings);
	std::cout << "         " << idx + 1 << "|";
	strings.sps = 10 - l_fn;
	while (strings.sps-- > 0) std::cout << " ";
	printer_10(strings.firstname, l_fn);
	strings.sps = 10 - l_ln;
	while (strings.sps-- > 0) std::cout << " ";
	printer_10(strings.lastname, l_ln);
	strings.sps = 10 - l_nm;
	while (strings.sps-- > 0) std::cout << " ";
	if (l_nm > 10)
		std::cout << strings.nickname.substr(0, 9) + "." << std::endl;
	else
		std::cout << strings.nickname << std::endl;
}

void	printer_contact(t_strings strings)
{
	std::cout << "first name : " << strings.firstname << std::endl;
	std::cout << "last name : " << strings.lastname << std::endl;
	std::cout << "nickname : " << strings.nickname << std::endl;
	std::cout << "phone number : " << strings.phonenumber << std::endl;
	std::cout << "darkest secret : " << strings.darkestsecret << std::endl;
}
