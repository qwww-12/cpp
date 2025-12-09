/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:00:01 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/10/18 13:37:58 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

typedef struct	s_strings
{
	std::string		firstname;
	std::string		lastname;
	std::string		nickname;
	std::string		phonenumber;
	std::string		darkestsecret;
	int				sps;
}	t_strings;

bool	compare(std::string str, std::string cmp);
bool	_y_input(std::string input);
int		_y_index(const char *c, int range);
void	printer_10(std::string str, int len);
void	printer_index_c(t_strings strings, int idx, int l_fn, int l_ln, int l_nm);
void	printer_contact(t_strings strings);

#endif