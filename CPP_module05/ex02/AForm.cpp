/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:39:31 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/17 01:00:25 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _gradeSign(150), _gradeExec(150)
{
    this->_signed = false;
    std::cout << GREEN "A form has been created with default values" RESET << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    this->_signed = false;
    if (gradeSign < 1 || gradeExec < 1)
        throw AForm::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw AForm::GradeTooLowException();
    else
    {
        std::cout << GREEN "A form has been created with name " << this->_name;
        std::cout << ", grade to sign " << this->_gradeSign << " and grade to execute ";
        std::cout << this->_gradeExec << RESET << std::endl;
    }
}

AForm::AForm(AForm const &copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
    *this = copy;
    std::cout << GREEN "A form has been created by copy" RESET << std::endl;
}

AForm::~AForm()
{
    std::cout << RED "Form " << this->_name << " has been destroyed!" RESET << std::endl;
}

AForm &AForm::operator=(AForm const &op)
{
    if (this != &op)
        this->_signed = op._signed;
    return (*this);
}

std::string AForm::getName() const
{
    return (this->_name);
}

bool AForm::getSigned() const
{
    return (this->_signed);
}

int AForm::getGradeSign() const
{
    return (this->_gradeSign);
}

int AForm::getGradeExec() const
{
    return (this->_gradeExec);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw AForm::GradeTooLowException();
    this->_signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return (YELLOW "Grade too high!" RESET);
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return (YELLOW "Grade too low!" RESET);
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return (YELLOW "Form not signed!" RESET);
}

std::ostream &operator<<(std::ostream &out, AForm const &Aform)
{
    out << WHITE "Form " << Aform.getName() << " is ";
    if (Aform.getSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << Aform.getGradeSign() << " to sign and grade ";
    out << Aform.getGradeExec() << " to execute" RESET << std::endl;
    return (out);
}
