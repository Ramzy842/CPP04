/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:43:30 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/17 15:14:29 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "./AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure& other);
		Cure* clone() const;
        virtual ~Cure();
		void use(ICharacter& target);
};

#endif