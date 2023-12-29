# STL Functors

Em C++, functors (ou objetos de função) são objetos que podem ser usados da mesma maneira que uma função ordinária. Isso é possível porque a classe do objeto implementa o operador (). Os functors são especialmente úteis quando você precisa de um objeto que se comporta como uma função, mas também precisa manter um estado ou ter membros de dados adicionais. Eles são frequentemente usados com algoritmos da Standard Template Library (STL), especialmente aqueles que requerem funções de callback, como std::sort.

## Características dos Functors

### Sobrecarga do Operador ():
Um functor é uma classe que sobrecarrega o operador de chamada de função ().
Isso permite que instâncias da classe sejam usadas como se fossem funções.

### Manutenção de Estado:
Ao contrário das funções regulares, functors podem manter um estado que pode ser modificado cada vez que são chamados.
Exemplo Básico de Functor

```cpp
#include <iostream>

class Increment {
    int num;
public:
    Increment(int n) : num(n) {}

    int operator()(int arr_num) const {
        return num + arr_num;
    }
};

int main() {
    Increment inc(5);
    std::cout << inc(10);  // Chama o functor com 10, resulta em 15
    return 0;
}
```

Neste exemplo, Increment é um functor. Quando criamos um objeto Increment, como inc, podemos "chamá-lo" com um argumento, como uma função.

## Uso de Functors com STL

Os functors são particularmente úteis com algoritmos da STL, como std::sort, std::transform, ou qualquer algoritmo que aceite funções de callback.

```cpp
#include <algorithm>
#include <vector>

class Compare {
public:
    bool operator()(int a, int b) {
        return a < b;
    }
};

int main() {
    std::vector<int> v = {4, 1, 3, 5, 2};
    Compare comp;

    std::sort(v.begin(), v.end(), comp);

    for (int i : v) {
        std::cout << i << " ";
    }
    return 0;
}
```

Neste exemplo, o functor Compare é usado para definir a lógica de comparação para std::sort.

## Vantagens dos Functors

Flexibilidade: Functors podem ser mais flexíveis que funções regulares, pois podem ter membros de dados e manter estado.
Otimização: Em muitos casos, functors podem ser mais eficientes do que funções normais ou funções membro, especialmente em algoritmos da STL, devido a possíveis otimizações do compilador.
Reusabilidade: Eles permitem a reutilização de código e lógica.
Functors são uma ferramenta poderosa em C++ para criar objetos que funcionam como funções, mas com capacidades adicionais. Eles são amplamente usados na programação C++ moderna, especialmente em conjunto com a STL, para escrever código conciso e eficiente.
