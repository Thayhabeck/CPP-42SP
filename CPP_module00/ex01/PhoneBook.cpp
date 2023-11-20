/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:44:52 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 18:26:13 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Constructor
PhoneBook::PhoneBook(void)
{
	this->_index = -1;
	this->_size = 0;
	return ;
}

// Destructor
PhoneBook::~PhoneBook(void)
{
	return ;
}

// Methods
void	PhoneBook::addContact(void)
{
	std::string	temp;

	if (this->_size == 8)
	{
		std::cout << BLUE << std::endl;
		std::cout << "PhoneBook is full. The oldest Contact will be deleted." << std::endl;
		std::cout << RESET << std::endl;
		for (int i = 0; i < 7; i++)
			this->_contacts[i] = this->_contacts[i + 1];
		this->_index--;
		this->_size--;
	}
	this->_index++;
	std::cout << GREEN << "Provide the new contact's first name: " << RESET << std::endl;
	std::getline(std::cin, temp);
	this->_contacts[this->_index].setFirstName(temp);
	std::cout << GREEN << "Provide the new contact's last name: " << RESET << std::endl;
	std::getline(std::cin, temp);
	this->_contacts[this->_index].setLastName(temp);
	std::cout << GREEN << "Provide the new contact's nickname: " << RESET << std::endl;
	std::getline(std::cin, temp);
	this->_contacts[this->_index].setNickname(temp);
	std::cout << GREEN << "Provide the new contact's phone number: " << RESET << std::endl;
	std::getline(std::cin, temp);
	this->_contacts[this->_index].setPhoneNumber(temp);
	std::cout << GREEN << "Provide the new contact's darkest secret: " << RESET << std::endl;
	std::getline(std::cin, temp);
	this->_contacts[this->_index].setDarkestSecret(temp);
	std::cout << BLUE << "Contact saved successfully in index " << this->_index << RESET << std::endl;
	this->_size++;
}

void	PhoneBook::searchContact(void)
{
	int		i;
	int		index;

	i = 0;
	if (this->_size == 0)
		std::cout << RED << "PhoneBook is empty" << RESET << std::endl;
	else
	{
		std::cout << BLUE;
		std::cout << std::setw(10) << "Index" << "|";
		std::cout << std::setw(10) << "First Name" << "|";
		std::cout << std::setw(10) << "Last Name" << "|";
		std::cout << std::setw(10) << "Nickname" << std::endl;
		std::cout << GREEN;
		while (i < this->_size)
		{
			std::cout << std::setw(10) << i << "|";
			if (this->_contacts[i].getFirstName().length() > 10)
				std::cout << std::setw(10) << this->_contacts[i].getFirstName().substr(0, 8) << ".|";
			else
				std::cout << std::setw(10) << this->_contacts[i].getFirstName() << "|";
			if (this->_contacts[i].getLastName().length() > 10)
				std::cout << std::setw(10) << this->_contacts[i].getLastName().substr(0, 8) << ".|";
			else
				std::cout << std::setw(10) << this->_contacts[i].getLastName() << "|";
			if (this->_contacts[i].getNickname().length() > 10)
				std::cout << std::setw(10) << this->_contacts[i].getNickname().substr(0, 8) << ".|";
			else
				std::cout << std::setw(10) << this->_contacts[i].getNickname() << std::endl;
			i++;
		}
		std::cout << RESET << "Choose an index: " << std::endl;
		std::cin >> index;
		while (index < 0 || index > this->_index)
		{
			std::cout << RED << "Invalid index. Try again." << std::endl;
			std::cout << RESET << "Choose an index: " << std::endl;
			std::cin >> index;
		}
		this->_contacts[index].printContact();
		std::cin.ignore();
		std::cin.clear();
	}
}
