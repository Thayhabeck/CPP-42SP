# STL Algorithms

A Standard Template Library (STL) em C++ fornece uma rica coleção de algoritmos genéricos que operam em contêineres. Esses algoritmos abrangem uma variedade de operações, incluindo busca, ordenação, contagem, manipulação e muito mais. Eles são projetados para serem eficientes e para funcionar com qualquer tipo de contêiner ou sequência que atenda aos requisitos de interface necessários.

## Principais Categorias de Algoritmos da STL

### Algoritmos de Não-Modificação:
- Operações que não alteram os contêineres.
- Exemplos: std::find, std::count, std::accumulate.

### Algoritmos de Modificação:
- Alteram os elementos do contêiner.
- Exemplos: std::replace, std::remove, std::next_permutation.

### Algoritmos de Remoção:
- Removem elementos de um contêiner.
- Exemplos: std::remove_if, std::unique.

### Algoritmos de Ordenação e Pesquisa Relacionada:
- Incluem ordenação e operações em intervalos ordenados.
- Exemplos: std::sort, std::lower_bound, std::upper_bound.

### Algoritmos Numéricos:
- Realizam operações matemáticas em contêineres.
- Exemplos: std::accumulate, std::inner_product.

### Algoritmos de Partição:
- Dividem os elementos em dois grupos com base em um predicado.
- Exemplos: std::partition, std::stable_partition.

### Algoritmos de Consulta em Intervalos:
- Trabalham com faixas de elementos.
- Exemplos: std::search, std::find_end, std::find_first_of.

## Exemplos de Uso de Algoritmos STL

### Ordenando um vector:

```cpp
std::vector<int> v = {4, 1, 3, 5, 2};
std::sort(v.begin(), v.end());
```

### Encontrando um Elemento:

```cpp
auto it = std::find(v.begin(), v.end(), 3);
if (it != v.end()) {
    // Elemento encontrado
}
```

### Acumulando Valores:

```cpp
int sum = std::accumulate(v.begin(), v.end(), 0);
```

### Removendo Elementos Conforme Condição:

```cpp
v.erase(std::remove_if(v.begin(), v.end(), [](int x){ return x > 3; }), v.end());
```

## Considerações

Eficiência: Os algoritmos da STL são geralmente muito eficientes. No entanto, é importante entender as complexidades de tempo e espaço associadas a cada algoritmo.

Requisitos de Iteradores: Diferentes algoritmos requerem diferentes tipos de iteradores (como iteradores de entrada, saída, forward, bidirecional ou aleatório).

Genéricos e Flexíveis: Os algoritmos da STL são projetados para trabalhar com uma ampla variedade de tipos de dados, o que os torna extremamente flexíveis e reutilizáveis.

Os algoritmos da STL são uma parte fundamental da programação em C++ moderno, proporcionando ferramentas poderosas e flexíveis para o processamento de dados. Eles permitem que os desenvolvedores escrevam código mais conciso, eficiente e menos propenso a erros, aproveitando algoritmos bem testados e otimizados.
