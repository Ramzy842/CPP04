/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:11:15 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/15 00:50:01 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}
Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog is barking!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}