/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:48:49 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/10 15:42:21 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	this->_type = "default";
	std::cout << GREEN;
	std::cout << "A new materia of type 'default' has been created!" << std::endl;
	std::cout << RESET;
}

AMateria::AMateria(std::string const &type) {
	this->_type = type;
	std::cout << GREEN;
	std::cout << "A new materia of type '" << this->_type << "' has been created!" << std::endl;
	std::cout << RESET;
}

AMateria::AMateria(const AMateria &src) {
	*this = src;
	std::cout << GREEN;
	std::cout << "A new '" << this->_type << "' materia has been created by copy!" << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << RED;
	std::cout << "A materia of type '" << this->_type << "' has been destroyed!" << std::endl;
	std::cout << RESET;
}

AMateria	&AMateria::operator=(const AMateria &rhs) { 
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

std::string const	&AMateria::getType(void) const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	std::cout << BLUE << "* Spell " << this->_type << " used at " << target.getName() << " *";
	std::cout << RESET << std::endl;
}
