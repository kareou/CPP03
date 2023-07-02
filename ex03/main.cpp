#include "diamondtrap.hpp"

int main()
{
    DiamondTrap diamondTrap("DiamondTrap");

    diamondTrap.attack("target");
    diamondTrap.takeDamage(10);
    diamondTrap.guardGate();
    diamondTrap.highFivesGuys();
    diamondTrap.whoAmI();
    return 0;
}
