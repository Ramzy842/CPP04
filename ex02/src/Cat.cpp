/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:11:05 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/15 01:22:36 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.hpp"

Cat::Cat() : Abstr_Animal("Cat")
{
	this->brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Abstr_Animal(other)
{
	this->brain = new Brain(*(other.brain));
	std::cout << "Cat copy constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		this->type = other.type;
		*(this->brain) = *(other.brain);
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat is meowing!" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::pureVirtualFunction()
{
	std::cout << "This is a cat" << std::endl;
}