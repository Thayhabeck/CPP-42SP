/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:45:31 by thabeck-          #+#    #+#             */
/*   Updated: 2024/01/06 16:54:05 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <stack>
# include <sstream>

# define VALID_ITENS "0123456789 +-*/"

# define RESET	"\033[0m"
# define RED	"\033[31;1m"
# define BLUE	"\033[36;1m"

class RPN
{
private:
    std::stack<double> _rpnItens;
    bool _isOperator(std::string item);
    bool _isRpnNumber(std::string item);
    void _makeOperation(char op);

public:
    RPN();
    RPN(RPN const &src);
    ~RPN();
    RPN &operator=(RPN const &src);
    double calculate(std::string argument);

    class RPNException : public std::exception
    {
    public:
        RPNException(const std::string &message);
        virtual ~RPNException() throw();
        virtual const char *what() const throw();

    private:
        std::string _message;
    };
};

#endif