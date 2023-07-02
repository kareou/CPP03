#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "constructor called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called\n";
}

ClapTrap::ClapTrap(const std::string& name)
{
    this->Name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 12;
    std::cout << "constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    *this = copy;
    std::cout << "copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& tmp)
{
    this->Name = tmp.Name;
    this->Hit_points = tmp.Hit_points;
    this->Energy_points = tmp.Energy_points;
    this->Attack_damage = tmp.Attack_damage;
    std::cout << "operator= called\n";
    return *this;
}

void    ClapTrap::attack(const std::string& target)
{
    if(this->Energy_points <= 0)
        std::cout << "no enought energy\n";
    else
    {
        this->Energy_points--;
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!\n";
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{   
    this->Hit_points -= amount;
    if(this->Hit_points <= 0)
        std::cout << "ClapTrap " << this->Name << " is dead!\n";
    else
        std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!\n";
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(this->Energy_points <= 0)
        std::cout << "no enought energy\n";
    else
    {
        this->Hit_points += amount;
        this->Energy_points--;
        std::cout << "ClapTrap " << this->Name << " is repaired by " << amount << " points!\n";
    }
}