#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hitPoint;
		unsigned int _energyPoint;
		unsigned int _attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap &obj);
		ClapTrap& operator=(const ClapTrap &obj);
		virtual void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif