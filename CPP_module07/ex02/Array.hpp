/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:53:55 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/27 14:35:24 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include <sstream>

# define RESET		"\033[0m"
# define RED		"\033[31;1m"
# define GREEN		"\033[32;1m"

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array() : _array(NULL), _size(0) {};
        Array(unsigned int n) : _array(new T[n]), _size(n) {};
        Array(Array const &copy) {
            this->_array = new T[copy._size];
            for (unsigned int i = 0; i < copy._size; i++)
                this->_array[i] = copy._array[i];
            this->_size = copy._size;
        }
        Array &operator=(Array const &rhs) {
            if (this != &rhs)
            {
                if (this->_array)
                    delete [] this->_array;
                this->_array = new T[rhs._size];
                for (unsigned int i = 0; i < rhs._size; i++)
                    this->_array[i] = rhs._array[i];
                this->_size = rhs._size;
            }
            return (*this);
        };
        ~Array() { delete [] this->_array; };

        T &operator[](unsigned int index) const {
            if (index >= this->_size)
                throw OutOfBoundsException();
            return (this->_array[index]);
        };
        unsigned int size() const { return (this->_size); };

        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char *what() const throw() 
                { return ( RED "Error: Index out of bounds" RESET ); };
        };
};

#endif