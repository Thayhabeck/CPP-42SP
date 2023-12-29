/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:39:35 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/27 17:51:37 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Constructor
Contact::Contact(void)
{
	return ;
}

// Destructor
Contact::~Contact(void)
{
	return ;
}

// Getters
std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

// Setters

void	Contact::setFirstName(std::string firstName)
{
	while (firstName.empty())
	{
		std::cout << RED << "First name can't be empty" << std::endl;
		std::cout << GREEN << "Provide the new contact's first name: " << RESET << std::endl;
		std::getline(std::cin, firstName);
	}
	for (size_t i = 0; i < firstName.length(); i++)
	{
		if (!std::isalpha(firstName[i]))
		{
			std::cout << RED << "First name can't contain non-alphabetical characters" << std::endl;
			std::cout << GREEN << "Provide the new contact's first name: " << RESET << std::endl;
			std::getline(std::cin, firstName);
			i = 0;
		}
	}
	this->_firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	while (lastName.empty())
	{
		std::cout << RED << "Last name can't be empty" << std::endl;
		std::cout << GREEN << "Provide the new contact's last name: " << RESET << std::endl;
		std::getline(std::cin, lastName);
	}
	for (size_t i = 0; i < lastName.length(); i++)
	{
		if (!std::isalpha(lastName[i]))
		{
			std::cout << RED << "Last name can't contain non-alphabetical characters" << std::endl;
			std::cout << GREEN << "Provide the new contact's last name: " << RESET << std::endl;
			std::getline(std::cin, lastName);
			i = 0;
		}
	}
	this->_lastName = lastName;
}

void	Contact::setNickname(std::string nickname)
{
	while (nickname.empty())
	{
		std::cout << RED << "Nickname can't be empty" << std::endl;
		std::cout << GREEN << "Provide the new contact's nickname: " << RESET << std::endl;
		std::getline(std::cin, nickname);
	}
	for (size_t i = 0; i < nickname.length(); i++)
	{
		if (!std::isalpha(nickname[i]))
		{
			std::cout << RED;
			std::cout << "Nickname can't contain non-alphabetical characters, except for '-'" << std::endl;
			std::cout << GREEN << "Provide the new contact's nickname: " << RESET << std::endl;
			std::getline(std::cin, nickname);
			i = 0;
		}
	}
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	while (phoneNumber.empty())
	{
		std::cout << RED << "Phone number can't be empty" << std::endl;
		std::cout << GREEN << "Provide the new contact's phone number: " << RESET << std::endl;
		std::getline(std::cin, phoneNumber);
	}
	for (size_t i = 0; i < phoneNumber.length(); i++)
	{
		if (!std::isdigit(phoneNumber[i]))
		{
			std::cout << RED << "Phone number can't contain non-digit characters" << std::endl;
			std::cout << GREEN << "Provide the new contact's phone number: " << RESET << std::endl;
			std::getline(std::cin, phoneNumber);
			i = 0;
		}
	}
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	while (darkestSecret.empty())
	{
		std::cout << RED << "Darkest secret can't be empty" << std::endl;
		std::cout << GREEN << "Provide the new contact's darkest secret: " << RESET << std::endl;
		std::getline(std::cin, darkestSecret);
	}
	for (size_t i = 0; i < darkestSecret.length(); i++)
	{
		if (!std::isalnum(darkestSecret[i]) && darkestSecret[i] != ' ')
		{
			std::cout << RED;
			std::cout << "Darkest secret can't contain non-alphanumerical characters, except for spaces" << std::endl;
			std::cout << GREEN << "Provide the new contact's darkest secret: " << RESET << std::endl;
			std::getline(std::cin, darkestSecret);
			i = 0;
		}
	}
	this->_darkestSecret = darkestSecret;
}

// Method
void	Contact::printContact(void)
{
	std::cout << BLUE << "First Name: " << GREEN << this->_firstName << std::endl;
	std::cout << BLUE << "Last Name: " << GREEN << this->_lastName << std::endl;
	std::cout << BLUE << "Nickname: " << GREEN << this->_nickname << std::endl;
	std::cout << BLUE << "Phone Number: " << GREEN << this->_phoneNumber << std::endl;
	std::cout << BLUE << "Darkest Secret: " << GREEN << this->_darkestSecret << std::endl;
	std::cout << RESET << std::endl;
}
