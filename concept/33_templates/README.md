# C++ Templates

Em C++, os templates são um poderoso recurso da linguagem que permite a programação genérica. Eles permitem que você escreva código que pode operar com diferentes tipos de dados sem reescrevê-lo para cada tipo. Essencialmente, um template é um molde que pode ser usado para gerar classes ou funções que funcionam com qualquer tipo, o que é especialmente útil para coleções de dados, algoritmos e operações que são independentes do tipo de dados.

## Templates de Classe

Um template de classe é uma especificação para gerar classes com base em um tipo de dado genérico. O exemplo mais conhecido é o da Standard Template Library (STL), que inclui classes como std::vector e std::map.

```cpp
template <typename T>
class MyClass {
public:
    T data;
    void doSomething() {
        // Operações com 'data' do tipo T
    }
};

MyClass<int> myIntClass;     // Instância com int
MyClass<std::string> myStringClass; // Instância com string
```

## Templates de Função

Templates de função permitem criar funções que podem operar em diferentes tipos de dados.

```cpp
template <typename T>
void print(const T& value) {
    std::cout << value << std::endl;
}

print(123);        // Imprime um inteiro
print("Hello");    // Imprime uma string
```

## Especialização de Template

A especialização de template permite criar uma implementação específica para um tipo de dado particular, diferenciando-o da implementação genérica.

```cpp
template <>
void print(const std::string& value) {
    std::cout << "String: " << value << std::endl;
}
```

## Considerações

Tipos de Dados: Com templates, você pode usar tipos primitivos (como int, double), classes personalizadas ou mesmo outros templates como tipos de argumentos.
Compilação: Templates são expandidos em tempo de compilação, o que significa que o código é gerado para cada tipo usado com um template.
Segurança de Tipo: Como os templates são resolvidos em tempo de compilação, eles são seguros em termos de tipos, desde que usados corretamente.
Complexidade e Erros de Compilação: O uso de templates pode aumentar a complexidade do código e levar a mensagens de erro de compilação longas e difíceis de decifrar.
Reutilização de Código: Templates são uma poderosa ferramenta para a reutilização de código e para escrever bibliotecas genéricas.
Em resumo, os templates em C++ são uma ferramenta fundamental para a programação genérica, permitindo a criação de código flexível e reutilizável que funciona com diversos tipos de dados. Eles são amplamente utilizados na STL e são cruciais para escrever código eficiente e modular.
