#ifndef SVAVTRAP_HPP
# define SVAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& tmp);
        void    attack(const std::string& target);

        void    guardGate();
};

#endif