# Acessores

Os "acessores" em programação, particularmente em C++ e outras linguagens orientadas a objetos, são métodos que permitem ler (acessar) os valores dos atributos privados ou protegidos de uma classe. Eles são uma parte fundamental do conceito de encapsulamento, um dos pilares da programação orientada a objetos. Aqui estão os aspectos chave dos acessores:

## Função dos Acessores

Leitura de Dados: Acessores são usados para obter os valores de membros de dados privados ou protegidos de uma classe. Eles fornecem uma interface controlada para esses dados.

Proteção do Estado Interno: Ao utilizar acessores, o estado interno da classe é protegido contra alterações indesejadas, mantendo a integridade dos dados.

## Características dos Acessores

Métodos Públicos: Normalmente, são implementados como métodos públicos para que possam ser acessados de fora da classe.

Sem Alteração de Estado: Eles não modificam o estado do objeto, o que significa que geralmente são marcados como const em C++.

Nomeclatura Comum: Frequentemente, seguem uma convenção de nomenclatura como getNomeDoAtributo para um acessor que retorna o valor do atributo nomeDoAtributo.

## Exemplo

```cpp
class MyClass {
public:
    MyClass(int value) : value_(value) {}

    // Acessor
    int getValue() const {
        return value_;
    }

private:
    int value_;
};
```

Neste exemplo, getValue é um acessor para o atributo privado value_ da classe MyClass.

## Importância dos Acessores
Encapsulamento: Eles são uma parte chave do encapsulamento, permitindo ocultar os detalhes da implementação e expor apenas uma interface pública segura.

Manutenção e Flexibilidade: Acessores permitem que a implementação interna de uma classe mude sem afetar o código que a utiliza. Isso facilita a manutenção e a evolução do software.

Validação e Lógica Adicional: Ao usar acessores, você pode incluir lógica de validação ou cálculos adicionais ao retornar o valor de um atributo.

## Acessores vs. Modificadores

Enquanto os acessores (getters) são usados para ler valores de atributos, os modificadores ou mutantes (setters) são usados para alterar esses valores.
A combinação de acessores e modificadores permite um controle completo e seguro sobre como os dados internos de um objeto são acessados e modificados.
Em resumo, os acessores são métodos essenciais em classes orientadas a objetos que facilitam o acesso seguro aos dados internos de um objeto, mantendo o encapsulamento e a integridade dos dados.