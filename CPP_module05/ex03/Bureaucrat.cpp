/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:31:13 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/18 19:38:45 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
    std::cout << GREEN "A bureaucrat has been created with default values" RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
    std::cout << GREEN;
    std::cout << "A bureaucrat has been created with name " << this->_name;
    std::cout << " and grade " << this->_grade << std::endl;
    std::cout << RESET;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name)
{
    *this = copy;
    std::cout << GREEN "A bureaucrat has been created by copy" RESET << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << RED "Bureaucrat " << this->_name << " has been destroyed!" RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &op)
{
    if (this != &op)
        this->_grade = op._grade;
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
    {
        this->_grade--;
        std::cout << BLUE << this->_name << " has been promoted to grade ";
        std::cout << this->_grade << RESET << std::endl;
    }
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
    {
        this->_grade++;
        std::cout << BLUE << this->_name << " has been demoted to grade ";
        std::cout << this->_grade << RESET << std::endl;
    }
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << BLUE << this->_name << " signed " << form.getName() << RESET << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << YELLOW << this->_name << " cannot sign " << form.getName() << " because ";
        std::cout << e.what() << RESET << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        std::cout << BLUE << this->_name << " executed " << form.getName() << RESET << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << YELLOW << this->_name << " cannot execute " << form.getName() << " because ";
        std::cout << e.what() << RESET << std::endl;
    }
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return (YELLOW "Grade too high!" RESET);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return (YELLOW "Grade too low!" RESET);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << WHITE << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << RESET << std::endl;
    return (o);
}
