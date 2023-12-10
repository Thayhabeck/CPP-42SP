/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:56:58 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/10 16:39:25 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

int main(void)
{
	std::cout << std::endl;
    std::cout << "----------------------- MATERIA TEST --------------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Creation of materia source..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	IMateriaSource *src = new MateriaSource();

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "The materia source learns the ice materia..." << std::endl;
	std::cout << "The materia source learns the cure materia..." << std::endl;
	std::cout << "The materia source learns the ice materia..." << std::endl;
	std::cout << "The materia source learns the cure materia..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "The materia source tries to learn another materia..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	src->learnMateria(new Cure());

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Creation of character 'me'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	ICharacter *me = new Character("me");

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Creation of a pointer to an abstract materia 'tmp'..." << std::endl;
	std::cout << "The materia source creates a materia of type 'ice'..." << std::endl;
	std::cout << "The pointer 'tmp' is assigned to the materia 'ice'..." << std::endl;
	std::cout << "The character 'me' equips the materia 'ice'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "The materia source creates a materia of type 'cure'..." << std::endl;
	std::cout << "The pointer 'tmp' is assigned to the materia 'cure'.." << std::endl;
	std::cout << "The character 'me' equips the materia 'cure'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "The materia source tries to create another materia of type 'bubble'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	tmp = src->createMateria("bubble");

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "The character 'me' equips the materia type 'ice' from the materia source..." << std::endl;
	std::cout << "The character 'me' equips the materia type 'cure' from the materia source..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "The character 'me' tries to equip another materia..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	me->equip(src->createMateria("cure"));

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "The character 'me' unequips the last materia 'cure'..." << std::endl;
	std::cout << "The character 'me' unequips the last materia 'ice'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	me->unequip(3);
	me->unequip(2);

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Creation of character 'bob'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	ICharacter *bob = new Character("bob");

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Character 'me' uses the materia 'ice' on character 'bob'..." << std::endl;
	std::cout << "Character 'me' uses the materia 'cure' on character 'bob'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Character 'me' uses inexistent materia on character 'bob'..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	me->use(3, *bob);

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Character 'bob' was deleted..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	delete bob;

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Character 'me' was deleted..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	delete me;

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Materia source was deleted..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;

	delete src;

	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "----------------------- END OF TEST ---------------------------" << std::endl;
	
	return 0;
}
