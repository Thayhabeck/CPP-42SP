/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:30:04 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/07 12:36:32 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::string goodIdeas[3] = {"Play", "Eat", "Sleep"};
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = goodIdeas[rand() % 3];

    std::cout << GREEN << "🧠 Here is a new Brain!" << RESET << std::endl;
}

Brain::Brain(Brain const &copy)
{
    std::cout << GREEN << "🧠 Here is a new Brain by copy!" << RESET << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << RED << "🧠 Brain was destroyed!" << RESET << std::endl;
}

Brain &Brain::operator=(Brain const &brain)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = brain.getIdea(i);
    return (*this);
}

std::string Brain::getIdea(int i) const
{
    return (this->_ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
    this->_ideas[i] = idea;
}
