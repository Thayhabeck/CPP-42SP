/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:05:57 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/03 20:11:49 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

// Color codes as global variables
const std::string WRESET = "\033[0m";
const std::string WRED = "\033[31;1m";
const std::string WGREEN = "\033[32;1m";
const std::string WBLUE = "\033[36;1m";
const std::string WYELLOW = "\033[33;1m";

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &copy);
        WrongAnimal &operator=(WrongAnimal const &wronganimal);
        virtual ~WrongAnimal();

        std::string getType() const;
        void makeSound() const;
};

#endif