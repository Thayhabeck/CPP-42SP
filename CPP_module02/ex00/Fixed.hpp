/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 22:53:59 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/26 11:12:37 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;
    public:
        Fixed(void);
        Fixed(Fixed const &src);
        ~Fixed(void);

        Fixed &operator=(Fixed const &rhs);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
