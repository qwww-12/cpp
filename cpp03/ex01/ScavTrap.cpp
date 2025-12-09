#include "ScavTrap.hpp"

ScavTrap::ScavTrap( ) : ClapTrap("Default")
{
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
	std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &copy ): ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &op )
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	this->name = op.name;
	this->hit_point = op.hit_point;
	this->energy_point = op.energy_point;
	this->attack_damage = op.attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap( )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack( const std::string &target )
{
	if (hit_point == 0)
	{
		std::cout << "ScavTrap " << name << " cant't attack, is already you destroyed" << std::endl;
		return ;
	}
	if (energy_point == 0)
	{
		std::cout << "ScavTrap " << name << " don't have energy point to attack" << std::endl;
		return ;
	}
	energy_point--;
	std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
