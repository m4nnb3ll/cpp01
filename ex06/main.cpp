#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (-42);
	try
	{
		Harl test(av[1]);
		test.complain("DEBUG");
		test.complain("INFO");
		test.complain("WARNING");
		test.complain("ERROR");
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}