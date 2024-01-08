/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:40:20 by thabeck-          #+#    #+#             */
/*   Updated: 2024/01/08 12:19:42 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() { }

RPN::RPN(RPN const &src)
{
    *this = src;
}

RPN::~RPN() { }

RPN &RPN::operator=(RPN const &src)
{
    if (this != &src)
    {
        this->_rpnItens = src._rpnItens;
    }
    return (*this);
}

bool RPN::_isOperator(std::string item)
{
    if (item == "+" || item == "-" || item == "*" || item == "/")
        return (true);
    return (false);
}

bool RPN::_isRpnNumber(std::string item)
{
    int nb;

    for (std::string::iterator it = item.begin(); it != item.end(); it++) {
        if (!std::isdigit(*it))
            return (false);
    }
    nb = std::atoi(item.c_str());
    if (nb < 0 || nb > 9)
        throw RPN::RPNException("Error: Number out of permitted range");
    return (true);  
}

void RPN::_makeOperation(char op)
{
    double a;
    double b;

    if (this->_rpnItens.size() < 2)
        throw RPN::RPNException("Error: Too few operands");
    a = this->_rpnItens.top();
    this->_rpnItens.pop();
    b = this->_rpnItens.top();
    this->_rpnItens.pop();
    switch (op)
    {
    case '+':
        this->_rpnItens.push(b + a);
        break;
    case '-':
        this->_rpnItens.push(b - a);
        break;
    case '*':
        this->_rpnItens.push(b * a);
        break;
    default:
        if (a == 0)
            throw RPN::RPNException("Error: Division by zero");
        this->_rpnItens.push(b / a);
        break;
    }
}

double RPN::calculate(std::string argument)
{
    std::string item;
    std::istringstream ss(argument);

    if (argument.find_first_not_of("+-/* 01234567890") != std::string::npos)
        throw RPN::RPNException("Error: Invalid character in expression");
    while (ss >> item)
    {
        if (this->_isRpnNumber(item))
            this->_rpnItens.push(std::strtod(item.c_str(), NULL));
        else if (this->_isOperator(item))
            this->_makeOperation(item[0]);
    }
    if (this->_rpnItens.size() != 1)
        throw RPN::RPNException("Error: Invalid expression");
    return (this->_rpnItens.top());
}

RPN::RPNException::RPNException(const std::string &message) : _message(message) { }

RPN::RPNException::~RPNException() throw() { }

const char *RPN::RPNException::what() const throw()
{
    return (this->_message.c_str());
}
