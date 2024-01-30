#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name(ClapTrap::_name)
{
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = 50;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = 50;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap " << this->_name <<  " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)// : ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	this->_name = obj._name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoint = obj._hitPoint;
	this->_energyPoint = obj._energyPoint;
	this->_attackDamage = obj._attackDamage;

	std::cout << "DiamondTrap " << this->_name <<  " copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoint = obj._hitPoint;
		this->_energyPoint = obj._energyPoint;
		this->_attackDamage = obj._attackDamage;
	}
	std::cout << "DiamondTrap operator = " << this->_name <<  " overiding called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " is destructed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamonTrap's name is " << this->_name << std::endl;
	std::cout << "ClapTrap's name is " << ClapTrap::_name << std::endl;
}