#include "Harl.hpp"

Harl::Harl(const std::string& lvlCap) : m_lvlCap(0)
{
	if (lvlCap == "DEBUG")
		m_lvlCap = 0;
	else if (lvlCap == "INFO")
		m_lvlCap = 1;
	else if (lvlCap == "WARNING")
		m_lvlCap = 2;
	else if (lvlCap == "ERROR")
		m_lvlCap = 3;
	else
		throw(std::runtime_error("Unrecognized level!"));
}

void	Harl::call(std::string req, std::string level, void(Harl::*fun)(void))
{
	req == level ? (this ->* fun)() : void();
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::filter(const std::string& level)
{
	switch (m_lvlCap)
	{
		case 1:
			call(level, "INFO", &Harl::info);
			call(level, "WARNING", &Harl::warning);
			call(level, "ERROR", &Harl::error);
			break ;
		case 2:
			call(level, "WARNING", &Harl::warning);
			call(level, "ERROR", &Harl::error);
			break ;
		case 3:
			call(level, "ERROR", &Harl::error);
			break ;
		default:
			call(level, "DEBUG", &Harl::debug);
			call(level, "INFO", &Harl::info);
			call(level, "WARNING", &Harl::warning);
			call(level, "ERROR", &Harl::error);
	}
}


void	Harl::complain(std::string level)
{
	Harl::filter(level);
}
