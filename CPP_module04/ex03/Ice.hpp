/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:51:38 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/08 11:30:11 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & src);
        virtual ~Ice();

        Ice & operator=(Ice const & rhs);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif