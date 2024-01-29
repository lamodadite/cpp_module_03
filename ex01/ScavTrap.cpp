#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "default";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap " << this->_name <<  " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	this->_name = obj._name;
	this->_hitPoint = obj._hitPoint;
	this->_energyPoint = obj._energyPoint;
	this->_attackDamage = obj._attackDamage;

	std::cout << "ScavTrap " << this->_name <<  " copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoint = obj._hitPoint;
		this->_energyPoint = obj._energyPoint;
		this->_attackDamage = obj._attackDamage;
	}
	std::cout << "ScavTrap operator = " << this->_name <<  " overiding called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " is destructed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoint == 0 || this->_energyPoint == 0) {
		std::cout << "ScavTrap " << this->_name << " can't move" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoint--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode!" << std::endl;
}