/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:35:20 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 12:12:48 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string BLUE = "\033[36;1m";

class Contact
{
    private:
		// Attributes
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

    public:
        // Constructor
        Contact(void);
        // Destructor
        ~Contact(void);
        // Getters
        std::string	getFirstName(void);
        std::string	getLastName(void);
        std::string	getNickname(void);
        std::string	getPhoneNumber(void);
        std::string	getDarkestSecret(void);
        // Setters
        void		setFirstName(std::string firstName);
        void		setLastName(std::string lastName);
        void		setNickname(std::string nickname);
        void		setPhoneNumber(std::string phoneNumber);
        void		setDarkestSecret(std::string darkestSecret);
        // Method
        void		printContact(void);
};

#endif