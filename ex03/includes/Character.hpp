/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:54:21 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/18 05:11:43 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "./ICharacter.hpp"
#include "./Headers.hpp"

class Character : public ICharacter {
	protected:
		AMateria *inventory[4];
		std::string name;
    public:
        Character();
		Character(const std::string& name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif