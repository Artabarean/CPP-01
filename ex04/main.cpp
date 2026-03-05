/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:38:14 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/05 11:13:34 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

int	Sed(std::string filename, std::string s1, std::string s2)
{
	std::string line;
	std::size_t found;
	std::size_t iterator;
	
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "Error: Could not open the file." << std::endl;
		return (1);
	}
	filename.append(".replace");
	std::ofstream outputFile(filename.c_str());
	if (!outputFile.is_open())
	{
		std::cout << "Error: Could not open or create the replacement file." << std::endl;
		return (1);
	}
	while (std::getline(inputFile, line))
	{
		found = line.find(s1);
		if (found != std::string::npos)
		{
			while (found != std::string::npos)
			{
				line.erase(found, s1.length());
				iterator = found;
				for (size_t i = 0; i < s2.length(); i++)
				{
					line.insert(iterator, 1, s2[i]);
					iterator++;
				}
				found = line.find(s1);
			}
		}
		outputFile << line << std::endl;
	}
	inputFile.close();
	outputFile.close();
	return (0);
}

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
	if (Sed(filename, s1, s2) == 1)
		return (1);
	return (0);
}
