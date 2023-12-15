/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:11:15 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/15 01:22:40 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.hpp"

Dog::Dog() : Abstr_Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Abstr_Animal(other)
{
	this->brain = new Brain(*(other.brain));
	std::cout << "Dog copy constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		this->type = other.type;
		*(this->brain) = *(other.brain);
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog is barking!" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::pureVirtualFunction()
{
	std::cout << "This is a dog" << std::endl;
}