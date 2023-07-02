#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("a");

    a.attack("b");
    a.takeDamage(10);
    a.beRepaired(10);
    a.guardGate();
    return 0;
}
