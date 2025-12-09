#include "ClapTrap.hpp"

ClapTrap::ClapTrap( ): name("Default"), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name(name), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "ClapTrap parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &copy ) : name(copy.name), hit_point(copy.hit_point), energy_point(copy.energy_point), attack_damage(copy.attack_damage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &op )
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	this->name = op.name;
	this->attack_damage = op.attack_damage;
	this->energy_point = op.energy_point;
	this->hit_point = op.hit_point;
	return (*this);
}

ClapTrap::~ClapTrap( )
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string &target )
{
	if (hit_point == 0)
	{
		std::cout << "ClapTrap " << name << " cant't attack, is already you destroyed" << std::endl;
		return ;
	}
	if (energy_point == 0)
	{
		std::cout << "ClapTrap " << name << " don't have energy point to attack" << std::endl;
		return ;
	}
	energy_point--;
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_point == 0)
	{
		std::cout << "ClapTrap " << name << " can't repaired hit_point, is already you destroyed" << std::endl;
		return ;
	}
	if (energy_point == 0)
	{
		std::cout << "ClapTrap " << name << " don't have energy point to repaired your hit_point" << std::endl;
		return ;
	}
	energy_point--;
	hit_point += static_cast<int>(amount);
	std::cout << "ClapTrap " << name << " repaired your hit_point +" << amount << " hp is " << hit_point << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (hit_point <= 0)
	{
		std::cout << "ClapTrap " << name << " this target already destroyed" << std::endl;
		hit_point = 0;
		return ;
	}
	hit_point -= static_cast<int>(amount);
	if (hit_point < 0)
		hit_point = 0;
	std::cout << "ClapTrap " << name << " take damage, points of damage " << amount << " hp is " << hit_point << std::endl;
}
