# STL (Standard Template Library)

A Standard Template Library (STL) em C++ é uma coleção poderosa de classes de template, que proporcionam estruturas de dados genéricas e algoritmos. A STL é composta por quatro componentes principais:

### Containers: 
São classes usadas para armazenar e organizar dados. Alguns dos containers mais comuns incluem:

vector: Array dinâmico de tamanho variável.
list: Lista duplamente ligada.
deque: Fila de duas pontas.
set: Conjunto ordenado de elementos únicos.
map: Coleção de pares chave-valor ordenados.
unordered_set e unordered_map: Versões de conjunto e mapa que usam hash para armazenamento.

### Algorithms: 
A STL fornece uma ampla gama de algoritmos genéricos que podem ser usados com containers. Estes incluem algoritmos para ordenação, busca, manipulação de elementos, etc.

### Iterators: 
São objetos semelhantes a ponteiros que são usados para percorrer os elementos de um container. Existem vários tipos de iteradores, como iteradores de entrada, saída, forward, bidirecional e random access.

### Functors: 
Objetos que podem ser usados como se fossem funções. Isso é possível graças à sobrecarga do operador (). Eles são usados com algoritmos da STL, principalmente para operações de comparação e aplicação de funções.

Aqui está um exemplo simples de como a STL pode ser usada em C++:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {4, 1, 3, 5, 2};

    // Ordenar o vetor
    std::sort(vec.begin(), vec.end());

    // Imprimir os elementos do vetor
    for(int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

Neste exemplo, um std::vector é usado para armazenar inteiros. O algoritmo std::sort é usado para ordenar o vetor, e um loop range-based for é utilizado para imprimir os elementos.
