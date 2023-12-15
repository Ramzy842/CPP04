/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Abstr_Animal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 23:31:22 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/15 01:10:58 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTR_ANIMAL_HPP
# define ABSTR_ANIMAL_HPP

#include <iostream>

class Abstr_Animal {
	protected:
		std::string type;
	public:
		virtual void pureVirtualFunction() = 0;
		Abstr_Animal();
		Abstr_Animal(std::string type);
		Abstr_Animal(const Abstr_Animal& other);
		Abstr_Animal& operator=(const Abstr_Animal& other);
		virtual void makeSound() const;
		std::string getType() const;
		virtual ~Abstr_Animal();
};

#endif