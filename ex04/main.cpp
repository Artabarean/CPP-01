/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:38:14 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/04 12:57:48 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Error: The program requires 3 parameters." << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "Error: Could not open the file." << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(inputFile, line))
	{
		
	}
	inputFile.close();
	return (0);
}
