#include <iostream>
#include <string>

// Classe Base A
class A {
public:
    std::string nome;
    std::string sobrenome;
    int idade;
    std::string carro;

    A() : nome("maria"), sobrenome("silva"), idade(20), carro("UNO") {}
    A(const A& other) : nome(other.nome), sobrenome(other.sobrenome), idade(other.idade), carro(other.carro) {}
};

// Classe B herda virtualmente de A
class B : virtual public A {
public:
    B() {
        nome = "luiza";
        sobrenome = "sousa";
        idade = 25;
        carro = "GOL";
    }
    B(const B& other) : A(other) {}
};

// Classe C herda virtualmente de A
class C : virtual public A {
public:
    C() {
        nome = "joão";
        sobrenome = "lucio";
        idade = 30;
        carro = "HB20";
    }
    C(const C& other) : A(other) {}
};

// Classe D herda de B e C
class D : public B, public C {
public:
    D() : B(), C() {
        // Redefinir valores após a chamada dos construtores de B e C
        sobrenome = B::sobrenome; // Sobrenome de B
        idade = C::idade;         // Idade de C
        carro = B::carro;         // Carro de B
        nome = "D_" + A::nome;    // Nome combinado com A
    }
    D(const D& other) : A(other), B(other), C(other) {}
};

int main() {
    D objetoD;
    std::cout << "Nome: " << objetoD.nome << std::endl;
    std::cout << "Sobrenome: " << objetoD.sobrenome << std::endl;
    std::cout << "Idade: " << objetoD.idade << std::endl;
    std::cout << "Carro: " << objetoD.carro << std::endl;

    return 0;
}
