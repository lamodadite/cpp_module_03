#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "default";
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " is constructed!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " is constructed!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is destructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	this->_name = obj._name;
	this->_hitPoint = obj._hitPoint;
	this->_energyPoint = obj._energyPoint;
	this->_attackDamage = obj._attackDamage;
	std::cout << "ClapTrap " << this->_name << "'s copy constructor is called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	this->_name = obj._name;
	this->_hitPoint = obj._hitPoint;
	this->_energyPoint = obj._energyPoint;
	this->_attackDamage = obj._attackDamage;
	std::cout << "ClapTrap " << this->_name << "'s operator '=' is called!" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoint == 0 || this->_energyPoint == 0) {
		std::cout << "ClapTrap " << this->_name << " can't move" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoint >= amount) {
		this->_energyPoint -= amount;
	} else {
		this->_energyPoint = 0;
	}
	std::cout << "ClapTrap " << this->_name << " take's " << amount << " damage!" << std::endl;
	if (this->_hitPoint == 0)
		std::cout << "ClapTrap " << this->_name << " is died..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint == 0 || this->_energyPoint == 0) {
		std::cout << "ClapTrap " << this->_name << " can't repair" << std::endl;
	} else {
		this->_energyPoint--;
		this->_hitPoint += amount;
		std::cout << "ClapTrap " << this->_name << " be rapaired " << amount << " points itself!" << std::endl; 
	}
}