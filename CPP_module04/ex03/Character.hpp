/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:57:02 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/08 11:21:01 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4];

    public:
        Character(void);
        Character(std::string const & name);
        Character(Character const & src);
        virtual ~Character();

        Character &operator=(Character const & rhs);

        std::string const &getName(void) const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif