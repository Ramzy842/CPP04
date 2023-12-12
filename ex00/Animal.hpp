/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 23:31:22 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/13 00:21:19 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& other);
		Animal& operator=(const Animal& other);
		~Animal();
};


#endif