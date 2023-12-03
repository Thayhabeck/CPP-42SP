# Classes e Instâncias

Em C++, as classes e instâncias são conceitos centrais na programação orientada a objetos. Vamos explorar o que cada um representa:

## Classes em C++
Definição: Uma classe em C++ é um modelo ou um protótipo que define atributos (dados) e métodos (funções) que caracterizam um determinado tipo de objeto.

Características: Uma classe define o que um objeto será, mas não é o objeto em si. Ela pode ter variáveis membro (também conhecidas como propriedades ou campos) e funções membro (métodos).

### Exemplo de Declaração de Classe:

```cpp
class Car {
public:
    Car(std::string br, int yr) : brand(br), year(yr) {}

    void displayInfo() {
        std::cout << "Brand: " << brand << ", Year: " << year << std::endl;
    }

private:
    std::string brand;
    int year;
};
```

Neste exemplo, Car é uma classe com dois atributos (brand e year) e um método (displayInfo).

## Instâncias (Objetos) em C++
Definição: Uma instância de uma classe (também conhecida como objeto) é uma realização concreta da classe. Quando você cria um objeto de uma classe, você está criando uma instância dessa classe.

Criação de Instâncias: As instâncias são criadas usando o construtor da classe. Em C++, isso geralmente é feito usando o operador new para alocação dinâmica ou diretamente sem ele para alocação estática.

### Exemplo de Criação de Instância:

```cpp
Car myCar("Toyota", 2020); // Criação de uma instância de Car
myCar.displayInfo();       // Chamada de um método na instância
```

Aqui, myCar é um objeto da classe Car, ou seja, uma instância de Car.

## Relação entre Classes e Instâncias

Uma classe é como um blueprint que define a estrutura e o comportamento (através de métodos) dos objetos, enquanto uma instância é um objeto real criado com base nesse blueprint.
As instâncias de uma classe possuem os atributos definidos pela classe, e você pode interagir com esses atributos através dos métodos da classe.
Cada instância tem seu próprio conjunto de dados, então mudar um atributo em uma instância não afeta outras instâncias da mesma classe.

## Uso de Classes e Instâncias

Classes e instâncias são fundamentais na programação orientada a objetos. Elas permitem que você crie programas modulares e reutilizáveis com abstrações claras e estruturas de dados bem definidas. Usar classes e instâncias corretamente ajuda a tornar o código mais organizado, legível e mantível.