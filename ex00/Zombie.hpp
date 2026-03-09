/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:16:56 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/09 09:47:36 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstring>
# include <cstdio>
# include <cstdlib>
# include <iostream>

class Zombie
{	
	
	public:
		Zombie(std::string input);
		~Zombie();
		void	announce(void);
	private:
		std::string name;
		
};

void 	randomChump( std::string name );
Zombie*	newZombie( std::string name );
#endif