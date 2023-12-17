/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:43:32 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/17 15:14:56 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Default constructor called" << std::endl;
}
Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "Cure copy constructor called" << std::endl;
}
Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
}
Ice::~Ice()
{
	
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}