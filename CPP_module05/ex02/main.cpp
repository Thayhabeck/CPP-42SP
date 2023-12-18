/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:25:31 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/18 17:56:27 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    std::cout << std::endl;
	std::cout << "---------------------- BUREAUCRAT TEST ------------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "ShrubberyCreationForm Test" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creation of bureaucrat 'Lucas' with grade 138..." << std::endl;
    std::cout << "Creation of ShrubberyCreationForm 'home' with grade to sign 145 and grade to execute 137..." << std::endl;
    std::cout << "The bureaucrat 'Lucas' tries to execute the form 'home'..." << std::endl;
    std::cout << "The bureaucrat 'Lucas' can't execute the form 'home', because it's not signed..." << std::endl;
    std::cout << "The bureaucrat 'Lucas' signs the form 'home'..." << std::endl;
    std::cout << "The bureaucrat 'Lucas' tries to execute the form 'home'..." << std::endl;
    std::cout << "The bureaucrat 'Lucas' can't execute the form 'home', because his grade is too low..." << std::endl;
    std::cout << "The bureaucrat 'Lucas' increments his grade..." << std::endl;
    std::cout << "The bureaucrat 'Lucas' executes the form 'home' creating a file 'home_shrubbery'..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Lucas", 138);
        std::cout << bureaucrat;
        ShrubberyCreationForm form("home");
        std::cout << form;
        bureaucrat.executeForm(form); 
        bureaucrat.signForm(form);
        std::cout << form;
        bureaucrat.executeForm(form); 
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        bureaucrat.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "PresidentialPardonForm Test" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creation of bureaucrat 'Leila' with grade 26..." << std::endl;
    std::cout << "Creation of PresidentialPardonForm 'Billy' with grade to sign 25 and grade to execute 5..." << std::endl;
    std::cout << "The bureaucrat 'Leila' tries to execute the form 'Billy'..." << std::endl;
    std::cout << "The bureaucrat 'Leila' can't execute the form 'Billy', because it's not signed..." << std::endl;
    std::cout << "The bureaucrat 'Leila' tries to sign the form 'Billy'..." << std::endl;
    std::cout << "The bureaucrat 'Leila' can't sign the form 'Billy', because his grade is too low..." << std::endl;
    std::cout << "The bureaucrat 'Leila' increments his grade..." << std::endl;
    std::cout << "The bureaucrat 'Leila' signs the form 'Billy'..." << std::endl;
    std::cout << "The bureaucrat 'Leila' tries to execute the form 'Billy'..." << std::endl;
    std::cout << "The bureaucrat 'Leila' can't execute the form 'Billy', because his grade is too low..." << std::endl;
    std::cout << "The bureaucrat 'Leila' increments his grade 20 times..." << std::endl;
    std::cout << "The bureaucrat 'Leila' executes the form 'Billy'..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Leila", 26);
        std::cout << bureaucrat;
        PresidentialPardonForm form("Billy");
        std::cout << form;
        bureaucrat.executeForm(form);
        bureaucrat.signForm(form);
        std::cout << form;
        bureaucrat.executeForm(form);
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        bureaucrat.signForm(form);
        std::cout << form;
        bureaucrat.executeForm(form);
        for (int i = 0; i < 20; i++)
            bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        bureaucrat.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "RobotomyRequestForm Test" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creation of bureaucrat 'Thais' with grade 46..." << std::endl;
    std::cout << "Creation of RobotomyRequestForm 'Bender' with grade to sign 72 and grade to execute 45..." << std::endl;
    std::cout << "The bureaucrat 'Thais' signs the form 'Bender'..." << std::endl;
    std::cout << "The bureaucrat 'Thais' tries to execute the form 'Bender'..." << std::endl;
    std::cout << "The bureaucrat 'Thais' can't execute the form 'Bender', because his grade is too low..." << std::endl;
    std::cout << "The bureaucrat 'Thais' increments his grade..." << std::endl;
    std::cout << "The bureaucrat 'Thais' executes the form 'Bender'..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Thais", 46);
        std::cout << bureaucrat;
        RobotomyRequestForm form("Bender");
        std::cout << form;
        bureaucrat.signForm(form);
        std::cout << form;
        bureaucrat.executeForm(form);
        bureaucrat.incrementGrade();
        std::cout << bureaucrat;
        bureaucrat.executeForm(form);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
