/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 10:16:34 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/03 11:02:59 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string stringPTR = brain;
	std::string &stringREF = brain;

	std::cout << "brain address    : " << &brain << std::endl;
	std::cout << "stringPTR address: " << &stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;
	std::cout << "brain value    : " << brain << std::endl;
	std::cout << "stringPTR value: " << stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;
	return (0);
}
