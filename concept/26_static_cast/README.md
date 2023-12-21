# C++ static_cast

Em C++, static_cast é um operador de casting que realiza conversões entre tipos compatíveis em tempo de compilação. Ele é usado para converter explicitamente um tipo de dado em outro, como converter tipos primitivos ou converter ponteiros/referências para cima e para baixo na hierarquia de herança (desde que seja seguro). static_cast é mais seguro do que o casting estilo-C porque fornece checagem de tipo em tempo de compilação.

## Usos Comuns de static_cast

### Conversão entre Tipos Primitivos:
Usado para converter tipos primitivos (por exemplo, de float para int, de char para int, etc.).
Exemplo:

```cpp
double pi = 3.14159;
int intPi = static_cast<int>(pi);
```

### Conversão de Ponteiros para Cima na Hierarquia de Classes:
Usado para converter ponteiros ou referências de classes derivadas para classes base.
Exemplo:

```cpp
class Base {};
class Derived : public Base {};

Derived *d = new Derived();
Base *b = static_cast<Base*>(d);
```

### Conversão de Ponteiros para Baixo na Hierarquia de Classes:
Pode ser usado para downcasting (classes base para derivadas), mas apenas quando você tem certeza de que a conversão é segura.
dynamic_cast é geralmente preferido para downcasting, pois oferece checagem de tipo em tempo de execução.

### Conversões de Tipos não Relacionados:
Não pode ser usado para conversões entre tipos não relacionados, como entre ponteiros para classes e ponteiros para funções ou entre dois ponteiros de classes que não compartilham uma hierarquia comum.

## Precauções

Checagem em Tempo de Compilação: static_cast não realiza nenhuma checagem de tipo em tempo de execução, o que significa que o programador deve garantir a validade da conversão.

Segurança: Embora static_cast seja mais seguro do que os casts estilo-C, ele ainda pode ser mal utilizado, levando a comportamento indefinido, especialmente com downcasting incorreto.

Alternativas: Em situações onde a segurança do tipo não pode ser garantida em tempo de compilação, dynamic_cast deve ser usado. Para remover um qualificador const, const_cast é a escolha apropriada.

static_cast é uma ferramenta útil e poderosa em C++ para conversões de tipos seguras e controladas, mas deve ser usada com compreensão clara de suas limitações e riscos.
