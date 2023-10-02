#pragma once

#include <iostream>

class	Zombie
{
public:
			Zombie(void);
			Zombie(const std::string &zombieName);
			~Zombie(void);
	void	announce(void);
	void	setName(const std::string &zombieName);
private:
	std::string	m_name;
};

Zombie	*zombieHorde(int N, std::string name);
