/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:39:31 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/17 01:00:25 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _gradeSign(150), _gradeExec(150)
{
    this->_signed = false;
    std::cout << GREEN "A form has been created with default values" RESET << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    this->_signed = false;
    if (gradeSign < 1 || gradeExec < 1)
        throw Form::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooLowException();
    else
    {
        std::cout << GREEN "A form has been created with name " << this->_name;
        std::cout << ", grade to sign " << this->_gradeSign << " and grade to execute ";
        std::cout << this->_gradeExec << RESET << std::endl;
    }
}

Form::Form(Form const &copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
    *this = copy;
    std::cout << GREEN "A form has been created by copy" RESET << std::endl;
}

Form::~Form()
{
    std::cout << RED "Form " << this->_name << " has been destroyed!" RESET << std::endl;
}

Form &Form::operator=(Form const &op)
{
    if (this != &op)
        this->_signed = op._signed;
    return (*this);
}

std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getSigned() const
{
    return (this->_signed);
}

int Form::getGradeSign() const
{
    return (this->_gradeSign);
}

int Form::getGradeExec() const
{
    return (this->_gradeExec);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw Form::GradeTooLowException();
    if (bureaucrat.getGrade() < this->_gradeSign)
        throw Form::GradeTooHighException();
    if (this->_signed)
    {
        std::cout << YELLOW << this->_name << " is already signed!" << RESET << std::endl;
        return ;
    }
    this->_signed = true;
    std::cout << BLUE << bureaucrat.getName() << " has signed " << this->_name << RESET << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return (YELLOW "Grade too high!" RESET);
}

const char *Form::GradeTooLowException::what() const throw()
{
    return (YELLOW "Grade too low!" RESET);
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
    out << WHITE "Form " << form.getName() << " is ";
    if (form.getSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << form.getGradeSign() << " to sign and grade ";
    out << form.getGradeExec() << " to execute" RESET << std::endl;
    return (out);
}
