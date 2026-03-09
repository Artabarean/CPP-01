/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:11:06 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/09 10:00:10 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie_array;

	zombie_array = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie_array[i].set_name(name);
	}
	return (zombie_array);
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}
