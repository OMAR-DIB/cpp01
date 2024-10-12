#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string.h>
#include <iostream>
using std::string;

class Zombie
{
private:
    string name;
public:
    Zombie();
    // ~Zombie();
    void  announce( void );
    void setName(const std::string& name);
    Zombie* newZombie( std::string name );
    void randomChump( std::string name );
};

Zombie::Zombie(/* args */)
{
}

// Zombie::~Zombie()
// {
// }

#endif