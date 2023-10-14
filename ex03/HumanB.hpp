#pragma once

#include <iostream>

class	HumanB
{
public:
	HumanB(const std::string &name);
	void	attack(void) const;
	void	setWeapon(Weapon &weapon);
private:
	HumanB();
	Weapon				*weapon;
	const std::string	&name;
};
