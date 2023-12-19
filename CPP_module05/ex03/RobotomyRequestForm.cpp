/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:10:44 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/18 22:23:06 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy)
{
    *this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &op)
{
    if (this != &op)
    {
        this->_target = op._target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!Form::getSigned())
        throw Form::FormNotSignedException();
    if (executor.getGrade() > Form::getGradeExec())
        throw Form::GradeTooLowException();
    std::cout << BLUE "** drilling noises... **" RESET << std::endl;
    srand(time(0));
    if (rand() % 2)
        std::cout << BLUE << this->_target << " has been robotomized successfully!" << RESET << std::endl;
    else
        std::cout << YELLOW << this->_target << " robotomy failed!" << RESET << std::endl;
}
