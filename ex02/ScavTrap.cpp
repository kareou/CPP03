#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap constructor called\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}

ScavTrap::ScavTrap(const std::string& name)
{
    this->Name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& tmp)
{
    this->Name = tmp.Name;
    this->Hit_points = tmp.Hit_points;
    this->Energy_points = tmp.Energy_points;
    this->Attack_damage = tmp.Attack_damage;
    std::cout << "ScavTrap operator= called\n";
    return *this;
}

void    ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->Name << " attack " << target << ", causing " << this->Attack_damage << " points of damage!\n";
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << " have enterred in Gate keeper mode\n";
}