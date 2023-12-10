/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:51:48 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/10 16:40:17 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    this->_name = "default";
    for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << GREEN;
	std::cout << "A new character named 'default' has been created!" << std::endl;
	std::cout << RESET;
}

Character::Character(std::string const & name)
{
    this->_name = name;
    for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << GREEN;
	std::cout << "A new character named '" << this->_name << "' has been created!" << std::endl;
	std::cout << RESET;
}

Character::Character(Character const & src)
{
    this->_name = src._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i]->clone();
	std::cout << GREEN;
	std::cout << "A new character named '" << this->_name << "' has been created by copy!" << std::endl;
	std::cout << RESET;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	std::cout << RED;
	std::cout << "A character named '" << this->_name << "' has been destroyed!" << std::endl;
	std::cout << RESET;
}

Character & Character::operator=(Character const & rhs)
{
    if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i]->clone();
	return (*this);
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			std::cout << BLUE;
			std::cout << "Materia '" << m->getType() << "' equipped to character '" << this->_name << "'!" << std::endl;
			std::cout << RESET;
			return ;
		}
	}
	std::cout << YELLOW;
	std::cout << "Inventory of character '" << this->_name << "' is full!" << std::endl;
	std::cout << RESET;
	delete m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
	{
		std::cout << YELLOW;
		std::cout << "Invalid index!" << std::endl;
		std::cout << RESET;
		return ;
	}
	std::string type = this->_inventory[idx]->getType();
	std::cout << BLUE;
	std::cout << "Materia '" << type << "' unequipped from character '" << this->_name << "'!" << std::endl;
	std::cout << RESET;
	delete this->_inventory[idx];
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3 && this->_inventory[idx] != NULL)
	{
		this->_inventory[idx]->use(target);
		return ;
	}
	std::cout << YELLOW;
	std::cout << "Invalid index!" << std::endl;
	std::cout << RESET;
}
