# STL containers

Em C++, a Standard Template Library (STL) fornece uma coleção de classes de contêineres que são usadas para armazenar e organizar dados. Estes contêineres são genéricos, podendo armazenar qualquer tipo de dados, e são altamente eficientes e flexíveis. Vamos explorar os tipos mais comuns de contêineres na STL:

## Sequenciais

### vector:
- Array dinâmico que pode mudar de tamanho.
- Oferece acesso rápido e eficiente aos elementos através de índices.
- Exemplo de uso:

```cpp
std::vector<int> v = {1, 2, 3, 4, 5};
```

### list:
- Lista duplamente encadeada.
- Bom para inserções e remoções frequentes.
- Exemplo de uso:

```cpp
std::list<int> l = {1, 2, 3, 4, 5};
```

### deque (double-ended queue):
- Semelhante ao vector, mas otimizado para inserções e remoções em ambas as extremidades.
- Exemplo de uso:

```cpp
std::deque<int> d = {1, 2, 3, 4, 5};
```

## Associativos

### set:
- Conjunto de elementos únicos, ordenados.
- Usa uma árvore de busca internamente.
- Exemplo de uso:

```cpp
std::set<int> s = {3, 1, 4, 1, 5, 9};
```

### map:
- Coleção de pares chave-valor, com chaves únicas e ordenadas.
- Semelhante a set, mas cada chave está associada a um valor.
- Exemplo de uso:

```cpp
std::map<int, std::string> m = {{1, "um"}, {2, "dois"}};
```

## Não Ordenados

### unordered_set:
- Conjunto de elementos únicos, não ordenados.
- Usa uma tabela hash internamente.
- Exemplo de uso:

```cpp
std::unordered_set<int> us = {3, 1, 4, 1, 5, 9};
```

### unordered_map:
- Coleção de pares chave-valor, com chaves únicas e não ordenadas.
- Semelhante a unordered_set, mas cada chave está associada a um valor.
- Exemplo de uso:

```cpp
std::unordered_map<int, std::string> um = {{1, "um"}, {2, "dois"}};
```

## Adaptadores de Contêineres

###stack:
- Adapta um contêiner existente para fornecer uma interface de pilha (LIFO).
- Exemplo de uso:

```cpp
std::stack<int> st;
```

### queue:
- Adapta um contêiner para fornecer uma interface de fila (FIFO).
- Exemplo de uso:

```cpp
std::queue<int> q;
```

### priority_queue:
- Semelhante a queue, mas os elementos são removidos na ordem de prioridade, não necessariamente na ordem em que foram inseridos.
- Exemplo de uso:

```cpp
std::priority_queue<int> pq;
```

Cada um desses contêineres tem características e usos específicos, dependendo das necessidades de desempenho e do tipo de operações que você deseja realizar nos dados. A escolha do contêiner correto é crucial para a eficiência e a eficácia de um programa em C++.
