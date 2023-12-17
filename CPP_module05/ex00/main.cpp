/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:45:27 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/17 00:54:16 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	std::cout << "----------------------- END OF TEST ---------------------------" << std::endl;
}
