/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarhoun <mbarhoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 16:18:45 by mbarhoun          #+#    #+#             */
/*   Updated: 2025/11/16 17:06:23 by mbarhoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact		arr[8];
		int			index;
		int			contact;
	public:
		PhoneBook();
		void	addContact();
		void	searchContact();
		void	displayContact();
};

#endif