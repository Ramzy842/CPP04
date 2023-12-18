/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:43:30 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/18 05:30:55 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure Default constructor called" << std::endl;
	return ;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	// std::cout << "Cure copy constructor called" << std::endl;
	return ;
}

Cure& Cure::operator=(const Cure& other)
{
	(void) other;
	// std::cout << "Cure copy assignment operator called" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;
	return ;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}