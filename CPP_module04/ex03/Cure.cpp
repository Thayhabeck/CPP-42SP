/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:54:03 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/10 15:41:50 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << GREEN;
    std::cout << "A new cure materia has been created!" << std::endl;
    std::cout << RESET;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
    std::cout << GREEN;
    std::cout << "A new cure materia has been created by copy!" << std::endl;
    std::cout << RESET;
}

Cure::~Cure()
{
    std::cout << RED;
    std::cout << "Cure materia has been destroyed!" << std::endl;
    std::cout << RESET;
}

Cure & Cure::operator=(Cure const & rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

AMateria* Cure::clone() const
{
    std::cout << BLUE;
    std::cout << "Cure materia has been cloned!" << std::endl;
    std::cout << RESET;
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << BLUE;
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    std::cout << RESET;
}
