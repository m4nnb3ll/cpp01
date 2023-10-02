/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:59:22 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/02 13:32:31 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zhorde;
	int		zombieNum;

	zombieNum = 42;
	zhorde = zombieHorde(zombieNum, "Joe Doe");
	for (int i = 0; i < zombieNum; i++)
		zhorde[i].announce();
	delete[] zhorde;
	return (0);
}