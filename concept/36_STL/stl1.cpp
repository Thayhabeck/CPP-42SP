/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stl1.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:07:02 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/29 17:31:14 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class IOperation {public: virtual ~IOperation() {} };
class OperationA : public IOperation {};
class OperationB : public IOperation {};

int main() {
    // Um list é uma sequência de elementos que podem ser acessados de forma sequencial.
    std::list<int> lst1;
    // Um map é uma coleção de pares chave-valor, onde cada chave é única.
    std::map<std::string, IOperation*> map1;
    // Um vector é uma sequência de elementos que podem ser acessados de forma sequencial.
    // Aqui, o vector é inicializado sem elementos.
    std::vector<int> vec1;
    // Um vector é uma sequência de elementos que podem ser acessados de forma sequencial.
    // Aqui, o vector é inicializado com 42 elementos, cada um com o valor 100.
    std::vector<int> vec2(42, 100);

    // Adiciona um elemento no final da lista.
    lst1.push_back(1);
    lst1.push_back(17);
    lst1.push_back(42);

    // Usando [] para acessar um elemento do map.
    map1["opA"] = new OperationA;
    map1["opB"] = new OperationB;

    // Um iterador é um objeto que permite percorrer todos os elementos de uma coleção.
    std::list<int>::const_iterator it;
    std::list<int>::const_iterator ite = lst1.end();

    // Imprime todos os elementos da lista.
    for (it = lst1.begin(); it != ite; it++) {
        std::cout << *it << std::endl;
    }

    return 0;
}