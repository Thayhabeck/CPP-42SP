/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:15:43 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/18 13:03:21 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : AForm(copy)
{
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &op)
{
    if (this != &op)
    {
        this->_target = op._target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!AForm::getSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > AForm::getGradeExec())
        throw AForm::GradeTooLowException();
    std::cout << BLUE << this->_target << " has been pardoned by Zafod Beeblebrox." RESET << std::endl;
}
