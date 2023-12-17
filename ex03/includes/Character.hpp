/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:54:21 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/17 01:44:58 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "./ICharacter.hpp"
#include "./Headers.hpp"

class Character : public ICharacter {
	protected:
		AMateria *inventory[4];
		std::string& name;
    public:
        Character();
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character();
};

#endif