# new e delete

Em C++, new e delete são operadores que gerenciam a alocação e desalocação dinâmica de memória. Eles são fundamentais para o gerenciamento eficiente de recursos e para a criação de programas robustos e flexíveis. Vamos explorar o que cada um faz:

## Operador new:

Alocação de Memória: O new é usado para alocar memória no heap para um objeto ou uma matriz de objetos.
Inicialização: Ao alocar um objeto, o new também invoca o construtor da classe para inicializar o objeto.
Uso: A sintaxe básica é Tipo* variavel = new Tipo; para um único objeto ou Tipo* variavel = new Tipo[tamanho]; para um array.
Retorno: Retorna um ponteiro para o objeto alocado.

## Operador delete:

Desalocação de Memória: O delete é usado para liberar a memória que foi alocada previamente pelo new.
Chamada do Destrutor: Ao desalocar um objeto, o delete invoca o destrutor da classe para limpar recursos.
Uso: A sintaxe básica é delete variavel; para um único objeto ou delete[] variavel; para um array.
Prevenção de Vazamentos de Memória: É crucial usar delete para evitar vazamentos de memória, que ocorrem quando a memória alocada não é liberada.

## Exemplo:

```cpp
MyClass* obj = new MyClass; // Aloca memória e chama o construtor
delete obj;                 // Chama o destrutor e libera a memória

int* array = new int[10];   // Aloca memória para um array de inteiros
delete[] array;             // Libera a memória do array
```

## Tratamento de Exceções:

Se a alocação de memória falha (por exemplo, devido à falta de memória disponível), o new lançará uma exceção do tipo std::bad_alloc.
É possível usar new (std::nothrow) para evitar que uma exceção seja lançada e, em vez disso, retornar um ponteiro nulo se a alocação falhar.

## Boas Práticas:

Sempre corresponda um new com um delete e um new[] com um delete[].
Evite o uso de ponteiros puros e gerenciamento manual de memória sempre que possível. Em vez disso, considere usar gerenciadores de memória inteligentes como std::unique_ptr ou std::shared_ptr disponíveis na biblioteca padrão desde C++11.

## Alternativas Modernas:

Com o advento do C++11, o uso de ponteiros inteligentes (std::unique_ptr, std::shared_ptr, std::weak_ptr) tem sido incentivado para um gerenciamento de memória mais seguro e automático.
Em resumo, new e delete são fundamentais para o gerenciamento dinâmico de memória em C++, permitindo controle fino sobre a alocação e desalocação de recursos. No entanto, seu uso requer cuidado para evitar erros comuns, como vazamentos de memória e acessos inválidos a memória desalocada.