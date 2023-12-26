/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specialization.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:51:19 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/26 19:16:15 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

// Template sem especialização (T, U)
template <typename T, typename U>
class Pair
{
    public:
        Pair<T, U>(T const &lhs, U const &rhs) : _lhs(lhs), _rhs(rhs) {
            std::cout << "Generic template" << std::endl;
            return;
        }

        ~Pair<T, U>() {}

        T const &fst() const { return this->_lhs; }
        U const &snd() const { return this->_rhs; }

    private:
        T const _lhs;
        U const _rhs;

        Pair<T, U>() {}
};

// Template com especialização parcial (int, U)
template <typename U>
class Pair<int, U>
{
    public:
        Pair<int, U>(int const &lhs, U const &rhs) : _lhs(lhs), _rhs(rhs) {
            std::cout << "Int partial specialization" << std::endl;
            return;
        }

        ~Pair<int, U>() {}

        int const &fst() const { return this->_lhs; }
        U const &snd() const { return this->_rhs; }

    private:
        int const _lhs;
        U const _rhs;

        Pair<int, U>() {}
};

// Template totalmente especializado (bool, bool)
template <>
class Pair<bool, bool>
{
    public:
        Pair<bool, bool>(bool lhs, bool rhs) {
            std::cout << "Bool full specialization" << std::endl;
            this->_n = 0;
            this->_n |= static_cast<int>(lhs) << 0;
            this->_n |= static_cast<int>(rhs) << 1;
            return;
        }

        ~Pair<bool, bool>() {}

        bool fst() const { return (this->_n & 0x01); }
        bool snd() const { return (this->_n & 0x02); }

    private:
        int _n;

        Pair<bool, bool>() {}
};

// Sobrecarga do operador de inserção de fluxo de saída para o template genérico (T, U)
template <typename T, typename U>
std::ostream &operator<<(std::ostream &o, Pair<T, U> const &rhs)
{
    o << std::fixed << std::setprecision(1);
    o << "Pair(" << rhs.fst() << ", " << rhs.snd() << ")";
    return o;
}

// Sobrecarga do operador de inserção de fluxo de saída para o template totalmente especializado (bool, bool)
std::ostream &operator<<(std::ostream &o, Pair<bool, bool> const &rhs)
{
    o << std::boolalpha << "Pair(" << rhs.fst() << ", " << rhs.snd() << ")";
    return o;
}

int main(void)
{
    Pair<int, int> p1(42, 21);
    Pair<std::string, float> p2("Pi", 3.14f);
    Pair<float, bool> p3(4.2f, true);
    Pair<bool, bool> p4(true, false);

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    std::cout << p4 << std::endl;
    
    return 0;
}

