/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:00:47 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/18 19:18:54 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    std::cout << std::endl;
	std::cout << "---------------------- BUREAUCRAT TEST ------------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "ShrubberyCreationForm Test" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creation of bureaucrat 'Lucas' with grade 137..." << std::endl;
    std::cout << "Creation of a Intern..." << std::endl;
    std::cout << "Creation of a Form..." << std::endl;
    std::cout << "The Intern creates a form type 'shrubbery creation' with target 'Amazon'..." << std::endl;
    std::cout << "Lucas signs the form 'Amazon'..." << std::endl;
    std::cout << "Lucas executes the form 'Amazon'..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Lucas", 137);
        std::cout << bureaucrat;
        Intern intern;
        Form *form;
        form = intern.makeForm("shrubbery creation", "Amazon");
        std::cout << *form;
        bureaucrat.signForm(*form);
        std::cout << *form;
        bureaucrat.executeForm(*form);
        delete form;   
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "PresidentialPardonForm Test" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creation of bureaucrat 'Leila' with grade 2..." << std::endl;
    std::cout << "Creation of a Intern..." << std::endl;
    std::cout << "Creation of a Form..." << std::endl;
    std::cout << "The Intern creates a form type 'presidential pardon' with target 'Billy'..." << std::endl;
    std::cout << "Leila signs the form 'Billy'..." << std::endl;
    std::cout << "Leila executes the form 'Billy'..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Leila", 2);
        std::cout << bureaucrat;
        Intern intern;
        Form *form;
        form = intern.makeForm("presidential pardon", "Billy");
        std::cout << *form;
        bureaucrat.signForm(*form);
        std::cout << *form;
        bureaucrat.executeForm(*form);
        delete form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "RobotomyRequestForm Test" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creation of bureaucrat 'Thais' with grade 40..." << std::endl;
    std::cout << "Creation of a Intern..." << std::endl;
    std::cout << "Creation of a Form..." << std::endl;
    std::cout << "The Intern creates a form type 'robotomy request' with target 'Bender'..." << std::endl;
    std::cout << "Thais signs the form 'Bender'..." << std::endl;
    std::cout << "Thais executes the form 'Bender'..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    try
    {
        Bureaucrat bureaucrat("Thais", 40);
        std::cout << bureaucrat;
        Intern intern;
        Form *form;
        form = intern.makeForm("robotomy request", "Bender");
        std::cout << *form;
        bureaucrat.signForm(*form);
        std::cout << *form;
        bureaucrat.executeForm(*form);
        delete form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Exception Test" << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creation of a Intern..." << std::endl;
    std::cout << "Creation of a Form..." << std::endl;
    std::cout << "The Intern creates a form type 'default' with target 'default'..." << std::endl;
    std::cout << "The Intern can't create the form, because the form type doesn't exist..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    try
    {
        Intern intern;
        Form *form;
        form = intern.makeForm("default", "default");
        std::cout << *form;
        delete form;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
