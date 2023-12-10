/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:55:08 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/10 16:16:40 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << GREEN;
	std::cout << "A new materia source has been created!" << std::endl;
	std::cout << RESET;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    *this = src;
	std::cout << GREEN;
	std::cout << "A new materia source has been created by copy!" << std::endl;
	std::cout << RESET;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	std::cout << RED;
	std::cout << "A materia source has been destroyed!" << std::endl;
	std::cout << RESET;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    if (this == &rhs)
		return (*this);
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			std::cout << BLUE;
			std::cout << "Materia source learned " << m->getType() << "!" << std::endl;
			std::cout << RESET;
			return ;
		}
	}
	std::cout << YELLOW;
	std::cout << "Inventory is full!" << std::endl;
	std::cout << RESET;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
		{
			std::cout << BLUE;
			std::cout << "Materia source create " << type << " materia!" << std::endl;
			std::cout << RESET;
			return (this->_inventory[i]->clone());
		}
	}
	std::cout << YELLOW;
	std::cout << "Materia source doesn't know " << type << "!" << std::endl;
	std::cout << RESET;
	return (NULL);
}
