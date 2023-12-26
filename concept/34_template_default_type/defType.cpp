/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:42:09 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/26 18:43:58 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template <typename T = float>
class Vertex
{
    public:
        Vertex(T const &x, T const &y, T const &z) : _x(x), _y(y), _z(z) {}
        ~Vertex() {}
        T const &getX() const { return this->_x; }
        T const &getY() const { return this->_y; }
        T const &getZ() const { return this->_z; }

    private:
        T const _x;
        T const _y;
        T const _z;

        Vertex() {}
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Vertex<T> const &rhs)
{
    o << std::fixed << std::setprecision(1);
    o << "Vertex(" << rhs.getX() << ", " << rhs.getY() << ", " << rhs.getZ() << ")";
    return o;
}

int main(void)
{
    // No caso de não passar o tipo, ele vai assumir o tipo float que foi definido na classe Vertex como default
    Vertex<> v(42, 42.42f, 42.42);
    Vertex<float> v2(42.42f, 42.42f, 42.42f);
    Vertex<int> v3(42, 42, 42);
    Vertex<double> v4(42.42, 42.42, 42.42);

    std::cout << v << std::endl;
    std::cout << v2 << std::endl;
    std::cout << v3 << std::endl;
    std::cout << v4 << std::endl;
    return 0;
}