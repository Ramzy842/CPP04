/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:58:33 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/14 22:14:08 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Headers.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}
Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int x = 0; x < 100; x++)
			this->ideas[x] = other.ideas[x];
	}
	std::cout << "Brain copy assignment oeprator called" << std::endl;
	return (*this);
}

void Brain::setIdea(int idx, std::string idea)
{
	this->ideas[idx] = idea;
}
void Brain::setIdeas(std::string ideas[100])
{
	for(int x = 0; x < 100; x++)
		setIdea(x, ideas[x]);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}