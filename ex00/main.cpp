/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:16:30 by atabarea          #+#    #+#             */
/*   Updated: 2026/02/27 16:22:07 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	name_new = "heap";
	std::string name_random = "stack";
	Zombie *zombie = newZombie(name_new);
	randomChump(name_random);
	delete(zombie);
	return (0);
}
