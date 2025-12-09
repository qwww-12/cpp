/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 12:30:58 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/10/15 13:45:37 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact
{
	private:
		std::string		 first_name;
		std::string		 last_name;
		std::string		 nickname;
		std::string		 phone_number;
		std::string		 darkest_secret;
	public:
		void set_firstname();
		void set_lastname();
		void set_nickname();
		void set_phonenumber();
		void set_darkestsecret();
		std::string	get_firstname();
		std::string	get_lastname();
		std::string	get_nickname();
		std::string	get_phonenumber();
		std::string	get_darkestsecret();
};

#endif