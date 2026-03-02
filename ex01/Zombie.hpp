/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 10:10:45 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/02 13:02:17 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <cstdlib>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	set_name(std::string name);
		void	announce(void);
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif