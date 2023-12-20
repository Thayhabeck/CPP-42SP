# Polimorfismo de subtipagem

O polimorfismo de subtipagem em C++ é um conceito fundamental da programação orientada a objetos. Ele permite que objetos de diferentes classes sejam tratados como objetos de uma classe comum. Aqui estão os pontos chave:

Definição: Polimorfismo de subtipagem, também conhecido como polimorfismo de inclusão, ocorre quando uma classe derivada é tratada como se fosse um objeto de sua classe base. Isso permite que diferentes tipos de objetos sejam usados de maneira intercambiável, desde que compartilhem uma base comum.

Classes Base e Derivadas: Em C++, você tem uma classe base e uma ou mais classes derivadas. A classe derivada herda características da classe base, mas também pode adicionar as suas próprias características ou modificar as herdadas.

Funções Virtuais: A chave para o polimorfismo de subtipagem em C++ são as funções virtuais. Uma função virtual é declarada na classe base e pode ser sobrescrita pela classe derivada. A decisão sobre qual versão da função chamar é tomada em tempo de execução (polimorfismo em tempo de execução).

Ponteiros e Referências para Classe Base: Você pode usar ponteiros ou referências para a classe base para apontar para objetos de qualquer uma das classes derivadas. Isso permite que você chame métodos das classes derivadas sem precisar conhecer o tipo exato do objeto.

## Exemplo Prático:

Suponha uma classe base Animal com um método virtual speak().
Duas classes derivadas, Dog e Cat, sobrescrevem speak() para emitir sons específicos.
Um ponteiro para Animal pode apontar para um objeto Dog ou Cat, e chamar speak() resultará no som correspondente ao tipo real do objeto (latido para Dog, miado para Cat).

## Benefícios:

Reutilização de Código: As classes derivadas herdam características da classe base, promovendo a reutilização de código.
Flexibilidade e Manutenibilidade: O polimorfismo permite escrever código que funciona com tipos de dados que podem não ter sido previstos, facilitando a manutenção e expansão do código.

## Restrições:

Para que uma função seja polimórfica, ela deve ser declarada como virtual na classe base.
O polimorfismo só funciona com ponteiros ou referências.

Em resumo, o polimorfismo de subtipagem em C++ é uma técnica poderosa que facilita a escrita de código flexível e reutilizável, permitindo que classes derivadas sejam tratadas como se fossem da classe base, principalmente por meio do uso de funções virtuais.

O uso da palavra-chave virtual em C++ é crucial para habilitar o polimorfismo de subtipagem. Vamos explorar como isso funciona:

## Funções Virtuais:

Definição: Uma função é declarada como virtual na classe base. Isso sinaliza para o compilador que a função pode ser sobrescrita em uma classe derivada.

### Comportamento em Tempo de Execução: 

Quando uma função membro é virtual, o C++ usa o vinculo tardio (ou late binding) para decidir qual versão da função chamar em tempo de execução. Isso significa que a decisão sobre qual função executar é feita não no momento da compilação, mas no momento da execução.

### Sobrescrevendo Funções Virtuais:

Em classes derivadas, você pode sobrescrever uma função virtual para fornecer uma implementação específica para essa classe.
Se uma classe derivada não fornece uma sobrescrita, a implementação da classe base é usada.
Tabelas de Funções Virtuais (VTables):

O C++ implementa polimorfismo de subtipagem usando tabelas de funções virtuais (VTables).
Cada classe com funções virtuais tem uma VTable associada, que é uma tabela de ponteiros para funções virtuais.
Objetos de classes com funções virtuais têm um ponteiro para a VTable correspondente (vptr), que é usado para encontrar a implementação correta em tempo de execução.

### Exemplo:

```cpp
class Base {
public:
    virtual void func() { cout << "Função da Base" << endl; }
};

class Derived : public Base {
public:
    void func() override { cout << "Função da Derived" << endl; }
};
```

Aqui, func é virtual na classe Base e sobrescrita na classe Derived.
Se você tem um ponteiro para Base que aponta para um objeto Derived, e chama func(), a implementação em Derived será executada.
Importância:

Sem virtual, o C++ realiza o vinculo precoce (ou early binding) baseado no tipo do ponteiro, não no tipo do objeto apontado, o que impede o polimorfismo.
O uso de virtual permite que o C++ escolha a implementação correta com base no tipo real do objeto, habilitando o polimorfismo dinâmico.

### Destrutores Virtuais:

É uma prática importante declarar destrutores como virtual em classes que serão usadas polimorficamente. Isso garante que o destrutor correto seja chamado para objetos derivados, prevenindo vazamentos de memória ou outros problemas relacionados à limpeza de recursos.

Em resumo, o uso de virtual em C++ é fundamental para implementar polimorfismo de subtipagem, permitindo que o código funcione com objetos de tipos derivados de maneira flexível e segura, garantindo que a função apropriada seja chamada em tempo de execução.

# Cópia Profunda

Em C++, uma cópia profunda (deep copy) refere-se ao processo de copiar todos os campos de um objeto e, crucialmente, fazer cópias de quaisquer dados que os ponteiros dentro do objeto apontem. Isso contrasta com uma cópia superficial (shallow copy), onde apenas os valores dos próprios membros de dados são copiados, mas não os dados para os quais os ponteiros apontam. Vamos explorar mais sobre a cópia profunda:

## Diferença entre Cópia Profunda e Cópia Superficial

Cópia Superficial: Copia apenas os valores dos membros, incluindo os endereços contidos nos ponteiros. Isso significa que os ponteiros em ambos os objetos originais e copiados apontarão para o mesmo local na memória.

Cópia Profunda: Cria uma cópia de todos os membros e também aloca memória separada para os dados apontados pelos ponteiros, copiando os dados. Isso garante que o objeto copiado tenha seus próprios dados separados do objeto original.

## Implementando uma Cópia Profunda

Em C++, você geralmente implementa uma cópia profunda ao sobrecarregar o operador de atribuição e ao escrever um construtor de cópia. Aqui está um exemplo:

```cpp
class MyClass {
public:
    MyClass(const MyClass &other) { // Construtor de cópia
        data = new int(*other.data);
    }

    MyClass& operator=(const MyClass &other) { // Sobrecarga do operador de atribuição
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }

    ~MyClass() { // Destrutor
        delete data;
    }

private:
    int *data;
};
```

Neste exemplo, MyClass tem um membro de dados que é um ponteiro para int. O construtor de cópia e o operador de atribuição são definidos para garantir uma cópia profunda.

## Importância da Cópia Profunda

Evitar Compartilhamento de Dados: Sem uma cópia profunda, dois objetos podem inadvertidamente compartilhar o mesmo dado. Alterações em um objeto podem afetar o outro, o que é geralmente indesejável.

Prevenir Vazamentos de Memória e Erros: Uma gestão de memória adequada exige cópias profundas, especialmente em situações onde objetos gerenciam a memória dinamicamente (como alocação com new).

## Considerações

Gerenciamento de Recursos: Implementar cópias profundas exige um cuidado especial com o gerenciamento de recursos. Cada alocação de memória (new) deve ter um delete correspondente.

Regra dos Três/Cinco: Se sua classe requer um construtor de cópia ou um operador de atribuição personalizado, ela provavelmente também precisará de um destrutor personalizado (Regra dos Três). Com o advento do C++11, isso foi estendido para incluir construtores e operadores de atribuição de movimento (Regra dos Cinco).

Em resumo, uma cópia profunda em C++ é essencial para o correto gerenciamento de memória e para evitar problemas com compartilhamento de dados entre objetos, especialmente quando os objetos gerenciam recursos como memória dinâmica.
