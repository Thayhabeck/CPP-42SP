/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references2.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:55:53 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/24 19:33:00 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// Esta função recebe um ponteiro para uma string e altera o valor da string
void byPtr(std::string *str)
{
    *str += " and ponies";
}

// Esta função recebe um ponteiro constante para uma string e não altera o valor da string
void byConstPtr(std::string const *str)
{
    std::cout << *str << std::endl;
}

// Esta função recebe uma referência para uma string e altera o valor da string
void byRef(std::string &str)
{
    str += " and ponies";
}

// Esta função recebe uma referência constante para uma string e não altera o valor da string
void byConstRef(const std::string &str)
{
    std::cout << str << std::endl;
}

int main(void)
{
    std::string str = "I like butterflies";
    std::cout << str << std::endl;
    byPtr(&str);
    byConstPtr(&str);

    str = "I like otters";
    std::cout << str << std::endl;
    byRef(str);
    byConstRef(str);
}

// Para compilar: c++ -Wall -Wextra -Werror references2.cpp -o references2