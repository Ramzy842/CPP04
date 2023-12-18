/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:05:41 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/18 06:35:25 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource Default constructor called" << std::endl;
	for (int x = 0; x < 4; x++)
		this->inventory[x] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	
	if (this != &other)
	{
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
	// std::cout << "MateriaSource copy assignment operator called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor called" << std::endl;
	for (int x = 0; x < 4; x++)
	{
		if (this->inventory[x])
			delete this->inventory[x];
	}
	return ;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int x = 0; x < 4; x++)
	{
		if (this->inventory[x] == NULL)
		{
			this->inventory[x] = materia;
			return ;
		}
	}
	std::cout << "Inventory is full! Can't learn new materia" << std::endl; 
	delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int x = 0; x < 4; x++)
	{
		if (this->inventory[x] != NULL && this->inventory[x]->getType() == type)
			return (this->inventory[x]->clone());
	}
	std::cout << "materia not created." << std::endl; 
	return (NULL);
}
