#include "zombie.hpp"

// Zombie :: Zombie() : name("") {}
void  Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(const std::string& name){
    this->name = name;
}
Zombie* Zombie::newZombie( std::string name )
{
    Zombie* zombie = new Zombie();
    zombie->setName(name);
    return zombie;
}