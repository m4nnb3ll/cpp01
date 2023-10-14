#pragma once

#include <iostream>

class	HumanA
{
public:
	HumanA(const std::string &name, Weapon &weapon);
	void	attack(void) const;
	void	setWeapon(Weapon &weapon);
private:
	HumanA();
	Weapon				&weapon;
	const std::string	&name;
};
