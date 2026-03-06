/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 11:15:09 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/06 10:26:58 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc > 2)
		{
			std::cout << "Too many arguments passed"
				<< ", the program accepts only 1 parameter"
				<< ".\nTry using one of the following parameters: "
				<< "DEBUG, INFO, WARNING or ERROR."
				<< std::endl;
		}
		else
			std::cout << "Insuficient arguments passed"
				<< ", the program needs 1 parameter"
				<< ".\nTry using one of the following parameters: "
				<< "DEBUG, INFO, WARNING or ERROR."
				<< std::endl;
		return (1);
	}
	Harl harl;
	std::string level = argv[1];
	harl.complain(level);
	return (0);
}
