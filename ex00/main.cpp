#include "zombie.hpp"
#include <string>
#include <iostream>

#include "zombie.hpp"

int main() {
    int N = 5;
    std::string name = "Walker";

    // Create a horde of Zombies
    Zombie* horde = zombieHorde(N, name);
	
    if (horde != NULL) {
        // Make each Zombie announce itself
        for (int i = 0; i < N; i++) {
            horde[i].announce();
        }
        // Free the memory
        delete[] horde;
    } else {
        std::cout << "Failed to create Zombie horde.\n";
    }

    return 0;
}
