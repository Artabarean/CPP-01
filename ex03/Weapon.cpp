/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabarea <atabarea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 11:07:53 by atabarea          #+#    #+#             */
/*   Updated: 2026/03/09 10:19:32 by atabarea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string value)
{
	this->setType(value);
}

Weapon::~Weapon(void)
{
}

void Weapon::setType(std::string value)
{
	this->type = value;
}

std::string const &Weapon::getType(void)
{
	std::string const &typeREF = this->type;
	return (typeREF);
}