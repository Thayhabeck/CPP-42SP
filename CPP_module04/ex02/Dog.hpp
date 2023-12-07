/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:04:37 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/07 12:37:00 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(Dog const &copy);
        Dog &operator=(Dog const &dog);
        virtual ~Dog();

        virtual void makeSound() const;
        std::string getIdea(int i) const;
};

#endif