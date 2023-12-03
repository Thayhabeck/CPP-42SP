# Constante [const]

Em C++, o qualificador const é um recurso que indica que um valor não deve ser modificado após sua inicialização. O uso de const pode ser aplicado a variáveis, ponteiros, parâmetros de funções e métodos de classes, aumentando a segurança do código ao evitar modificações acidentais de valores que são destinados a ser constantes. Aqui estão alguns dos usos comuns de const em C++:

## const com Variáveis

Indica que o valor da variável não pode ser alterado.

```cpp
const int myConst = 10;
// myConst = 20; // Erro! myConst é constante.
const com Ponteiros
```

Ponteiro para Constante: O valor apontado é constante e não pode ser alterado, mas o ponteiro pode apontar para outro local.

```cpp
const int* ptr = &myConst;
// *ptr = 20; // Erro! Não pode alterar o valor apontado.
ptr = &otherVar; // OK. Pode apontar para outro local.
```

Ponteiro Constante: O ponteiro é constante e não pode apontar para outro local, mas o valor apontado pode ser alterado.

```cpp
int* const ptr = &myVar;
*ptr = 20; // OK. Pode alterar o valor apontado.
// ptr = &otherVar; // Erro! ptr é um ponteiro constante.
```

Ponteiro Constante para um Valor Constante: Tanto o ponteiro quanto o valor apontado são constantes.

```cpp
const int* const ptr = &myConst;
// *ptr = 20; // Erro! Valor apontado é constante.
// ptr = &otherVar; // Erro! Ponteiro é constante.
```

## const em Funções e Métodos

Parâmetros const: Indica que o parâmetro não será modificado pela função.

```cpp
void myFunction(const int param) {
    // param = 20; // Erro! param é constante.
}
```

Métodos const de Classes: Indica que o método não modifica o estado do objeto.

```cpp
class MyClass {
public:
    void myMethod() const {
        // Não pode modificar nenhum membro de dados.
    }
};
```

## Benefícios do Uso de const

Segurança: Previne modificações acidentais de valores, o que é especialmente útil em programas grandes e complexos.
Documentação: Serve como documentação no código, indicando as intenções do desenvolvedor sobre como uma variável ou objeto deve ser usado.
Otimizações: Permite que o compilador faça otimizações, sabendo que certos valores não serão alterados.
Uso em Classes e Interfaces: Em classes, o uso de métodos const pode tornar a interface mais clara e segura, garantindo que certos métodos não alterem o estado do objeto.
O uso de const é uma prática de programação recomendada em C++ para melhorar a clareza, a segurança e a eficiência do código.