#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

//ex00
class ClapTrap
{
private:
    std::string Name;
    int Hit_points;
    int Energy_points;
    int Attack_damage;

public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator=(const ClapTrap& tmp);
    ~ClapTrap();
};

#endif