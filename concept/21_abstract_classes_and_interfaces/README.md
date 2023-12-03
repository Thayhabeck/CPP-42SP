# Classes abstratas e Interfaces

Em C++, as classes abstratas e as interfaces são conceitos utilizados para criar uma estrutura de design que promove a abstração e a modularidade. Vamos explorar cada um desses conceitos:

## Classes Abstratas

Definição: Uma classe abstrata é uma classe que não pode ser instanciada por si só. Ela é projetada para ser uma classe base de outras classes.

Funções Puramente Virtuais: Uma classe abstrata contém pelo menos uma função puramente virtual. Uma função puramente virtual é declarada com a atribuição de 0 ao final de sua declaração.

cpp
class AbstractClass {
public:
    virtual void pureVirtualFunction() = 0;
};


Uso: Classes abstratas são usadas como base para outras classes. As classes derivadas devem implementar todas as funções puramente virtuais da classe base abstrata para serem instanciáveis.

Propósito: Elas são usadas para definir interfaces e para implementar o polimorfismo, permitindo que objetos de diferentes classes derivadas sejam tratados de forma uniforme através de ponteiros ou referências para a classe base abstrata.

## Interfaces

Definição em C++: C++ não tem um conceito de "interface" como em algumas outras linguagens (como Java ou C#). No entanto, o conceito é simulado usando classes abstratas puras - classes onde todas as funções são puramente virtuais.

Exemplo de Interface:

cpp
class IInterface {
public:
    virtual void method1() = 0;
    virtual void method2() = 0;
    virtual ~IInterface() {} // Destrutor virtual
};


Uso: Uma "interface" em C++ define um contrato que outras classes devem implementar. As classes que implementam esta interface devem fornecer definições concretas para todas as funções da interface.

Propósito: As interfaces são usadas para garantir que certas classes sigam um conjunto específico de métodos, promovendo assim uma forma de polimorfismo e abstração.

## Considerações Importantes

Destrutores Virtuais: Em classes abstratas e interfaces, é comum ter destrutores virtuais. Isso garante que o destrutor correto seja chamado para objetos polimórficos, evitando vazamentos de memória.

Polimorfismo: Tanto classes abstratas quanto interfaces são usadas para alcançar polimorfismo em C++. Elas permitem que diferentes tipos de objetos sejam tratados de forma uniforme, desde que compartilhem uma classe base comum (abstrata).

Design de Software: A utilização de classes abstratas e interfaces é uma prática de design de software robusta, permitindo a criação de códigos mais flexíveis, extensíveis e fáceis de manter.

Em resumo, as classes abstratas e as interfaces em C++ são mecanismos fundamentais para a implementação de abstração e polimorfismo. Elas permitem um design de software mais flexível, embora C++ não tenha um suporte explícito para interfaces como em algumas outras linguagens orientadas a objetos.