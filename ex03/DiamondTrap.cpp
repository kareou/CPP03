#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    std::cout << "DiamondTrap Name constructor called" << std::endl;
    this->Name = name;
    this->Hit_points = FragTrap::Hit_points;
    this->Energy_points = ScavTrap::Energy_points;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
    std::cout << "DiamondTrap Copy constructor called" << std::endl;
    *this = copy;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    std::cout << "DiamondTrap Assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->Name = copy.Name;
        this->Hit_points = copy.Hit_points;
        this->Energy_points = copy.Energy_points;
        this->Attack_damage = copy.Attack_damage;
    }
    return (*this);
}

void	DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap Name: " << this->Name << std::endl;
    std::cout << "ClapTrap Name: " << ClapTrap::Name << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}