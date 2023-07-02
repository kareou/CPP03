#include"ClapTrap.hpp"

int main()
{
    ClapTrap a("a");
    
    a.attack("b");
    a.takeDamage(5);
    a.beRepaired(5);
    
    return 0;
}
