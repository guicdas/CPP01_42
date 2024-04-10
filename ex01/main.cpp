#include "Zombie.hpp"

int main(void){
	std::string name;
	int ZombieNumber;

    std::cout << "\nTesting zombieHorde.cpp\n\n";
    std::cout << "ZombieHorde name:\t";
    std::cin >> name;
	std::cout << "How much zombies:\t";
    std::cin >> ZombieNumber;

	std::cout << "\n" ;
    Zombie *firstZombie = zombieHorde(ZombieNumber, name);
	std::cout << "\n" << ZombieNumber << " zombies have been created.\n\n";

    for(int i = 0; i < ZombieNumber ; i++)
		firstZombie[i].announce();

	std::cout << "\n" ;
	delete [] firstZombie;
	std::cout << "\n" ;

    return 0;
}