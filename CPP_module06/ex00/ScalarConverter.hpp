/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:49:12 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/23 17:10:55 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <limits.h>
# include <cctype>
# include <cstdlib>
# include <iomanip>
# include <iostream>
# include <string>

// Macros
# define RESET	"\033[0m"
# define RED	"\033[31;1m"
# define BLUE	"\033[36;1m"
# define YELLOW	"\033[33;1m"

# define PSEUDO  0
# define CHAR    1
# define INT     2
# define FLOAT   3
# define DOUBLE  4

class ScalarConverter
{
    private:
        static const std::string _pseudoLiterals[6];
        static std::string _strLiteral;
        static int _typeLiteral;

        static bool defineType(std::string str);
        static bool checkInt(std::string str, int &j);

        static void convertChar();
        static void convertInt();
        static void convertFloat();
        static void convertDouble();

        static void printChar(char c);
        static void printInt(int i);
        static void printFloat(float f);
        static void printDouble(double d);
        static void printPseudo();

        ScalarConverter();
        ScalarConverter(ScalarConverter const &copy);
        ~ScalarConverter();

        ScalarConverter &operator=(ScalarConverter const &rhs);

    public:
        static void convert(std::string strLiteral);

};

#endif
 