# Classes Aninhadas

Em C++, uma classe aninhada, ou "nested class", é uma classe definida dentro do escopo de outra classe. Essas classes aninhadas são usadas para encapsular lógicas ou tipos de dados que são relevantes apenas dentro do contexto da classe externa, contribuindo para a organização e manutenção do código. Vamos explorar as características e usos das classes aninhadas em C++:

## Características das Classes Aninhadas

Definição: Uma classe aninhada é definida inteiramente dentro do escopo de outra classe (chamada de classe externa ou classe envolvente).

Visibilidade: Uma classe aninhada pode ser pública, protegida ou privada, como qualquer outro membro da classe externa. Sua visibilidade determina como ela pode ser acessada de fora da classe externa.

Acesso a Membros da Classe Externa: A classe aninhada tem acesso a todos os membros da classe externa, incluindo aqueles privados e protegidos. No entanto, a classe externa não tem acesso direto aos membros da classe aninhada.

Instanciação: Objetos da classe aninhada podem ser criados independentemente de objetos da classe externa, a menos que a classe aninhada dependa de algum membro não estático da classe externa.

## Exemplo de Classe Aninhada

```cpp
class OuterClass {
public:
    class NestedClass {
    public:
        void nestedFunction() {
            // Pode acessar membros de OuterClass
        }
    };

    void outerFunction() {
        NestedClass nested;
        nested.nestedFunction();
    }
};
```

Neste exemplo, NestedClass é uma classe aninhada dentro de OuterClass. NestedClass pode acessar membros de OuterClass, mas não o contrário.

## Usos Comuns

Organização de Código: Classes aninhadas são úteis para organizar o código de maneira lógica, mantendo classes e estruturas relacionadas próximas umas das outras.
Encapsulamento: Elas ajudam a encapsular funcionalidades que são relevantes apenas para a classe externa, mantendo o escopo limitado e o código mais limpo.
Implementação de Iteradores: Em bibliotecas de coleções de dados (como STL em C++), classes aninhadas são frequentemente usadas para implementar iteradores.
Padrões de Design: Alguns padrões de design, como o padrão Factory, às vezes utilizam classes aninhadas.
Considerações
Legibilidade: Enquanto classes aninhadas podem ajudar na organização do código, elas podem também torná-lo mais complexo. Portanto, devem ser usadas quando fizerem sentido para a estrutura e a lógica do programa.
Dependência: É importante estar ciente das dependências entre a classe aninhada e a classe externa, especialmente em relação ao acesso aos membros não estáticos.
Em resumo, classes aninhadas em C++ são uma ferramenta poderosa para organizar e encapsular lógicas complexas dentro de uma classe, mantendo o código mais limpo e estruturado. Elas oferecem acesso direto aos membros da classe externa, mas devem ser usadas com consideração para manter a clareza do código.
