# Forma canônica

A "forma canônica" em C++ refere-se a um conjunto de convenções para a escrita de classes, visando criar um design de classe robusto e consistente. Ela inclui a implementação de quatro funções especiais que o compilador pode gerar automaticamente se não forem definidas explicitamente pelo programador. Estas funções são:

Construtor Padrão: Uma função que é chamada para construir um objeto quando nenhum argumento é fornecido. Se um construtor explícito não é fornecido, o compilador gera um construtor padrão.

Construtor de Cópia: Uma função que constrói uma nova instância de uma classe como uma cópia de uma instância existente. Se não fornecido, o compilador gera um construtor de cópia que faz uma cópia superficial dos membros da classe.

Operador de Atribuição de Cópia: Permite definir como um objeto de uma classe é copiado quando é atribuído a partir de outra instância da mesma classe. Na ausência de uma definição explícita, o compilador fornece uma implementação que copia cada membro da classe.

Destrutor: Uma função chamada quando um objeto é destruído. Se um destrutor explícito não é fornecido, o compilador gera um destrutor padrão que normalmente apenas libera os recursos usados pelo próprio objeto.

## Importância da Forma Canônica
Gerenciamento de Recursos: As classes em C++ muitas vezes gerenciam recursos (como memória dinâmica ou conexões de rede) que não são gerenciados automaticamente. As funções canônicas permitem controlar como esses recursos são copiados e destruídos.

## Regra dos Três/Cinco:

A Regra dos Três afirma que se uma classe precisa de um destrutor personalizado, ela provavelmente também precisará de um construtor de cópia personalizado e um operador de atribuição de cópia.
A Regra dos Cinco é uma extensão da Regra dos Três. Ela adiciona o construtor de movimento e o operador de atribuição de movimento à lista, que são importantes para a eficiência em operações com recursos pesados.
Prevenção de Problemas: A ausência de definições apropriadas para estas funções pode levar a problemas como vazamentos de memória, duplicação indesejada de recursos, e outros bugs relacionados à gestão de recursos.

## Exemplo de Forma Canônica

```cpp
class MyClass {
public:
    MyClass();                         // Construtor Padrão
    MyClass(const MyClass& other);     // Construtor de Cópia
    MyClass& operator=(const MyClass& other); // Operador de Atribuição de Cópia
    ~MyClass();                        // Destrutor

    // Se utilizando C++11 ou posterior:
    MyClass(MyClass&& other);          // Construtor de Movimento
    MyClass& operator=(MyClass&& other); // Operador de Atribuição de Movimento
};
```

Em resumo, seguir a forma canônica em C++ ajuda a garantir que a classe gerencie seus recursos de forma segura e eficiente, evitando erros comuns e melhorando a qualidade do código.