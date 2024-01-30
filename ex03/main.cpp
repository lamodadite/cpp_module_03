#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamondTrap1("Lebron James");
	DiamondTrap diamondTrap2("Victor Wembanyama");
	diamondTrap1.attack("Victor Wembanyama");
	diamondTrap2.takeDamage(30);
	diamondTrap2.beRepaired(20);
	diamondTrap2.attack("Lebron James");
	diamondTrap1.takeDamage(30);
	diamondTrap2.attack("Lebron James");
	diamondTrap1.takeDamage(30);
	diamondTrap2.attack("Lebron James");
	diamondTrap1.takeDamage(30);
	diamondTrap2.attack("Lebron James");
	diamondTrap1.takeDamage(30);
	diamondTrap1.beRepaired(10);
	diamondTrap1.whoAmI();

	return 0;
}