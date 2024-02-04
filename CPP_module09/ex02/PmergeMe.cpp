/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:30:05 by thabeck-          #+#    #+#             */
/*   Updated: 2024/02/04 13:26:12 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe &rhs) {
    (void)rhs;
}

PmergeMe::~PmergeMe() {
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
    if (this == &rhs)
        return *this;
    return *this;
}

bool PmergeMe::isNumber(char *arg) {
    for (size_t i = 0; i < std::strlen(arg); ++i)
        if (!isdigit(arg[i]))
            return true;
    return false;
}

void PmergeMe::isValid(int argc, char **argv) {
    if (argc < 2)
        throw std::runtime_error(ARG_ERR);
    int size = 0;
    for (int i = 1; i < argc; ++i) {
        char *argument = argv[i];
        if (isNumber(argument)) 
            throw std::runtime_error(CHAR_ERR);
        long number = std::atol(argument);
        if (number > INT_MAX || number <= 0) 
            throw std::runtime_error(ONLYNBR_ERR);
        ++size;
    }
    return ;
}

void PmergeMe::mergeInsertionSort(std::deque<int> &array) { 
    size_t n = array.size();
    if (n <= 1)
        return;
    std::deque<int> larger, smaller;
    // Fill the larger and smaller containers, with the largest and smallest values of the pairs
    for (size_t i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            larger.push_back(std::max(array[i], array[i + 1]));
            smaller.push_back(std::min(array[i], array[i + 1]));
        } else
            larger.push_back(array[i]);
    }
    // Send the larger container to the recursion, to sort it
    mergeInsertionSort(larger);

    int firtstLargerArrayElement = larger[0];
    int smallerNumOfCouple = -1;
    
    // Find the smallest value of the pairs
    for (size_t i = 0; i < n; i += 2) {
        if (i + 1 < n) {
            if (array[i] == firtstLargerArrayElement || array[i + 1] == firtstLargerArrayElement) {
                smallerNumOfCouple = std::min(array[i], array[i + 1]);
                break;
            }
        }
    }

    array.clear();
    array = larger;
    
    if (smallerNumOfCouple != -1)
        array.push_front(smallerNumOfCouple);
        
    for (size_t i = 0; i < smaller.size(); ++i) {
		size_t n2 = array.size();
        if (smaller[i] != smallerNumOfCouple || n2 == (n - 1)) {
            // Returns an iterator to the first element that is not less than *it
            std::deque<int>::iterator it = std::lower_bound(array.begin(), array.end(), smaller[i]);
            // Inserts the element before the position pointed to by the iterator
            array.insert(it, smaller[i]);
        }
    }
}


void PmergeMe::mergeInsertionSort(std::list<int> &array)
{
    size_t n =array.size();
    if (n <= 1)
        return;
    std::list<int> larger, smaller;

    std::list<int>::iterator it = array.begin();
    for (size_t i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            int first = *it++;
            int second = *it++;
            larger.push_back(std::max(first, second));
            smaller.push_back(std::min(first, second));
        }
        else
            larger.push_back(*it++);
    }
 
    mergeInsertionSort(larger);

    int firtstLargerlistElement = larger.front();
    int smallerNumOfCouple = -1;
    it = array.begin();
    for (size_t i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            int first = *it++;
            int second = *it++;
            if (first == firtstLargerlistElement || second == firtstLargerlistElement)
            {
                smallerNumOfCouple = std::min(first, second);
                break;
            }
        }
    }
    array.clear();
    array = larger;
    if (smallerNumOfCouple != -1)
        array.push_front(smallerNumOfCouple);
    for (std::list<int>::iterator it = smaller.begin(); it != smaller.end(); ++it)
    {
		size_t n2 =array.size();
        if (*it != smallerNumOfCouple || n2 == (n - 1))
        {
            // Retunrs an iterator to the first element that is not less than *it
            std::list<int>::iterator pos = std::lower_bound(array.begin(), array.end(), *it);
            // Inserts the element before the position pointed to by the iterator
            array.insert(pos, *it);
        }
    }
}

void PmergeMe::sortDeque(int argc, char *argv[])
{
    for (int i = 1; i < argc; ++i)
        _deque.push_back(std::atoi(argv[i]));

    printContainer(_deque, "Before");

    clock_t startTime = clock();
    mergeInsertionSort(_deque);
    clock_t endTime = clock();
    double dequeTime = double(endTime - startTime)/ CLOCKS_PER_SEC;

    printContainer(_deque, "After");
	std::cout << YELLOW;
    std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque:\t";
    std::cout << std::fixed << std::setprecision(6) << dequeTime << " us" << std::endl;
	std::cout << RESET;
}

void PmergeMe::sortList(int argc, char *argv[])
{
    for (int i = 1; i < argc; ++i)
        _list.push_back(std::atoi(argv[i]));

    //printContainer(_list, "Before");

    clock_t startTime = clock();
    mergeInsertionSort(_list);
    clock_t endTime = clock();
    double listTime = double(endTime - startTime) / CLOCKS_PER_SEC;

    //printContainer(_list, "After");
	std::cout << YELLOW;
    std::cout << "Time to process a range of " << _list.size() << " elements with std::list:\t";
    std::cout << std::fixed << std::setprecision(6) << listTime << " us" << std::endl;
	std::cout << RESET;
}

void	PmergeMe::sort(int argc, char *argv[])
{
	try
	{
		isValid(argc, argv);
        sortDeque(argc, argv);
        sortList(argc, argv);
    }
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
