/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:24:50 by thabeck-          #+#    #+#             */
/*   Updated: 2024/01/04 13:38:07 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {
    _extractDatabase();
    this->_max_date = this->_database.rbegin()->first;
    this->_min_date = this->_database.begin()->first;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src) { *this = src; }

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src) {
    if (this != &src)
        *this = src;
    return (*this);
}

BitcoinExchange::~BitcoinExchange(void) { }

void BitcoinExchange::_extractDatabase(void) {
    std::ifstream file("data.csv");
    std::string line;
    std::string date;
    std::string value;

    if (!file.is_open())
        throw DatabaseFileNotOpenException();
    std::getline(file, line);
    if (!_validateHeader(line, DATABASE))
        throw InvalidDatabaseException();
    else {
        while (std::getline(file, line)) {
            date = line.substr(0, line.find(','));
            value = line.substr(line.find(',') + 1);
            this->_database[date] = std::atof(value.c_str());
        }
    }
    file.close(); 
}

bool BitcoinExchange::_validateHeader(std::string line, int type) {
    std::string expectedDateHeader = "date";
    std::string expectedValueHeader = type == DATABASE ? "exchange_rate" : "value";
    char delimiter = type == DATABASE ? ',' : '|';

    if (std::count(line.begin(), line.end(), delimiter) != 1)
        return (false);
    std::string dateHeader = line.substr(0, line.find(delimiter));
    std::string valueHeader = line.substr(line.find(delimiter) + 1);
    _trimLine(dateHeader);
    _trimLine(valueHeader);
    _trimLine(expectedDateHeader);
    _trimLine(expectedValueHeader);

    if (dateHeader != expectedDateHeader || valueHeader != expectedValueHeader)
        return (false);
    return (true);
}

void BitcoinExchange::_validateLine(std::string line) {    
    int count = std::count(line.begin(), line.end(), '|');
    if (count != 1) {
        throw BadInputException(line);
        return ;
    }
    std::string date = line.substr(0, line.find('|'));
    std::string value = line.substr(line.find('|') + 1);
    _trimLine(date);
    _trimLine(value);
    if (!date.length() || !value.length() || !_validateDate(date))
        throw BadInputException(line);
    else if (!_validateValue(value)) { 
        if (std::atof(value.c_str()) < 0)
            throw NegativeNumberException();
        else if (std::atof(value.c_str()) > 1000)
            throw TooLargeNumberException();
        else
            throw BadInputException(line);
    }
    return ;
}

bool BitcoinExchange::_validateDate(std::string date) {
    if (date.length() != 10)
        return (false);
    for (int i = 0; i < 10; i++) {
        if (i == 4 || i == 7) {
            if (date[i] != '-')
                return (false);
        } else if (!std::isdigit(date[i]))
            return (false);
    }
    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());
    if (month < 1 || month > 12)
        return (false);
    if (day < 1 || day > 31)
        return (false);
    if (day > 30 && (month == 4 || month == 6 || month == 9 || month == 11))
        return (false);
    if (month == 2)
    {
        if (!_isLeapYear(year) && day > 28)
            return (false);
        else if (day > 29)
            return (false);
    }
    return (true);
}

bool BitcoinExchange::_validateValue(std::string value) {
    bool hasDot = false;

    for (size_t i = 0; i < value.length(); i++) {
        if (value[i] == '.') {
            if (hasDot)
                return (false);
            hasDot = true;
        }
        else if (!std::isdigit(value[i]))
            return (false);
    }
    if (std::atof(value.c_str()) > 1000)
        return (false);
    else if (std::atof(value.c_str()) < 0)
        return (false);
    return (true);
}

void BitcoinExchange::_trimLine(std::string &line) {
    size_t start = line.find_first_not_of(" \t");
    size_t end = line.find_last_not_of(" \t");
    if (start == std::string::npos)
        line = "";
    else
        line = line.substr(start, end - start + 1);  
}

void BitcoinExchange::_writeLine(std::string date, float value) {
    std::map<std::string, float>::iterator it = this->_database.find(date);
    float last_value = 0;

    if (it != this->_database.end()) {
        std::cout << BLUE << date << " => " << value;
        std::cout << " = " << value * it->second << RESET << std::endl;
        return ;
    }
    for (it = this->_database.begin(); it != this->_database.end(); it++) {
        if (it->first > date)
            break ;
        last_value = it->second;
    }
    std::cout << BLUE << date << " => " << value;
    std::cout << " = " << value * last_value << RESET << std::endl;
}

bool BitcoinExchange::_isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return year % 400 == 0;
        }
        return true;
    }
    return false;
}

void BitcoinExchange::readInput(std::string filename)
{
    std::ifstream file(filename.c_str());
    std::string line;
    std::string date;
    std::string value;

    if (!file.is_open())
        throw InputFileNotOpenException();
    std::getline(file, line);
    if (!_validateHeader(line, INPUT))
        throw InvalidInputException();
    while (std::getline(file, line)) {
        try {
            _validateLine(line);
        } catch (std::exception &e) {
            std::cout << RED;
            std::cout << "Error: " << e.what() << std::endl;
            std::cout << RESET;
            continue ;
        }
        date = line.substr(0, line.find('|'));
        value = line.substr(line.find('|') + 1);
        _writeLine(date, std::atof(value.c_str()));
    }
}

const char *BitcoinExchange::DatabaseFileNotOpenException::what() const throw() {
    return ("data.csv cannot be opened");
}

const char *BitcoinExchange::InvalidDatabaseException::what() const throw() {
    return ("data.csv format is invalid");
}

const char *BitcoinExchange::InputFileNotOpenException::what() const throw() {
    return ("Input file cannot be opened");
}

const char *BitcoinExchange::InvalidInputException::what() const throw() {
    return ("Input file format is invalid");
}

const char *BitcoinExchange::BadInputException::what() const throw() {
    return (_error_message.c_str());
}

BitcoinExchange::BadInputException::BadInputException(std::string line) {
    _error_message = "bad input => " + line;
}

const char *BitcoinExchange::NegativeNumberException::what() const throw() {
    return ("not a positive number");
}

const char *BitcoinExchange::TooLargeNumberException::what() const throw() {
    return ("too large a number");
}
