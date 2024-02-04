# Algoritmo de Ford-Johnson

O algoritmo de Ford-Johnson é um método eficiente para ordenar uma lista, que mistura elementos dos algoritmos de merge sort e inserção. Ele foi considerado um dos algoritmos de ordenação mais eficientes antes do advento de algoritmos de ordenação mais modernos, como o Timsort.

Implementar o algoritmo de Ford-Johnson em sua totalidade é bastante complexo, especialmente considerando as limitações do C++98. No entanto, posso fornecer um esqueleto básico de como você poderia começar a implementação em C++98, focando nos conceitos principais do algoritmo:

- Dividir a Lista em Pares e encontrar o menor e o maior em cada par.
- Ordenar Recursivamente os menores (ou maiores) elementos de cada par.
- Inserir os Maiores (ou menores) Elementos na posição correta.
Aqui está um exemplo simplificado, focando nos passos principais:

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // Para std::sort, std::max_element

// Função para simular a inserção dos maiores elementos
void insertLargestElements(std::vector<int>& list, const std::vector<int>& largest) {
    // Aqui você iria implementar a lógica de inserção
    // Isso é complexo e requer uma abordagem cuidadosa
}

// Função principal do algoritmo Ford-Johnson
void fordJohnsonSort(std::vector<int>& list) {
    if (list.size() <= 1) {
        return;
    }

    std::vector<int> smaller;
    std::vector<int> larger;

    // Dividindo a lista em pares e separando os elementos menores e maiores
    for (size_t i = 0; i < list.size() / 2; ++i) {
        if (list[2 * i] < list[2 * i + 1]) {
            smaller.push_back(list[2 * i]);
            larger.push_back(list[2 * i + 1]);
        } else {
            smaller.push_back(list[2 * i + 1]);
            larger.push_back(list[2 * i]);
        }
    }

    // Se houver um número ímpar de elementos, adiciona o último aos menores
    if (list.size() % 2 != 0) {
        smaller.push_back(list.back());
    }

    // Ordena recursivamente os menores elementos
    fordJohnsonSort(smaller);

    // Insere os maiores elementos
    insertLargestElements(smaller, larger);

    // Copia os resultados de volta para a lista original
    list = smaller;
}

int main() {
    std::vector<int> data = {34, 7, 23, 32, 5, 62, 78, 45, 3, 9};
    fordJohnsonSort(data);

    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```
Este código demonstra a estrutura básica do algoritmo de Ford-Johnson. No entanto, a implementação completa requer um manejo mais detalhado, especialmente para a inserção dos maiores elementos de forma eficiente, o que é uma parte crucial do algoritmo. Devido à sua complexidade, o algoritmo de Ford-Johnson é menos utilizado na prática do que outros algoritmos de ordenação mais simples e eficientes, como quicksort e mergesort.

## Considerações de containers para a implementação do algoritmo

Em C++, std::list, std::deque e std::vector são contêineres da Standard Template Library (STL) que oferecem diferentes trade-offs em termos de desempenho para operações específicas. A escolha entre eles deve ser baseada em como você planeja usar o contêiner em seu programa. Aqui está um resumo das diferenças principais:

### std::vector
- Implementação: Baseado em um array dinâmico que realoca memória quando o espaço existente se esgota. Isso pode ser custoso se o vetor for grande.
- Acesso aos Elementos: Oferece acesso rápido aos elementos via índices (O(1) para acesso aleatório).
- Inserção/Remoção: Eficiente no final do vetor (O(1) em média para push_back/pop_back), mas pode ser custoso no início ou no meio (O(n)), pois todos os elementos subsequentes precisam ser movidos.
- Uso de Memória: Tende a usar menos memória que list e deque para o mesmo número de elementos, uma vez que não armazena ponteiros adicionais para cada elemento.
- Iteradores: Suporta iteradores de acesso aleatório.

### std::list
- Implementação: Lista duplamente encadeada. Cada elemento contém ponteiros para o próximo e o anterior na lista.
- Acesso aos Elementos: Acesso sequencial é eficiente (O(1) para avançar/retroceder), mas acesso direto por índice é ineficiente (O(n)).
- Inserção/Remoção: Inserção e remoção de elementos são O(1) em qualquer posição, desde que você tenha um iterador para a posição.
- Uso de Memória: Usa mais memória que vector e deque devido aos ponteiros adicionais armazenados em cada elemento.
- Iteradores: Suporta iteradores bidirecionais.

### std::deque
- Implementação: Uma série de blocos de elementos com um índice para gerenciar esses blocos, permitindo crescimento eficiente em ambas as extremidades.
- Acesso aos Elementos: Oferece acesso rápido aos elementos (O(1) para acesso aleatório), semelhante ao vector.
- Inserção/Remoção: Eficiente no início e no final (O(1) para push_front/push_back), mas mais custoso no meio (O(n)) do que list.
- Uso de Memória: Geralmente, mais eficiente que list mas pode usar mais memória que vector devido à estrutura de índice adicional.
- Iteradores: Suporta iteradores de acesso aleatório.

### Considerações para Escolha
- std::vector é geralmente a primeira escolha para armazenar elementos devido ao seu desempenho de acesso aleatório e eficiência de memória, a menos que inserções/remoções frequentes no início/meio sejam necessárias.
- std::list é ideal quando inserções/remoções frequentes são necessárias em várias posições, e a ordem dos elementos precisa ser preservada sem realocações.
- std::deque é uma boa escolha quando você precisa de inserções/remoções rápidas tanto no início quanto no final, com a vantagem adicional de acesso aleatório rápido aos elementos.

Cada contêiner tem seu conjunto de vantagens e desvantagens, dependendo das operações que você precisa realizar mais frequentemente e das características de desempenho que são mais importantes para o seu aplicativo.
