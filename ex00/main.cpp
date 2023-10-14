/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:59:22 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/14 21:56:00 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *test;

	test = newZombie("zombie1");
	test->announce();
	delete test;
	randomChump("zombie2");
	return (0);
}