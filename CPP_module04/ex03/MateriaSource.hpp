/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:00:35 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/08 11:51:23 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_inventory[4];

    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        virtual ~MateriaSource();

        MateriaSource & operator=(MateriaSource const & rhs);

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif