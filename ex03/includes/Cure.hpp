/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 23:43:30 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/17 01:47:38 by rchahban         ###   ########.fr       */
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
        virtual ~Cure();
};

#endif