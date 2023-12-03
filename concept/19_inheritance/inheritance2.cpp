/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance2.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:58:19 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/28 17:02:00 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Quadruped
{
private:
    std::string name; // Acessado apenas pela classe Quadruped

protected:
    int legs[4]; // Acessado por Quadruped e suas classes derivadas

public:
    void run(); // Acessado por todos
};

class Dog : public Quadruped //Pode acessar os membros protected de Quadruped
{
};

int main() //Pode acessar os membros public de Quadruped
{
}