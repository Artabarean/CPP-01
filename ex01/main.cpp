/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:41:42 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/02 14:10:20 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool	check_num(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
	}
	return (true);
}

int	main(int argc, char *argv[])
{
	if (argc <= 2 || argc > 3)
	{
		if (argc > 3)
			std::cout << "Too many arguments have been passed, please enter just one" << std::endl; 
		std::cout << "No arguments have been passed, no zombies will be created" << std::endl;
		return (1);
	}
	if (check_num(argv[1]) == false)
	{
		std::cout << "Numeric parameter contains non numeric characters!" << std::endl;
		return (1);
	}
	int	N = std::atoi(argv[1]);
	Zombie *zombie_array = zombieHorde(N, argv[2]);
	delete[] zombie_array;
	return (0);
}
