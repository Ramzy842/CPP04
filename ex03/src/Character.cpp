/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:54:21 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/18 06:36:11 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"


Character::Character() : name("Default")
{
	for (int x = 0; x < 4; x++)
		this->inventory[x] = NULL;
}

Character::Character(const std::string& name) : name(name)
{
	for (int x = 0; x < 4; x++)
		this->inventory[x] = NULL;
}

Character::Character(const Character& other)
{
	*this = other;
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		this->name = other.name;
		for (int x = 0; x < 4; x++)
		{
			if (this->inventory[x])
				delete this->inventory[x];
			if (other.inventory[x])
				this->inventory[x] = other.inventory[x]->clone();
			else
				this->inventory[x] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int x = 0; x < 4; x++)
	{
		if (this->inventory[x])
			delete this->inventory[x];
	}
}


std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for (int x = 0; x < 4; x++)
	{
		if (this->inventory[x] == NULL)
		{
			this->inventory[x] = m;
			// std::cout << "equipped " << m->getType() << " in slot " << x << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full!" << std::endl; 
	delete m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		std::cout << "unequipping " << this->inventory[idx]->getType() << " from slot " << idx << std::endl;
		this->inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->inventory[idx])
	{
		this->inventory[idx]->use(target);
	}
	else
		std::cout << "don't do anything" << std::endl;
}
