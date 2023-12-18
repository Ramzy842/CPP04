/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:43:32 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/18 05:31:11 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice Default constructor called" << std::endl;
	return ;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	// std::cout << "Cure copy constructor called" << std::endl;
	return ;
}

Ice& Ice::operator=(const Ice& other)
{
	(void) other;
	return (*this);
}

Ice::~Ice()
{
	// std::cout << "Cure destructor called" << std::endl;
	return ;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}