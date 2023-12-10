/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:48:22 by thabeck-          #+#    #+#             */
/*   Updated: 2023/12/10 16:15:41 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string BLUE = "\033[36;1m";
const std::string YELLOW = "\033[33;1m";

class AMateria
{
protected:
	std::string _type;
public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(const AMateria &src);
	virtual ~AMateria(void);

	AMateria			&operator=(const AMateria &rhs);

	std::string const 	&getType(void) const; //Returns the materia type
	virtual void 		use(ICharacter& target);
	virtual AMateria	*clone(void) const = 0;
};

#endif