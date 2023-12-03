# Atrubutos e funções membro

Em C++, os atributos e funções membro são componentes fundamentais de uma classe. Eles definem respectivamente os dados e o comportamento dos objetos dessa classe. Vamos explorar cada um deles detalhadamente:

## Atributos Membro (Campos ou Propriedades da Classe)

Definição: Atributos membro, também conhecidos como campos ou propriedades, são variáveis que armazenam o estado de um objeto de uma classe.

Declaração: São declarados dentro da classe, mas fora de qualquer método. Eles podem ser de qualquer tipo: primitivo (como int, double), objeto de outra classe, ponteiro, array, etc.

Visibilidade: Podem ser public, private ou protected, determinando assim quem pode acessar esses atributos. Geralmente são mantidos como private para manter o encapsulamento.

Inicialização: Podem ser inicializados diretamente na declaração (em C++11 em diante) ou através de listas de inicialização no construtor.

```cpp
class MyClass {
public:
    MyClass() : number(0) {}

private:
    int number;
};
```

Exemplo:

```cpp
class Car {
private:
    std::string brand;
    int year;
};
```

## Funções Membro (Métodos da Classe)

Definição: Funções membro, ou métodos, são funções que definem o comportamento dos objetos de uma classe. Elas têm acesso aos atributos membro e podem modificar seu estado.

Declaração: São declaradas dentro da classe e podem ser definidas dentro ou fora da classe. A definição fora da classe requer o uso do nome da classe seguido por ::, o operador de resolução de escopo.

Visibilidade: Assim como os atributos, as funções membro podem ser public, private, ou protected.

Tipos: Podem ser funções normais, funções const (que não modificam o estado do objeto), funções estáticas (que não dependem de instâncias de objetos para serem chamadas), entre outras.

Exemplo:

```cpp
class Car {
public:
    void setBrand(const std::string &b) {
        brand = b;
    }

    std::string getBrand() const {
        return brand;
    }

private:
    std::string brand;
};
```

## Importância do Encapsulamento

A combinação de atributos e funções membro, com o controle de acesso apropriado, é a base do encapsulamento em programação orientada a objetos. Isso significa que o estado interno de um objeto é mantido seguro de interferências e modificações externas, e todas as interações com o objeto são realizadas através de uma interface bem definida (seus métodos públicos).

Em resumo, os atributos e funções membro em C++ são essenciais para a definição e o funcionamento das classes, representando respectivamente os dados e comportamentos dos objetos dessas classes. A correta utilização desses elementos é fundamental para criar um código robusto, modular e fácil de manter.