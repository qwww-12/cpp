#include "FragTrap.hpp"

FragTrap::FragTrap( ) : ClapTrap("Default")
{
	std::cout << "FragTrap default constructor called" << std::endl;
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap parameterized constructor called" << std::endl;
	hit_point = 100;
	energy_point = 100;
	attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &op )
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this == &op)
		return (*this);
	this->name = op.name;
	this->hit_point = op.hit_point;
	this->energy_point = op.energy_point;
	this->attack_damage = op.attack_damage;
	return (*this);
}

FragTrap::~FragTrap( )
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << name << " requests a positive high five" << std::endl;
}
