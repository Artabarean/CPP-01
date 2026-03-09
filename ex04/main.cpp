/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:38:14 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/09 12:01:57 by atabarea         ###   ########.fr       */
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
		if (!inputFile.eof())
			line.append("\n");
		if (s1 != "")
        {
            std::size_t pos = 0;
            while ((found = line.find(s1, pos)) != std::string::npos)
            {
                line.erase(found, s1.length());
                line.insert(found, s2);
                pos = found + s2.length();
            }
        }
		outputFile << line;
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
