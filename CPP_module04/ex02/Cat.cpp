/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:28:06 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/07 12:36:03 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << GREEN;
    std::cout << "😺 A new Cat was born!" << std::endl;
    std::cout << RESET;
    this->_brain = new Brain();
}

Cat::Cat(Cat const &copy) : AAnimal(copy)
{
    std::cout << GREEN;
    std::cout << "😺 A new Cat was born by copy!" << std::endl;
    std::cout << RESET;
    this->_type = copy._type;
    this->_brain = new Brain(*copy._brain);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << RED;
    std::cout << "😺 Cat was destroyed!" << std::endl;
    std::cout << RESET;
}

Cat &Cat::operator=(Cat const &cat)
{
    if (this == &cat)
		return (*this);
	this->_type = cat._type;
	this->_brain = new Brain(*cat._brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << BLUE;
    std::cout << "😺 Meow meow meow..." << std::endl;
    std::cout << RESET;
}

std::string Cat::getIdea(int i) const
{
    return (this->_brain->getIdea(i));
}
