#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
	:	weapon(nullptr), name(name)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
