# "upcast" e "downcast"

Em C++, os termos "upcast" e "downcast" referem-se a dois tipos de conversões de ponteiros ou referências em uma hierarquia de herança.

## Upcast

Definição: Um "upcast" ocorre quando um ponteiro ou referência para uma classe derivada é convertido para um ponteiro ou referência para uma classe base.

### Características:
É sempre seguro e pode ser feito implicitamente.
Utilizado frequentemente em polimorfismo, onde ponteiros ou referências da classe base são usados para apontar para objetos da classe derivada.
Exemplo:

```cpp
class Base {};
class Derived : public Base {};

Derived d;
Base *b = &d; // Upcast - implicitamente convertendo 'Derived*' para 'Base*'
```


## Downcast

Definição: Um "downcast" é a conversão de um ponteiro ou referência da classe base para um ponteiro ou referência da classe derivada.

### Características:
Mais arriscado do que o upcast, pois depende da garantia de que o objeto apontado realmente é uma instância da classe derivada.
Não é permitido implicitamente em C++ e deve ser feito explicitamente usando casting.
dynamic_cast é frequentemente usado para downcast seguro, pois ele verifica o tipo em tempo de execução e retorna nullptr se o casting não for válido.
Exemplo:

```cpp
Base *b = new Derived();
Derived *d = dynamic_cast<Derived*>(b); // Downcast seguro
if (d) {
    // Operação bem-sucedida
}
```

## Considerações Importantes
Uso de dynamic_cast: dynamic_cast só funciona se a classe base tiver pelo menos uma função virtual, pois utiliza informações do RTTI (Runtime Type Information) para verificar a validade do downcast. Se o downcast falhar, dynamic_cast retorna nullptr para ponteiros e lança uma exceção para referências.

Riscos de Downcast sem dynamic_cast:

Usar static_cast ou C-style casting para downcasting não fornece checagem de tipo em tempo de execução. Isso pode levar a comportamento indefinido se o objeto real não for do tipo para o qual está sendo convertido.
Design de Software: O uso frequente de downcasting pode ser um sinal de que o design da hierarquia de classes ou a lógica do programa pode precisar ser revisada. Idealmente, o polimorfismo e o encapsulamento devem ser usados para evitar a necessidade de downcasting.

Em resumo, upcasting em C++ é uma operação segura e comum que é frequentemente usada em contextos polimórficos, enquanto downcasting é mais arriscado e deve ser feito com cautela, preferencialmente usando dynamic_cast para garantir segurança de tipo.
