#include "FragTrap.hpp"

int main()
{
	FragTrap fragTrap1("Lebron James");
	FragTrap fragTrap2("Victor Wembanyama");
	fragTrap1.attack("Victor Wembanyama");
	fragTrap2.takeDamage(30);
	fragTrap2.beRepaired(20);
	fragTrap2.attack("Lebron James");
	fragTrap1.takeDamage(30);
	fragTrap2.attack("Lebron James");
	fragTrap1.takeDamage(30);
	fragTrap2.attack("Lebron James");
	fragTrap1.takeDamage(30);
	fragTrap2.attack("Lebron James");
	fragTrap1.takeDamage(30);
	fragTrap1.beRepaired(10);
	fragTrap1.highFivesGuys();
	return 0;
}