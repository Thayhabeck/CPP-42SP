/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:28:10 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/07 12:46:46 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <cmath>
#include <string>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string BLUE = "\033[36;1m";

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(Brain const &copy);
        Brain &operator=(Brain const &brain);
        ~Brain();

        std::string getIdea(int i) const;
        void setIdea(int i, std::string idea);
};

#endif