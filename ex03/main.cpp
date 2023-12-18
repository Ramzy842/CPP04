/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:49:17 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/18 05:24:31 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/AMateria.hpp"
#include "./includes/Cure.hpp"
#include "./includes/Ice.hpp"
#include "./includes/ICharacter.hpp"
#include "./includes/IMateriaSource.hpp"
#include "./includes/MateriaSource.hpp"
#include "./includes/Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}