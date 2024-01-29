#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap1("Lebron James");
	ClapTrap clapTrap2("Victor Wembanyama");
	clapTrap1.attack("Victor Wembanyama");
	clapTrap2.takeDamage(5);
	clapTrap2.beRepaired(3);
	clapTrap2.attack("Lebron James");
	clapTrap2.takeDamage(10);
	clapTrap2.beRepaired(10);
	return 0;
}