#include "zombie.hpp"

Zombie* newZombie( std::string name )
{
	return new Zombie(name);
}
Zombie* zombieHorde( int N, std::string name )
{
	for (int i =0 ; i< N;i++)
	{
		
		newZombie(name);
		announce(name)
	}
}