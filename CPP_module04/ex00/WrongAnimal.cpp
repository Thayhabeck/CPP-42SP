/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:08:17 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/05 01:02:12 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << WGREEN;
    std::cout << "A new WrongAnimal was born!" << std::endl;
    std::cout << WRESET;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << WGREEN;
    std::cout << "A new WrongAnimal of type " << type << " was born!" << std::endl;
    std::cout << WRESET;
    this->_type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    std::cout << WGREEN;
    std::cout << "A new WrongAnimal was born by copy!" << std::endl;
    std::cout << WRESET;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << WRED;
    std::cout << "WrongAnimal was destroyed!" << std::endl;
    std::cout << WRESET;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &wronganimal)
{
    this->_type = wronganimal._type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << WBLUE;
    if (this->_type == "WrongCat")
        std::cout << "🐯 Meaw a shit... ROAAAAAAAR! " << std::endl;
    else
        std::cout << "[Silence] - (It's not an Animal, it's a rock!)" << std::endl;
    std::cout << WRESET;
}
