/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:15:05 by thabeck-          #+#    #+#             */
/*   Updated: 2023/11/20 12:06:52 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int			i;
	int			j;
	std::string str;

	i = 1;
	str = "";
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				str = str + (char)std::toupper(argv[i][j]);
				j++;
			}
			i++;
		}
	}
	std::cout << str << std::endl;
	return (0);
}
