# Classes vs Structs

Em C++, tanto as classes quanto as structs são usadas para definir tipos de dados personalizados, mas há algumas diferenças importantes entre elas, principalmente relacionadas à visibilidade padrão de seus membros e métodos de herança. Vamos explorar essas diferenças:

## Visibilidade Padrão

Classes: Em uma classe, a visibilidade padrão dos membros é private. Isso significa que, a menos que especificado de outra forma, os membros de uma classe não podem ser acessados diretamente por código fora da classe.

```cpp
class MyClass {
    int data; // Privado por padrão
public:
    MyClass(int value) : data(value) {}
};
```

Structs: Em uma struct, a visibilidade padrão é public. Os membros de uma struct são acessíveis fora dela, a menos que sejam explicitamente declarados como private ou protected.

```cpp
struct MyStruct {
    int data; // Público por padrão
};
```

## Herança

Classes: Quando uma classe é herdada, a herança é private por padrão, a menos que seja explicitamente declarada como public ou protected.

```cpp
class Base {};
class Derived : Base {}; // Herança privada por padrão
```

Structs: Quando uma struct é herdada, a herança é public por padrão.

```cpp
struct Base {};
struct Derived : Base {}; // Herança pública por padrão
```

## Outras Semelhanças e Diferenças

Construtores, Destrutores, e Funções Membro: Tanto classes quanto structs podem ter construtores, destrutores, e funções membro.
Uso: Historicamente, structs eram usadas em C para estruturas de dados simples, principalmente para armazenar dados, enquanto classes eram usadas em C++ para objetos mais complexos que incluem funcionalidades (métodos).
Polimorfismo, Encapsulamento, e Abstração: Ambas podem ser usadas para implementar estes conceitos-chave da programação orientada a objetos.
Compatibilidade com C: Structs em C++ são compatíveis com structs em C, o que não é o caso com classes.

## Escolha entre Classe e Struct

A escolha entre usar uma class ou uma struct em C++ geralmente se baseia em convenções e na intenção de uso:

Class: Use class quando você precisar de um tipo de dados com encapsulamento (dados privados) e funcionalidades mais complexas.
Struct: Use struct para tipos de dados mais simples, onde os dados podem ser públicos e a estrutura é mais próxima de uma "estrutura de dados" do que de um objeto com comportamento complexo.
Em resumo, as principais diferenças entre classes e structs em C++ são a visibilidade padrão de seus membros e o tipo padrão de herança. Ambas podem ser usadas para criar tipos complexos, mas a escolha entre uma e outra geralmente se baseia em convenções de codificação e na complexidade do tipo de dados que está sendo modelado.