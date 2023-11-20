/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:51:56 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 11:03:54 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

// Color codes as global variables
const std::string RESET = "\033[0m";
const std::string RED = "\033[31;1m";
const std::string GREEN = "\033[32;1m";
const std::string BLUE = "\033[36;1m";

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie( std::string name );
		~Zombie();
		void    announce();
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif