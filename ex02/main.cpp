#include "FragTrap.hpp"

int main()
{
    FragTrap    frag("frag");

    frag.attack("target");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.highFivesGuys();
    return 0;
}
