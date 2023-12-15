/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchahban <rchahban@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 23:31:20 by rchahban          #+#    #+#             */
/*   Updated: 2023/12/15 01:24:40 by rchahban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Headers.hpp"

int main()
{
	const Abstr_Animal *animals[6];
	for (int x = 0; x < 3; x++)
		animals[x] = new Dog();
	for (int x = 3; x < 6; x++)
		animals[x] = new Cat();
	for (int x = 0; x < 6; x++) {
        delete animals[x];
    }
	return (0);
}