/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:43:30 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/17 15:14:20 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Cure copy assignment operator called" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

void use(ICharacter& target)
{
	std::cout << "use function called" << std::endl;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}