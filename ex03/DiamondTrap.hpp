#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string	Name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &copy);
    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &copy);
    void    attack(const std::string& target);

    void	whoAmI();
};

#endif