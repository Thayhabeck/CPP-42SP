/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references3.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:33:58 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/24 19:45:39 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student
{
private:
    std::string _name;
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
    std::string & getNameRef()
    {
        return (this->_name);
    }
    std::string const & getNameRefConst() const
    {
        return (this->_name);
    }
    std::string * getNamePtr()
    {
        return &(this->_name);
    }
    std::string const * getNamePtrConst() const
    {
        return &(this->_name);
    }
};

int main()
{
    Student bob("bob");
    Student joe("joe");

    std::cout << bob.getNameRef() << std::endl;
    std::cout << joe.getNameRefConst() << std::endl;
    std::cout << *(bob.getNamePtr()) << std::endl;
    std::cout << *(joe.getNamePtrConst()) << std::endl;

    bob.getNameRef() = "bobby";
    std::cout << bob.getNameRef() << std::endl;

    *joe.getNamePtr() = "joey";
    std::cout << *(joe.getNamePtr()) << std::endl;
    
    return (0);
}

// Para compilar: c++ -Wall -Wextra -Werror references3.cpp -o references3
