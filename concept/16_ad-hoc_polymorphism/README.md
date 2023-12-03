# Polimorfismo ad-hoc

O polimorfismo ad hoc em C++, também conhecido como sobrecarga de funções e operadores, é um tipo de polimorfismo em que uma função ou um operador pode ter múltiplas implementações para diferentes tipos de dados. Esse conceito é fundamental na programação orientada a objetos e permite que os programadores usem o mesmo nome de função ou operador para diferentes tipos de entrada, cada um com uma lógica de processamento específica. Vamos explorar os detalhes:

## Sobrecarga de Funções:

Definição: Consiste em ter múltiplas funções com o mesmo nome, mas com listas de parâmetros diferentes (tipos ou números de parâmetros).
Uso: Isso permite que a mesma função realize operações diferentes, dependendo dos argumentos com os quais é chamada.
Seleção de Função: Em tempo de compilação, o compilador determina qual versão da função sobrecarregada deve ser chamada com base nos argumentos passados.

## Sobrecarga de Operadores:

Como discutido anteriormente, a sobrecarga de operadores em C++ permite que operadores padrão sejam redefinidos para trabalhar com tipos de dados definidos pelo usuário.
Cada operador sobrecarregado pode ter comportamentos diferentes, dependendo dos tipos de dados dos operandos.

## Exemplo de Sobrecarga de Funções:

```cpp
void print(int i) {
    std::cout << "Integer: " << i << std::endl;
}

void print(double f) {
    std::cout << "Float: " << f << std::endl;
}

void print(const std::string &s) {
    std::cout << "String: " << s << std::endl;
}
```

Aqui, a função print é sobrecarregada para tratar inteiros, floats e strings.

## Polimorfismo Estático vs. Dinâmico:

O polimorfismo ad hoc é considerado um tipo de polimorfismo estático, pois a decisão sobre qual função ou operador executar é feita em tempo de compilação.
Isso é diferente do polimorfismo de subtipagem (ou polimorfismo dinâmico), onde a decisão é feita em tempo de execução.

## Vantagens:

Aumenta a legibilidade do código, permitindo usar o mesmo nome de função para operações semelhantes, mas para diferentes tipos de dados.
Facilita a manutenção do código, pois cada versão da função pode ser modificada independentemente.

## Considerações:

É importante garantir que as funções sobrecarregadas façam operações logicamente semelhantes, para evitar confusão.
O compilador deve ser capaz de distinguir claramente entre as diferentes versões da função com base nos tipos de argumentos.
Em resumo, o polimorfismo ad hoc em C++ permite flexibilidade e legibilidade no uso de funções e operadores para diferentes tipos de dados, mas deve ser usado de forma cuidadosa para manter a clareza e consistência do código.