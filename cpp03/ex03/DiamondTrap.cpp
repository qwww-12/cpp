#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( ) : ScavTrap("Default_clap_name")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	DiamondTrap::name = "Default";
	hit_point = 100;
	energy_point = 50;
	attack_damage = 30;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap parameterized constructor called" << std::endl;
	DiamondTrap::name = name;
	hit_point = 100;
	energy_point = 50;
	attack_damage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap &copy ) : ClapTrap(copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	DiamondTrap::name = copy.DiamondTrap::name;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &op )
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	DiamondTrap::name = op.DiamondTrap::name;
	ClapTrap::name = op.ClapTrap::name;
	hit_point = op.hit_point;
	energy_point = op.energy_point;
	attack_damage = op.attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap( )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name: " << DiamondTrap::name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
