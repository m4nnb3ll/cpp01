#pragma once

#include <iostream>

class	Zombie
{
public:
			Zombie(const std::string zombieName);
			~Zombie(void);
	void	announce(void);
private:
	std::string	m_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
