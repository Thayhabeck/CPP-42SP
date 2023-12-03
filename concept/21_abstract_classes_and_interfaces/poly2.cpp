/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poly2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:51:08 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/03 18:13:42 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// Classe abstrata
// Uma classe abstrata é uma classe que não pode ser instanciada
// Uma classe abstrata é uma classe que contém pelo menos uma função puramente virtual
// Uma função puramente virtual é uma função que não tem implementação
// Uma função puramente virtual é uma função que é declarada com o = 0 no final
// Uma função puramente virtual é uma função que deve ser sobrescrita em uma classe filha
// Uma boa prática é colocar o destrutor como virtual também
// Uma boa prática é colocar o prefixo A na frente do nome da classe para indicar que é uma classe abstrata
class ACharacter
{
    private:
        std::string _name;
    public:
        // O = 0 significa que é uma função puramente virtual e que a classe é abstrata
        virtual void attack(std::string const & target) = 0;
        // Uma função normal pode ser declarada em uma classe abstrata
        void sayHello(std::string const & target);
        // O destrutor deve ser virtual para que o destrutor da classe filha seja chamado
        virtual ~ACharacter() {}
};

class Warrior : public ACharacter
{
    public:
        // Sobrescrita da função puramente virtual
        virtual void attack(std::string const & target);
};

void ACharacter::sayHello(std::string const & target)
{
    std::cout << "Hello " << target << " !" << std::endl;
}

void Warrior::attack(std::string const & target)
{
    std::cout << "*attacks " << target << " with a sword*" << std::endl;
}


// Interface
// Uma interface é uma classe abstrata que contém apenas funções puramente virtuais
// Uma boa prática é colocar o prefixo I na frente do nome da classe para indicar que é uma interface
class ICoffe
{
    public:
        virtual void prepare(void) = 0;
};

class IWaterSource
{
    public:
        virtual void provideWater(void) = 0;
};

class ICoffeeMaker
{
    public:
        virtual void fillWaterTank(IWaterSource *src) = 0;
        virtual ICoffe *makeCoffee(std::string const &type) = 0;
};

int main(void)
{
    ACharacter *a = new Warrior();

    // Erro, não pode instanciar uma classe abstrata
    // ACharacter *b = new ACharacter(); 

    a->sayHello("students");

    // Erro, não pode chamar uma função puramente virtual
    // a->attack("students");

    delete a;

    Warrior *w = new Warrior();

    // Um Warrior é um ACharacter, então pode usar a função sayHello
    w->sayHello("students");
    // Um Warrior não é abstrato, então pode usar a função attack implementada por ele
    w->attack("students");

    return (0);
}

// Para compilar: c++ -Wall -Wextra -Werror -std=c++98 poly2.cpp -o test
