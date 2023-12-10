/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:52:39 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/10 16:24:01 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << GREEN;
    std::cout << "A new ice materia has been created!" << std::endl;
    std::cout << RESET;
}

Ice::Ice(Ice const & src) : AMateria(src)
{
    std::cout << GREEN;
    std::cout << "A new ice materia has been created by copy!" << std::endl;
    std::cout << RESET;
}

Ice::~Ice()
{
    std::cout << RED;
    std::cout << "Ice materia has been destroyed!" << std::endl;
    std::cout << RESET;
}

Ice & Ice::operator=(Ice const & rhs)
{
    if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

AMateria* Ice::clone() const
{
    std::cout << BLUE;
    std::cout << "Ice materia has been cloned!" << std::endl;
    std::cout << RESET;
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << BLUE;
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    std::cout << RESET;
}
