/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:45:39 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 12:48:20 by thabeck-         ###   ########.fr       */
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
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void    setName(std::string name);
		void    announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif