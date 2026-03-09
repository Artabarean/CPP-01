/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:06:21 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/09 10:19:37 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <cstdlib>
# include <iostream>

class Weapon
{
	public:
		Weapon(std::string value);
		~Weapon(void);
		std::string const &getType(void);
		void setType(std::string value);
	private:
		std::string type;
};


#endif