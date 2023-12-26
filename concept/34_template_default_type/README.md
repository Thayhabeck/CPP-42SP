# Tipo padrão de parâmetro de template

Em C++, é possível especificar um tipo padrão para um parâmetro de template, conhecido como "template default type". Isso permite que você defina um tipo que será usado pelo template caso nenhum tipo seja especificamente fornecido na sua instanciação. Isso é especialmente útil para criar templates flexíveis que podem ser usados de maneira mais ampla sem a necessidade de especificar um tipo para cada caso de uso.

## Sintaxe Básica

A sintaxe para definir um tipo padrão em um template é simplesmente fornecer um tipo após o parâmetro de template na declaração do template, como mostrado a seguir:

```cpp
template <typename T = int>
class MyClass {
    // ...
};

MyClass<> myObject; // Instancia MyClass com T sendo int
```

Neste exemplo, MyClass é definido com um tipo padrão int para o template. Portanto, se nenhum tipo for fornecido ao criar uma instância de MyClass, o tipo int será usado.

## Exemplo de Uso

Vamos considerar um exemplo mais prático:

```cpp
#include <iostream>

template <typename T = double>
class Number {
public:
    Number(T val) : value(val) {}

    void print() const {
        std::cout << value << std::endl;
    }

private:
    T value;
};

int main() {
    Number<> defaultNumber(5.5); // Usa o tipo padrão double
    defaultNumber.print();       // Imprime 5.5

    Number<int> intNumber(10);   // Especifica int explicitamente
    intNumber.print();           // Imprime 10

    return 0;
}
```

Neste exemplo, a classe Number é definida com um template que tem double como tipo padrão. Quando Number<> é instanciado sem um tipo específico, ele usa double. No entanto, você ainda pode especificar um tipo diferente, como int, se desejar.

## Considerações Importantes

Legibilidade: Embora os tipos padrão em templates aumentem a flexibilidade, eles também podem tornar o código menos legível se não for claro que tipo está sendo usado. Certifique-se de que o uso de tipos padrão seja claro e justificado.

Template Functions: A mesma sintaxe e lógica se aplicam a funções de template. Você pode definir um tipo padrão para um parâmetro de template em uma função.

Compatibilidade com Versões Anteriores: A especificação de tipo padrão em templates foi introduzida no C++11. Portanto, não é compatível com padrões mais antigos de C++.

Os tipos padrão de templates oferecem uma maneira eficiente de criar templates flexíveis e reutilizáveis, permitindo o uso mais amplo de templates sem a necessidade de especificar tipos em cada instância.
