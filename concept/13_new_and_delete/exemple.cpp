/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exemple.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:54:22 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/24 18:11:30 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
private:
    std::string	_name;
public:
    //Construtor padrão
    Student() : _name("unknown")
    {
        std::cout << "Student " << this->_name << " is born" << std::endl;
    }
    //Construtor com parâmetro
    Student(std::string name) : _name(name)
    {
        std::cout << "Student " << this->_name << " is born" << std::endl;
    }
    //Destrutor
    ~Student()
    {
        std::cout << "Student " << this->_name << " died" << std::endl;
    }
};

int main()
{
    // O operador new aloca memória para um objeto e retorna um ponteiro para ele.
    // Usamos o operador new para criar um objeto na memória heap.
    // Caso não usemos o operador new, o objeto será criado na memória stack.
    Student *bob = new Student("bob");
    Student *jim = new Student("jim");
    Student *joe = new Student("joe");

    Student *students = new Student[42]; // Cria um array de 42 objetos do tipo Student

    // O operador delete libera a memória alocada para um objeto.
    // O operador delete deve ser usado para objetos criados com o operador new.
    // Caso não usemos o operador delete para objetos criados com o operador new, teremos um memory leak.
    delete bob;
    delete jim;
    delete joe;

    delete[] students; // Libera a memória alocada para o array de objetos

    return (0);
}

//Para compilar: c++ -Wall -Wextra -Werror -std=c++98 exemple.cpp -o exemple
