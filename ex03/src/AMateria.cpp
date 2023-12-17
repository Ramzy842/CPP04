/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:43:27 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/17 14:57:41 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria() : type("Default")
{
    std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "AMateria Parametrized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target) {
    (void) target;
    std::cout << "use function called" << std::endl;
}