/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:38:57 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/03 17:57:12 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Character
{
    public:
        //A palavra-chave virtual é usada para declarar uma função membro virtual na classe base.
        //A palavra-chave virtual indica que a função membro pode ser substituída na classe derivada.
        //Se não for virtual, o compilador não pode determinar qual função chamar em tempo de execução.
        virtual void sayHello(std::string const & target);
};

class Warrior : public Character
{
    public:
        //A palavra-chave virtual é usada para declarar uma função membro virtual na classe base.
        //A palavra-chave virtual indica que a função membro pode ser substituída na classe derivada.
        virtual void sayHello(std::string const & target);
};

class Cat
{
};

void Character::sayHello(std::string const & target)
{
    std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::sayHello(std::string const & target)
{
    std::cout << "F*** off " << target << ", I don't like you !" << std::endl;
}

int main(void)
{
    //Ao criar um objeto de uma classe derivada, podemos atribuí-lo a um ponteiro de classe base.
    //Está OK, Warrior é um Warrior
    Warrior* a = new Warrior();

    //Esta OK, Warrior é um Character
    Character* b = new Warrior();

    //Isto não está OK, nem todos os Characters são Warriors
    //(Warrior é um Character, mas Character não é um Warrior)
    //Warrior* c = new Character();

    //Isto não está OK, Cat não é um Character
    //(Eles não possuem uma relação de herança)
    //Character* d = new Cat();

    a->sayHello("students");

    // Sem o virtual, seria chamado o sayHello da classe Character
    // Com o virtual, é chamado o sayHello da classe Warrior
    b->sayHello("students");

    return (0);
}

// Para compilar: c++ -Wall -Wextra -Werror -std=c++98 poly1.cpp -o poly1
