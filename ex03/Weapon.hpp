#pragma once

#include <iostream>

class	Weapon
{
public:
	Weapon(const std::string &type);
	const std::string	&getType(void);
	void				setType(std::string type);
private:
	std::string	type;
};
