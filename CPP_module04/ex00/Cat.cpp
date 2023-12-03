/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:28:06 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/03 19:28:49 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << GREEN;
    std::cout << "😺 A new Cat was born!" << std::endl;
    std::cout << RESET;
    this->_type = "Cat";
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    std::cout << GREEN;
    std::cout << "😺 A new Cat was born by copy!" << std::endl;
    std::cout << RESET;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << RED;
    std::cout << "😺 Cat was destroyed!" << std::endl;
    std::cout << RESET;
}

Cat &Cat::operator=(Cat const &cat)
{
    std::cout << YELLOW;
    std::cout << "😺 A new Cat was born by assignation!" << std::endl;
    std::cout << RESET;
    this->_type = cat._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << BLUE;
    std::cout << "😺 Meow meow meow..." << std::endl;
    std::cout << RESET;
}

