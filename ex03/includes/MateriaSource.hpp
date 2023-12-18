/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:05:41 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/18 04:54:32 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "./IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria *inventory[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource& operator=(const MateriaSource& other);
        virtual ~MateriaSource();

		void learnMateria(AMateria *materia);
		AMateria* createMateria(std::string const & type);
};

#endif