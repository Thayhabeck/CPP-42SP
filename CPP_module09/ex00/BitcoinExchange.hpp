/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:20:35 by thabeck-          #+#    #+#             */
/*   Updated: 2024/01/04 13:28:24 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <algorithm>
# include <cstdlib>

# define DATABASE    1
# define INPUT       2

# define RESET	"\033[0m"
# define RED	"\033[31;1m"
# define BLUE	"\033[36;1m"

class BitcoinExchange {
private:
    std::map<std::string, float> _database;
    std::string _min_date;
    std::string _max_date;

    void _extractDatabase(void);    
    bool _validateHeader(std::string line, int type);
    void _validateLine(std::string line);
    bool _validateDate(std::string date);
    bool _validateValue(std::string value);
    void _trimLine(std::string &line);
    void _writeLine(std::string date, float value);
    bool _isLeapYear(int year);

    BitcoinExchange(BitcoinExchange const &src);
    BitcoinExchange &operator=(BitcoinExchange const &src);

public:
    BitcoinExchange(void);
    ~BitcoinExchange(void);

    void readInput(std::string filename);

    class DatabaseFileNotOpenException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
    class InvalidDatabaseException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
    class InputFileNotOpenException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
    class InvalidInputException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
    class BadInputException : public std::exception {
        public:
            BadInputException(std::string line);
            virtual ~BadInputException(void) throw() {};
            virtual const char *what() const throw();
        private:
            std::string _error_message;
    };
    class NegativeNumberException : public std::exception {
        virtual const char *what() const throw();
    };
    class TooLargeNumberException : public std::exception {
        virtual const char *what() const throw();
    };
};

#endif