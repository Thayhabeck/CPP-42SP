/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:42:05 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 16:57:35 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		// Attributes
		Contact		_contacts[8];
		int			_index;
		int			_size;

	public:
		// Constructor
		PhoneBook(void);
		// Destructor
		~PhoneBook(void);
		// Methods
		void		addContact(void);
		void		searchContact(void);
};

#endif