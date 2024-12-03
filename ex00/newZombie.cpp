#include "zombie.hpp"

Zombie* newZombie( std::string name )
{
	return new Zombie(name);
}
Zombie* zombieHorde( int N, std::string name )
{
	Zombie* horder = new Zombie[N];
	for (int i =0 ; i< N;i++)
	{
		new (&horder[i]) Zombie(name);
	}
	return horder;
}