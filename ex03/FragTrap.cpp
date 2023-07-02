#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "fragtrap constructor called\n";
}

FragTrap::~FragTrap()
{
    std::cout << "fragtrap destructor called\n";
}

FragTrap::FragTrap(const std::string& name)
{
    this->Name = name;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    std::cout << "fragtrap constructor called\n";
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "fragtrap copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& tmp)
{
    this->Name = tmp.Name;
    this->Hit_points = tmp.Hit_points;
    this->Energy_points = tmp.Energy_points;
    this->Attack_damage = tmp.Attack_damage;
    std::cout << "fragtrap operator= called\n";
    return *this;
}

void    FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << this->Name << " attack " << target << ", causing " << this->Attack_damage << " points of damage!\n";
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->Name << " is asking for high fives!\n";
}