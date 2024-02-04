# Reverse Polish Notation (RPN)

A notação polonesa reversa (NPR), também conhecida como notação pós-fixa, é um método de notação matemática em que operadores seguem seus operandos. Isso elimina a necessidade de parênteses para definir a ordem das operações. Em C++98, você pode implementar um avaliador de expressões em notação polonesa reversa usando uma pilha (stack), que é parte da Standard Template Library (STL).

Vamos ver como isso pode ser feito:

## Passos Básicos para Avaliar uma Expressão em NPR

- Percorrer a Expressão: Percorra cada elemento da expressão.
- Se For um Número: Empilhe-o.
- Se For um Operador: Desempilhe os operandos necessários da pilha, aplique o operador e empilhe o resultado.
Exemplo de Implementação em C++98

```cpp
#include <iostream>
#include <stack>
#include <sstream>
#include <string>

int main() {
    std::string expression = "3 4 + 2 * 7 /"; // Exemplo: (3 + 4) * 2 / 7
    std::stack<double> stack;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (isdigit(token[0])) {
            stack.push(std::atof(token.c_str()));
        } else {
            double rightOperand = stack.top(); stack.pop();
            double leftOperand = stack.top(); stack.pop();
            
            switch (token[0]) {
                case '+': stack.push(leftOperand + rightOperand); break;
                case '-': stack.push(leftOperand - rightOperand); break;
                case '*': stack.push(leftOperand * rightOperand); break;
                case '/': stack.push(leftOperand / rightOperand); break;
            }
        }
    }

    std::cout << "Resultado: " << stack.top() << std::endl;

    return 0;
}
```

Neste exemplo, a expressão em notação polonesa reversa é processada token por token. Para cada token, se for um número, ele é empilhado. Se for um operador, os dois operandos superiores são desempilhados, a operação é realizada e o resultado é empilhado novamente.

## Considerações

- Validação de Entrada: Este exemplo não inclui validação de entrada robusta, que seria necessária em um programa real.
- Erro de Divisão por Zero: Não há tratamento para divisão por zero.
- Flexibilidade: Você pode expandir essa implementação para lidar com diferentes tipos de operações ou para aceitar entradas mais complexas.
Implementar um avaliador de expressões em notação polonesa reversa é uma excelente maneira de entender melhor as pilhas e a manipulação de strings em C++. Embora este seja um exemplo básico, ele demonstra os princípios fundamentais envolvidos na análise e avaliação de expressões matemáticas.
