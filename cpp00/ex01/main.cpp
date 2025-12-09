/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:28:57 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/10/18 13:29:22 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int		main(void)
{
	std::string		command;
	PhoneBook		phb;
	int				limit = 0;

	while (limit != -1)
	{
		std::cout << "Enter a command [ADD | SEARCH | EXIT]: ";
		if (!std::getline(std::cin, command))
			break ;
		if (compare(command, "ADD"))
		{
			phb.addContact();
			limit++;
		}
		if (compare(command, "SEARCH"))
		{
			if (limit != 0)
			{
				phb.searchContact();
				phb.displayContact();
			}
			else
				std::cout << "The list is empty ,use ADD to add your first contact\n";
		}
		if (compare(command, "EXIT"))
			break;
	}
	return (0);
}
