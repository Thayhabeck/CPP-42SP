# Visibilidade

A visibilidade em C++ é um conceito fundamental que determina onde e como os membros de uma classe (como variáveis e funções) podem ser acessados. Em C++, existem três especificadores de acesso principais que controlam a visibilidade: public, private e protected. Estes especificadores são usados para implementar o encapsulamento, um dos pilares da programação orientada a objetos.

## Public

Descrição: Membros declarados como public podem ser acessados de qualquer parte do código onde o objeto da classe é visível.
Uso Comum: Utilizado para interfaces da classe, como métodos que podem ser chamados de fora da classe.

Exemplo:

```cpp
class MyClass {
public:
    int publicData;
};
MyClass obj;
obj.publicData = 5; // Acesso permitido
```

## Private

Descrição: Membros declarados como private só podem ser acessados dentro da própria classe ou por suas funções amigas (friend).
Uso Comum: Utilizado para dados internos e funções que não são destinadas ao uso externo, a fim de proteger o estado interno da classe.

Exemplo:

```cpp
class MyClass {
private:
    int privateData;
};
MyClass obj;
// obj.privateData = 5; // Acesso negado, gera erro de compilação
```

## Protected
Descrição: Membros declarados como protected podem ser acessados dentro da classe, por classes derivadas e por suas funções amigas.
Uso Comum: Utilizado para permitir que classes derivadas acessem dados ou funções, mantendo-os ocultos de outros contextos.

Exemplo:

```cpp
class Base {
protected:
    int protectedData;
};

class Derived : public Base {
    void func() {
        protectedData = 5; // Acesso permitido
    }
};
```

## Considerações Adicionais
Encapsulamento: A escolha cuidadosa do especificador de acesso é essencial para um bom encapsulamento, protegendo o estado interno do objeto e garantindo que os dados não sejam usados de maneira inapropriada.
Herança: A visibilidade também afeta como os membros são herdados. Por exemplo, membros private de uma classe base não são acessíveis diretamente por classes derivadas.
Classes vs. Structs: Em structs, o especificador de acesso padrão é public, enquanto em classes, é private.
Ao escolher o especificador de acesso apropriado em C++, é crucial considerar o design da classe, a segurança dos dados, e a interface pública que a classe expõe ao restante do programa. Essas decisões afetam diretamente a robustez, manutenção e usabilidade do código.