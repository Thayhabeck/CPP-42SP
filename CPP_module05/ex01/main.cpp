/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:42:14 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/18 22:00:59 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << std::endl;
	std::cout << "---------------------- BUREAUCRAT TEST ------------------------" << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Creation of bureaucrat 'Thayná' with grade 2..." << std::endl;
	std::cout << "The bureaucrat 'Thayná' is printed with the overloaded operator '<<'..." << std::endl;
	std::cout << "The bureaucrat 'Thayná' increments his grade..." << std::endl;
	std::cout << "The bureaucrat 'Thayná' is printed with the overloaded operator '<<'..." << std::endl;
	std::cout << "The bureaucrat 'Thayná' tries to increment his grade..." << std::endl;
	std::cout << "The bureaucrat 'Thayná' can't increment his grade, because it's the highest grade..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b1("Thayná", 2);
		std::cout << b1;
		b1.incrementGrade();
		std::cout << b1;
		b1.incrementGrade();
		std::cout << b1;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Creation of bureaucrat 'João' with grade 149..." << std::endl;
	std::cout << "The bureaucrat 'João' is printed with the overloaded operator '<<'..." << std::endl;
	std::cout << "The bureaucrat 'João' decrements his grade..." << std::endl;
	std::cout << "The bureaucrat 'João' is printed with the overloaded operator '<<'..." << std::endl;
	std::cout << "The bureaucrat 'João' tries to decrement his grade..." << std::endl;
	std::cout << "The bureaucrat 'João' can't decrement his grade, because it's the lowest grade..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b2("João", 149);
		std::cout << b2;
		b2.decrementGrade();
		std::cout << b2;
		b2.decrementGrade();
		std::cout << b2;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Creation of bureaucrat 'Júlia' with grade 0..." << std::endl;
	std::cout << "Bureaucrat 'Júlia' can't be created, because the grade is too high..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b3("Júlia", 0);
		std::cout << b3;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Creation of bureaucrat 'Paulo' with grade 151..." << std::endl;
	std::cout << "Bureaucrat 'Paulo' can't be created, because the grade is too low..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat b4("Paulo", 151);
		std::cout << b4;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "Creation of form 'Form1' with grade to sign 2 and grade to execute 2..." << std::endl;
	std::cout << "Creation of Bureaucrat 'Maria' with grade 3..." << std::endl;
    std::cout << "Bureaucrat 'Maria' tries to sign form 'Form1'..." << std::endl;
    std::cout << "Bureaucrat 'Maria' can't sign form 'Form1', because his grade is too low..." << std::endl;
    std::cout << "Bureaucrat 'Maria' increments his grade..." << std::endl;
    std::cout << "Bureaucrat 'Maria' signs form 'Form1'..." << std::endl;
    std::cout << "Bureaucrat 'Maria' can sign form 'Form1', because his grade is high enough..." << std::endl;
	std::cout << "---------------------------------------------------------------" << std::endl;
	try
	{
		Form f1("Form1", 2, 2);
        std::cout << f1;
        Bureaucrat b5("Maria", 3);
        std::cout << b5;
        b5.signForm(f1);
        std::cout << f1;
        b5.incrementGrade();
        std::cout << b5;
        b5.signForm(f1);
        std::cout << f1;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << "---------------------------------------------------------------" << std::endl;
    std::cout << "Creation of form 'Form2' with grade to sign 100 and grade to execute 100..." << std::endl;
    std::cout << "Creation of Bureaucrat 'Bruno' with grade 100..." << std::endl;
    std::cout << "Bureaucrat 'Bruno' signs form 'Form2'..." << std::endl;
    std::cout << "Bureaucrat 'Bruno' can sign form 'Form2', because his grade is high enough..." << std::endl;
    std::cout << "Bureaucrat 'Bruno' decrements his grade..." << std::endl;
    std::cout << "Bureaucrat 'Bruno' tries to sign form 'Form2'..." << std::endl;
    std::cout << "Bureaucrat 'Bruno' can't sign form 'Form2', because his grade is too low..." << std::endl;
    std::cout << "---------------------------------------------------------------" << std::endl;
    try
    {
        Form f2("Form2", 100, 100);
        std::cout << f2;
        Bureaucrat b6("Bruno", 100);
        std::cout << b6;
        b6.signForm(f2);
        std::cout << f2;
        b6.decrementGrade();
        std::cout << b6;
		b6.signForm(f2);
		std::cout << f2;
	}
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---------------------------------------------------------------" << std::endl;
	std::cout << "----------------------- END OF TEST ---------------------------" << std::endl;
}
