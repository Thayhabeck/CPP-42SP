/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:21:08 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/05 00:57:09 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

const std::string PURPLE = "\033[35;1m";

int main()
{
    std::cout << std::endl;
    std::cout << "----------------------- ANIMALS TEST --------------------------" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Create a Animal array with 10 elements." << std::endl;
    std::cout << "Fill the Animal array with 10 Animals." << std::endl;
    std::cout << "Half of them are Cats and the other half are Dogs." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    const Animal *animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
    }
    
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creating a deep copy of one of the Cats in the array, using a new scope." << std::endl;
    std::cout << "Cat created with the copy constructor." << std::endl;
    std::cout << "Copied Cat will make a sound and print its idea." << std::endl;
    std::cout << "Copied Cat will be destroyed with the end of the scope." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    {
        Cat cat((Cat&)*animals[0]);
        std::cout << PURPLE << "Sound: ";
        cat.makeSound();
        std::cout << PURPLE << "Idea: " << cat.getIdea(42) << std::endl;
        std::cout << RESET;
    }

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Checking if the original Cat is still alive." << std::endl;
    std::cout << "Printing the Cat's type, sound and idea." << std::endl;
    std::cout << "Print Cat's idea means that the Cat's brain was successfully deep copied." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << PURPLE << "Type: " << animals[0]->getType() << std::endl;
    std::cout << "Sound: ";
    animals[0]->makeSound();
    std::cout << PURPLE << "Idea: " << ((Cat*)animals[0])->getIdea(42) << std::endl;
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creating a deep copy of one of the Dogs in the array, using a new scope." << std::endl;
    std::cout << "Dog created with the copy constructor." << std::endl;
    std::cout << "Copied Dog will make a sound and print its idea." << std::endl;
    std::cout << "Copied Dog will be destroyed with the end of the scope." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    {
        Dog dog((Dog&)*animals[1]);
        std::cout << PURPLE << "Sound: ";
        dog.makeSound();
        std::cout << PURPLE << "Idea: " << dog.getIdea(42) << std::endl;
        std::cout << RESET;
    }

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Checking if the original Dog is still alive." << std::endl;
    std::cout << "Printing the Dog's type, sound and idea." << std::endl;
    std::cout << "Print Dog's idea means that the Dog's brain was successfully deep copied." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << PURPLE << "Type: " << animals[1]->getType() << std::endl;
    std::cout << "Sound: ";
    animals[1]->makeSound();
    std::cout << PURPLE << "Idea: " << ((Dog*)animals[1])->getIdea(42) << std::endl;
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Deleting the Animal array." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    for (int i = 0; i < 10; i++)
        delete animals[i];

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creating a new Cat and a new Dog." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    Cat kitty;
    Dog puppy;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creating a deep copy of the Cat and the Dog, using the assignation operator." << std::endl;
    std::cout << "The copies are created in a new scope." << std::endl;
    std::cout << "Copied Cat and Dog will make a sound and print their idea." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    {
        Cat cat2 = kitty;
        Dog dog2 = puppy;
        kitty.makeSound();
        std::cout << PURPLE << "Idea: " << kitty.getIdea(10) << std::endl;
        puppy.makeSound();
        std::cout << PURPLE << "Idea: " << puppy.getIdea(10) << std::endl;
    }

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Checking if the original Cat and Dog are still alive." << std::endl;
    std::cout << "Printing the Cat's and Dog's sound and idea." << std::endl;
    std::cout << "Print Cat's and Dog's idea means that the Cat's and Dog's brain was successfully deep copied." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    std::cout << PURPLE << "Sound: ";
    kitty.makeSound();
    std::cout << PURPLE << "Idea: " << kitty.getIdea(10) << std::endl;

    std::cout << PURPLE << "Sound: ";
    puppy.makeSound();
    std::cout << PURPLE << "Idea: " << puppy.getIdea(10) << std::endl;
    std::cout << RESET;

    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Cat and Dog are destroyed with the end of the program." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;

    return (0);
}