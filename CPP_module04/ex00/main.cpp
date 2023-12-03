/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:21:08 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/03 20:13:15 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

const std::string PURPLE = "\033[35;1m";

int main()
{
    std::cout << std::endl;
    std::cout << "----------------------- ANIMALS TEST --------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Instantiate Animal class, atributing to a Animal pointer." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    
    const Animal* meta = new Animal();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Instantiate Cat class, atributing to a Animal pointer." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    const Animal* i = new Cat();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Instantiate Dog class, atributing to a Animal pointer." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    const Animal* j = new Dog();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Get the type of the Animal atributed to the Cat pointer." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << PURPLE << i->getType() << RESET << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Get the type of the Animal atributed to the Dog pointer." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << PURPLE << j->getType() << RESET << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Make the Cat sound." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    i->makeSound();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Make the Dog sound." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    j->makeSound();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Make the Animal sound." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    meta->makeSound();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "-------------------- WRONG ANIMALS TEST -----------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Instantiate WrongAnimal class, atributing to a WrongAnimal pointer." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    const WrongAnimal* wrongmeta = new WrongAnimal();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Instantiate WrongCat class, atributing to a WrongAnimal pointer." << std::endl;
    std::cout << "I think this Animal is a Cat, but it's a WrongCat." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    const WrongAnimal* wrongi = new WrongCat();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Make the WrongAnimal sound." << std::endl;
    std::cout << "WrongAnimal is just a rock, so i can't hear it." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    wrongmeta->makeSound();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Get the type of the WrongAnimal atributed to the WrongCat pointer." << std::endl;
    std::cout << "I really think it's a Cat, but it's a WrongCat." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << PURPLE << wrongi->getType() << RESET << std::endl;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Make the WrongCat sound." << std::endl;
    std::cout << "I will finally find out if it's a Cat or not." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    wrongi->makeSound();

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "I realized that it's not a Cat, it's a WrongCat... A TIGER!!!" << std::endl;
    std::cout << "Run for your life!!!" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Delete all the pointers." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    delete meta;
    delete i;
    delete j;
    delete wrongmeta;
    delete wrongi;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "----------------------- END OF TESTS --------------------------" << std::endl;

    return (0);
}