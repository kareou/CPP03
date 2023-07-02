#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& copy);
    FragTrap& operator=(const FragTrap& tmp);
    void    attack(const std::string& target);
    void    highFivesGuys(void);
};

#endif