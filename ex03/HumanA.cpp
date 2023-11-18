#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	:	weapon(weapon), name(name)
{
}

void	HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}

void	HumanA::attack(void) const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
