# C++ dynamic_cast

Em C++, dynamic_cast é um operador de casting que é usado principalmente para converter ponteiros e referências de classes base para classes derivadas em uma hierarquia de herança. Diferentemente de static_cast, dynamic_cast realiza uma verificação de tipo em tempo de execução, tornando-o mais seguro para downcasting. Isso significa que ele verifica se a conversão é válida para o tipo específico do objeto em questão.

## Usos Comuns de dynamic_cast

### Downcasting Seguro:
dynamic_cast é usado para converter ponteiros ou referências de uma classe base para uma classe derivada.
Exemplo:

```cpp
class Base { virtual void dummy() {} };
class Derived : public Base { /* ... */ };

Base* base = new Derived;
Derived* derived = dynamic_cast<Derived*>(base);
```

### Verificação de Tipo:

Se a conversão não for possível (ou seja, se base não apontar realmente para um objeto do tipo Derived), o resultado de dynamic_cast será nullptr no caso de ponteiros.
No caso de referências, se a conversão falhar, dynamic_cast lançará uma exceção do tipo std::bad_cast.

## Requisitos para dynamic_cast

### Membros Virtuais:
Para que dynamic_cast funcione, a classe base deve ter pelo menos uma função virtual. Isso é necessário porque dynamic_cast usa informações do RTTI (Runtime Type Information) para verificar a validade da conversão.

## Limitações

### Performance:

Devido à sua verificação em tempo de execução, dynamic_cast pode ser mais lento do que outras formas de casting, como static_cast.

### Uso Apropriado:
dynamic_cast deve ser usado apenas quando necessário, pois o uso excessivo pode ser um sinal de que o design do programa pode precisar ser reconsiderado. Idealmente, o polimorfismo deve ser suficiente para a maioria das necessidades de interação entre classes em uma hierarquia de herança.

### Não Funciona com Classes não Polimórficas:

dynamic_cast não funcionará em classes que não têm funções virtuais.

## Comparação com Outros Casts

static_cast: Útil para conversões seguras conhecidas em tempo de compilação, mas não realiza checagem de tipo em tempo de execução.
reinterpret_cast: Para conversões de baixo nível que não têm relação com hierarquias de herança.
const_cast: Usado para remover ou adicionar o qualificador const.

Em resumo, dynamic_cast é uma ferramenta poderosa em C++ para conversões de tipo seguras dentro de uma hierarquia de herança, permitindo verificar a validade da conversão em tempo de execução. É especialmente útil para downcasting, mas deve ser usado com cautela e compreensão das implicações de desempenho.
