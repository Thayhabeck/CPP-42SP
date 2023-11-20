/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:57:49 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/19 17:09:52 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main(void)
{
	PhoneBook	PhoneBook;
	std::string	command;

	while (1)
	{
		std::cout << BLUE << std::endl;
		std::cout << "---- 🌟📞 My Awesome PhoneBook 📞🌟 ----" << std::endl;
		std::cout << GREEN;
		std::cout << "------------- Command list -------------" << std::endl;
		std::cout << "- ADD (save a new contact)" << std::endl;
		std::cout << "- SEARCH (display a specific contact)" << std::endl;
		std::cout << "- EXIT (exit the program)" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << RESET;
		std::cout << "Please, set a command: " << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
			PhoneBook.addContact();
		else if (command == "SEARCH")
			PhoneBook.searchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << RED << "Invalid command. Try again." << RESET << std::endl;
	}
	return (0);
}
