/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:52:07 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/08 11:28:44 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(Cure const & src);
        virtual ~Cure();

        Cure & operator=(Cure const & rhs);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif