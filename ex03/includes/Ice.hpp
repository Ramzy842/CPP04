/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:43:32 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/17 15:15:44 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "./AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice& other);
        virtual ~Ice();
		Ice* clone() const;
		void use(ICharacter& target);
};

#endif