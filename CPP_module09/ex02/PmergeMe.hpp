/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:26:33 by thabeck-          #+#    #+#             */
/*   Updated: 2024/02/04 13:33:06 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <iomanip>
# include <deque> 
# include <list>
# include <cstring>
# include <algorithm>
# include <cctype>
# include <cstdlib>
# include <limits.h>
# include <stdexcept>

# define RESET	"\033[0m"
# define RED	"\033[31;1m"
# define BLUE	"\033[36;1m"
# define YELLOW	"\033[33;1m"

# define ARG_ERR		RED "Error: invalid arguments\nUsage: ./PmergeMe [number1] [number2] [number3] ..." RESET
# define ONLYNBR_ERR	RED "Error: invalid arguments\nOnly positive integers can be process" RESET
# define CHAR_ERR		RED "Error: invalid arguments\nCannot process characters" RESET
class PmergeMe
{
private:
    std::deque<int> _deque;
    std::list<int> _list;
public:
    PmergeMe();
    PmergeMe(const PmergeMe &rhs);
    ~PmergeMe();

    PmergeMe &operator=(const PmergeMe &rhs);

    bool isNumber(char *arg);
    void isValid(int argc, char **argv);

    void mergeInsertionSort(std::deque<int> &array);
    void mergeInsertionSort(std::list<int> &array);

    void sortDeque(int argc, char *argv[]);
    void sortList(int argc, char *argv[]);

    void sort(int argc, char *argv[]);

};

template<typename T>
void	printContainer(T &container, std::string str) {
    std::cout << YELLOW << str << ":\t" BLUE;
    for (typename T::iterator it = container.begin(); it != container.end(); it++)
        std::cout << *it << " ";
    std::cout << RESET << std::endl;
}

#endif