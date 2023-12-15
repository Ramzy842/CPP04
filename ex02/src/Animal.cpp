/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 23:31:24 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/15 01:08:48 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.hpp"

Abstr_Animal::Abstr_Animal()
{
	this->type = "Origin";
	std::cout << "Animal constructor called" << std::endl;
}

Abstr_Animal::Abstr_Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal constructor called" << std::endl;
}

Abstr_Animal::Abstr_Animal(const Abstr_Animal& other)
{
	*this = other;
	std::cout << "Animal copy constructor called" << std::endl;
}

Abstr_Animal& Abstr_Animal::operator=(const Abstr_Animal& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Animal copy assignment operator called" << std::endl;
	return (*this);
}

void Abstr_Animal::makeSound() const
{
	std::cout << "Animal really sounds like an animal!" << std::endl;
}

std::string Abstr_Animal::getType() const
{
	return (this->type);
}

Abstr_Animal::~Abstr_Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}