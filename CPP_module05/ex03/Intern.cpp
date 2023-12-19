/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:39:27 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/18 22:22:04 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << GREEN "An intern has been created!" RESET << std::endl;
}

Intern::Intern(Intern const &copy)
{
    *this = copy;
    std::cout << GREEN "An intern has been created by copy" RESET << std::endl;
}

Intern::~Intern()
{
    std::cout << RED "An Intern has been destroyed!" RESET << std::endl;
}

Intern &Intern::operator=(Intern const &op)
{
    (void)op;
    return (*this);
}

Form *Intern::makeForm(std::string name, std::string target)
{
    Form *form;
    int i = 0;
    std::string names[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    while (i < 3)
    {
        if (name == names[i])
            break;
        i++;
    }

    switch (i)
    {
    case 0:
        form = new RobotomyRequestForm(target);
        break;
    case 1:
        form = new PresidentialPardonForm(target);
        break;
    case 2:
        form = new ShrubberyCreationForm(target);
        break;
    default:
        throw Intern::FormDoesNotExistException();
        return (NULL);
    }

    return form;
}

const char *Intern::FormDoesNotExistException::what() const throw()
{
    return (YELLOW "Form doesn't exist!" RESET);
}

