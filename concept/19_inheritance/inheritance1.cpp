/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance1.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:40:03 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/28 18:13:47 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Animal
{
protected:
    int _numberOfLegs;

public:
    Animal();
    Animal(Animal const &copy);
    Animal &operator=(Animal const &assign);
    // O destrutor virtual é necessário para que o destrutor da classe derivada seja chamado
    // O 'virtual' significa que o método pode ser sobrescrito por uma classe derivada
    virtual ~Animal();

    void    run(int distance);
    void    call(void);
    void    eat(std::string const &food);
    void    walk(int distance);
};

// A classe Otter herda da classe Animal, e portanto, possui todos os métodos e atributos da classe Animal
// A classe Otter é uma subclasse da classe Animal
// A classe Otter possui uma relação de herança com a classe Animal
// A classe Otter possui um método swim que não existe na classe Animal
class Otter : public Animal
{
    public:
        Otter();
        Otter(Otter const &copy);
        Otter &operator=(Otter const &assign);
        ~Otter();

        void swim(int distance) const;
};

// A classe Cat herda da classe Animal, e portanto, possui todos os métodos e atributos da classe Animal
// A classe Cat é uma subclasse da classe Animal
// A classe Cat possui uma relação de herança com a classe Animal
// A classe Cat possui um método scornSomeone que não existe na classe Animal
class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &copy);
        Cat &operator=(Cat const &assign);
        ~Cat();

        void scornSomeone(std::string const &target) const;
};

// A classe Pony herda da classe Animal, e portanto, possui todos os métodos e atributos da classe Animal
// A classe Pony é uma subclasse da classe Animal
// A classe Pony possui uma relação de herança com a classe Animal
// A classe Pony possui um método doMagic que não existe na classe Animal
class Pony : public Animal
{
    public:
        Pony();
        Pony(Pony const &copy);
        Pony &operator=(Pony const &assign);
        ~Pony();

        void doMagic(std::string const &target) const;
        void run(int distance) const;
};


Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &assign)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &assign)
    {
        this->_numberOfLegs = assign._numberOfLegs;
    }
    return (*this);
}

void    Animal::run(int distance)
{
    std::cout << "Animal runs " << distance << " meters" << std::endl;
}

void    Animal::call(void)
{
    std::cout << "Animal makes a call" << std::endl;
}

void    Animal::eat(std::string const &food)
{
    std::cout << "Animal eats " << food << std::endl;
}

void    Animal::walk(int distance)
{
    std::cout << "Animal walks " << distance << " meters" << std::endl;
}

Otter::Otter(void) : Animal()
{
    std::cout << "Otter constructor called" << std::endl;
}

Otter::Otter(Otter const &copy) : Animal(copy)
{
    std::cout << "Otter copy constructor called" << std::endl;
    *this = copy;
}

Otter::~Otter(void)
{
    std::cout << "Otter destructor called" << std::endl;
}

Otter &Otter::operator=(Otter const &assign)
{
    std::cout << "Otter assignation operator called" << std::endl;
    if (this != &assign)
    {
        this->_numberOfLegs = assign._numberOfLegs;
    }
    return (*this);
}

void    Otter::swim(int distance) const
{
    std::cout << "Otter swims " << distance << " meters" << std::endl;
}

Cat::Cat(void) : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &assign)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &assign)
    {
        this->_numberOfLegs = assign._numberOfLegs;
    }
    return (*this);
}

void    Cat::scornSomeone(std::string const &target) const
{
    std::cout << "Cat scorns " << target << std::endl;
}

Pony::Pony(void) : Animal()
{
    std::cout << "Pony constructor called" << std::endl;
}

Pony::Pony(Pony const &copy) : Animal(copy)
{
    std::cout << "Pony copy constructor called" << std::endl;
    *this = copy;
}

Pony::~Pony(void)
{
    std::cout << "Pony destructor called" << std::endl;
}

Pony &Pony::operator=(Pony const &assign)
{
    std::cout << "Pony assignation operator called" << std::endl;
    if (this != &assign)
    {
        this->_numberOfLegs = assign._numberOfLegs;
    }
    return (*this);
}

void    Pony::doMagic(std::string const &target) const
{
    std::cout << "Pony does magic on " << target << std::endl;
}

void    Pony::run(int distance) const
{
    std::cout << "Pony runs " << distance << " meters" << std::endl;
}

int main(void)
{
    // Instanciando objetos das classes Animal, Otter, Cat e Pony
    Animal  animal;
    Otter   otter;
    Cat     cat;
    Pony    pony;

    std::cout << std::endl;

    // Chamando os métodos das classes Animal
    std::cout << "______________Animal class methods:" << std::endl;
    animal.run(10);
    animal.call();
    animal.eat("whatever");
    animal.walk(5);

    std::cout << std::endl;

    // Chamando os métodos das classes Otter
    std::cout << "______________Otter class methods:" << std::endl;
    otter.run(10);
    otter.call();
    otter.eat("fish");
    otter.walk(5);
    otter.swim(10);

    std::cout << std::endl;

    // Chamando os métodos das classes Cat
    std::cout << "______________Cat class methods:" << std::endl;
    cat.run(10);
    cat.call();
    cat.eat("feed");
    cat.walk(5);
    cat.scornSomeone("you");

    std::cout << std::endl;

    // Chamando os métodos das classes Pony
    std::cout << "______________Pony class methods:" << std::endl;
    pony.run(10);
    pony.call();
    pony.eat("hay");
    pony.walk(5);
    pony.doMagic("you");

    std::cout << std::endl;

    return (0);
}

// Para compilar: c++ -Wall -Wextra -Werror -std=c++98 inheritance1.cpp -o inheritance