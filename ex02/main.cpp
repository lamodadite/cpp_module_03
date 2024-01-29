#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavTrap1("Lebron James");
	ScavTrap scavTrap2("Victor Wembanyama");
	scavTrap1.attack("Victor Wembanyama");
	scavTrap2.takeDamage(20);
	scavTrap2.beRepaired(3);
	scavTrap2.attack("Lebron James");
	scavTrap1.takeDamage(20);
	scavTrap1.beRepaired(10);
	scavTrap1.guardGate();
	return 0;
}